class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        for (int m = 0; m<rows; m++) {
            if (target >= matrix[m][0] && matrix[m][cols-1] >= target) {
                int left = 0;
                int right = cols -1;
                while(left <=right) {
                    int mid = (left+right) /2;
                    if (matrix[m][mid] == target) return true;
                    else if (matrix[m][mid] > target) 
                        right = mid -1;
                    else 
                        left = mid +1;
                }
            }
        }
        return false;
    }
}