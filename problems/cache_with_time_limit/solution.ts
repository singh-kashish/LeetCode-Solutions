type cacheEntry = {
    value:number;
    expiresAt:number;
}
class TimeLimitedCache {
    private store: Map<number,cacheEntry>;
    constructor() {
        this.store=new Map<number,cacheEntry>();
    }
    
    set(key: number, value: number, duration: number): boolean {
        const now = Date.now();
        const existing = this.store.get(key);
        const hadUnExpired = !!existing && existing.expiresAt>now;
        this.store.set(key,{value,expiresAt:now+duration});
        return hadUnExpired;
    }
    
    get(key: number): number {
        const now = Date.now();
        const entry = this.store.get(key);
        if(!entry)return -1;
        if(entry.expiresAt<=now){
            this.store.delete(key);
            return -1;
        }
        return entry.value;
    }
    
    count(): number {
        const timeRn = Date.now();
        let c=0;
        for(const [k,entry] of this.store){
            if(timeRn>=entry.expiresAt){
                this.store.delete(k);
            } else {
                c++;
            }
        }
        return c;
    }
}

/**
 * const timeLimitedCache = new TimeLimitedCache()
 * timeLimitedCache.set(1, 42, 1000); // false
 * timeLimitedCache.get(1) // 42
 * timeLimitedCache.count() // 1
 */