class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int startingPixelColor = image[sr][sc];
        if(startingPixelColor==color)return image;
        flood(image,sr,sc,color,startingPixelColor,n,m);
        return image;
    }
    void flood(vector<vector<int>>& image, int currRow, int currCol, int color, int startingColor, int n,int m){
        if(currRow<0 || currCol<0 || currRow>=n || currCol>=m)return;
        if(image[currRow][currCol]!=startingColor)return;
        // Fill
        image[currRow][currCol]=color;
        flood(image, currRow-1,currCol,color,startingColor,n,m);
        flood(image, currRow+1, currCol,color,startingColor,n,m);
        flood(image, currRow,currCol+1,color,startingColor,n,m);
        flood(image, currRow, currCol-1,color, startingColor,n,m);
        return;
    }
};