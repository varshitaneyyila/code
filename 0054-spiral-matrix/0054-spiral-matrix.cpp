class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while(top <= bottom && left <= right)
        {
            // Top row
            for(int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            // Right column
            for(int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // Bottom row
            if(top <= bottom)
            {
                for(int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }

            // Left column
            if(left <= right)
            {
                for(int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};