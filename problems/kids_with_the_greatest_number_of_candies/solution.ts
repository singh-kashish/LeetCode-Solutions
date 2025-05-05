function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
    let result = new Array<boolean>(candies.length);
    let greatestAmong = candies[0];
    candies.forEach(cand=>greatestAmong=Math.max(cand,greatestAmong));
    for(let itr=0;itr<candies.length;itr++){
        result[itr] = candies[itr]+extraCandies >= greatestAmong ? true : false;
        
    }
    return result;
};