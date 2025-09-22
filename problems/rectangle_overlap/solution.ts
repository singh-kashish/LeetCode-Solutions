function isRectangleOverlap(rec1: number[], rec2: number[]): boolean {
    let rect1YLow=rec1[1], rect1YHigh = rec1[3], rect1Xlow = rec1[0], rect1XHigh=rec1[2];
    let rect2YLow=rec2[1], rect2YHigh = rec2[3], rect2Xlow = rec2[0], rect2XHigh=rec2[2];
    // Rectangle 1 is entirely to left of rectangle 2 or rectangle 2 is entirely to left rectangle 1
    if(rect1XHigh<=rect2Xlow || rect2XHigh<=rect1Xlow)return false;
    // Rectangle 1 is entirely below Rectangle 2 or Rectangle 2 is entirely below Rectangle 1
    if(rect1YHigh<=rect2YLow || rect2YHigh<=rect1YLow)return false;
    return true;
};