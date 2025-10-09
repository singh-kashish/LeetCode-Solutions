function simplifyPath(path: string): string {
    const segments = path.split('/');
    let res = Array<string>();
    for(const seg of segments){
        if(seg===""||seg==='.')continue;
        if(seg===".."){
            if(res.length>0)res.pop();
            continue;
        }
        res.push(seg);
    }
    return res.length===0?"/":`/${res.join('/')}`;
};