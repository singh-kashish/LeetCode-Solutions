var TimeLimitedCache = function() {
    this.cache = new Map();
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function(key, value, duration) {
    const now = Date.now();
    const existing = this.cache.get(key);
    const hasExpired = !!(existing && existing.expiresAt>now);
    this.cache.set(key,{value, expiresAt:now+duration});
    return hasExpired;
};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    const now = Date.now();
    const existing = this.cache.get(key);
    if(!existing)return -1;
    if(existing.expiresAt<now){
        this.cache.delete(key);
        return -1;
    }
    return existing.value;
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    const now = Date.now();
    let c = 0;
    for(const [x,y] of this.cache.entries()){
        if(y.expiresAt<now){
            this.cache.delete(x);
        } else c++;
    }
    return c;
};

/**
 * const timeLimitedCache = new TimeLimitedCache()
 * timeLimitedCache.set(1, 42, 1000); // false
 * timeLimitedCache.get(1) // 42
 * timeLimitedCache.count() // 1
 */