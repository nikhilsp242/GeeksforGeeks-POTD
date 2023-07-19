//{ Driver Code Starts
//Initial template for C++
                                                                                                //HAS PASSED ALL THE TEST CASES  (1120 / 1120)
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        int n = A.length();
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int i = n-1;i>=0;i--){
            dp[i][i] = 1;
            for(int j = i+1;j<n;j++){
                if(A[i]==A[j]) dp[i][j] = dp[i+1][j-1] + 2;
                else dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends