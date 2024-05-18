class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        for (int m = 0; m<rows; m++) {
            if (target >= matrix[m][0] && matrix[m][cols-1] >= target) {
                for(int n = 0;n<cols;n++) {
                    if (target == matrix[m][n]) return true;
                }
            }
        }
        return false;
    }
}