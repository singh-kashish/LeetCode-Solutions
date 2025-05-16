function maxProfit(prices: number[]): number {
    let minPrice = Infinity;
    let maxProf = 0;
    for(let price of prices){
        if(price<minPrice)minPrice=price;
        maxProf = Math.max(maxProf,price-minPrice);
    }
    return maxProf;
};