function coinChange(coins: number[], amount: number): number {
    let minCoinsNeededForThisAmount : number [] = new Array(amount+1).fill(Infinity);
    minCoinsNeededForThisAmount[0]=0;
    for(let thisAmount = 1 ; thisAmount <= amount; thisAmount++){
        for(const coin of coins){
            if(coin<=thisAmount){
                const remainingAmountAfterUsingThisCoin = thisAmount-coin;
                if(minCoinsNeededForThisAmount[remainingAmountAfterUsingThisCoin]!==Infinity){
                    minCoinsNeededForThisAmount[thisAmount] = Math.min(minCoinsNeededForThisAmount[remainingAmountAfterUsingThisCoin]+1,minCoinsNeededForThisAmount[thisAmount]);
                }
            }
        }
    }
    return minCoinsNeededForThisAmount[amount]===Infinity? -1 : minCoinsNeededForThisAmount[amount];
};