type F = (x: number) => number;

function compose(functions: F[]): F {
    
    return function(x) {
        let result:number =x;
        functions.reverse().forEach(fn=>{
            result = fn(result);
        })
        return result;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */