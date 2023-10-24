class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s,e;
        for(int i=0;i<matrix.size();i++){
            s=0,e=matrix[i].size()-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(matrix[i][mid]==target)
                    return true;
                else if(matrix[i][mid]<target)
                    s=mid+1;
                else
                    e=mid-1;
            }
        }  
        return false;  
    }
};
