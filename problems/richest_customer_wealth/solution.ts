function maximumWealth(accounts: number[][]): number {
    let mostW : number = 1;
    accounts.forEach((customer)=>{
        let customerBal : number = 0;
        customer.forEach(amount=>customerBal+=amount);
        mostW = Math.max(mostW,customerBal);
    })
    return mostW;
};