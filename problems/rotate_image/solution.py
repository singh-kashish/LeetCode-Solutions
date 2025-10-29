class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead. -> 1st row becomes the 3rd column, 2nd row becomes 2nd col, 3rd row becomes 1st column -> Take diagonal starting from 1st columns bottom to last column's first(this line will remain untouched)
        now swap every i,j pair with j,i and finally reverse the rows(m) from bottom to top. Col(n)
        """
        m = len(matrix)
        n = len(matrix[0])
        for i in range(m):
            for j in range(i+1,n):
               matrix[i][j],matrix[j][i]=matrix[j][i],matrix[i][j]
        for i in range(n):
            matrix[i].reverse() 
        # def reverse(row1:List[int],row2:List[int])->None:
        #     temp = row1
        #     row1 = row2
        #     row2 = temp
