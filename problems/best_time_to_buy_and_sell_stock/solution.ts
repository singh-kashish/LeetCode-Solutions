function maxProfit(prices: number[]): number {
    let maxProfit:number = 0;
    let minPrice:number = Number.MAX_SAFE_INTEGER;
    for(let i : number = 0; i<prices.length; i++){
        if(prices[i]<=minPrice)minPrice=prices[i];
        maxProfit = Math.max(maxProfit,prices[i]-minPrice);
    }
    return maxProfit;
    
};