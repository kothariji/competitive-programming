public class DiagonalMatrixSum {
   public static void main(String[] args) {
    int [][]mat = {{1,2,3},{4,5,6},{7,8,9}};
    int n = mat.length;
        int m = mat[0].length;
        int sum = 0 ; 
        for(int i = 0 ; i<n ; i++){
         
             sum += mat[i][i];
         
        }
        int row = 0 , col = m-1;
        while(row<n && col >=0){
            if(row != col) {
            sum += mat[row][col];}
            row++;
            col--;
        }
        System.out.print(sum);
   } 
}
