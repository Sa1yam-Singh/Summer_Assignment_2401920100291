class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int m=mat.length;
        int [][]ans=new int[r][c];
        int n=mat[0].length;
        if(r*c!=m*n){
            return mat;
        }
        else{
            for(int i=0;i<r*c;i++){
                ans[i/c][i%c]=mat[i/n][i%n];
            }
        }
        return ans;
    }
}
