class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <int> xaxis;
        vector <int> yaxis;
        for(int i = 0;i<matrix.size();i++) {
            for (int j = 0; j<matrix[0].size();j++) {
                if (matrix[i][j] == 0) {
                    xaxis.push_back(i);
                    yaxis.push_back(j);
                }
            }
        }
        for (int i = 0;i<xaxis.size();i++) {
            cout<< xaxis[i]<<","<<yaxis[i]<<endl;
        }
        for (int item =0;item<xaxis.size();item++) {
            // if (item > 0 && xaxis[item-1] == xaxis[item]) {
                for(int x =0;x<matrix[0].size();x++) {
                    matrix[xaxis[item]][x] = 0;
                }
            // }
        }
        for (int item =0;item<yaxis.size();item++) {
            // if (item > 0 && yaxis[item-1] != yaxis[item]) {
                for(int x =0;x<matrix.size();x++) {
                    matrix[x][yaxis[item]] = 0;
                }
            // } 
        }
    }
};