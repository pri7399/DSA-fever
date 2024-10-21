class Solution {
public:
    int n,m;
    //vector<vector<int>> dp(n, vector<int>(m, -1));
    int helper(vector<vector<int>> &grid, int i, int j, int t,vector<vector<int>> &dp)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]>t || grid[i][j]<0) return(0);
        if(i==n-1 && j==m-1) return(1);
        if(dp[i][j]!=-1) return(dp[i][j]);
        grid[i][j] *=-1;
        int temp= helper(grid,i-1,j,t,dp) || helper(grid,i+1,j,t,dp) || helper(grid,i,j-1,t,dp) || helper(grid,i,j+1,t,dp);
        grid[i][j] *=-1;
        return(dp[i][j]=temp);
    }
   
    int swimInWater(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int start=0,end=n*n;
        int ans=0;
        while(start<=end)
        {
            vector<vector<int>> dp(n, vector<int>(m, -1));
            int mid=start+(end-start)/2;
            if(helper(grid,0,0,mid,dp)==1)
            {
                //cout<<"aya"<<endl;
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return(ans);

    }
};