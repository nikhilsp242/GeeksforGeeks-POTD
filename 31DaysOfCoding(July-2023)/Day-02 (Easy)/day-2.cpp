//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
                                                                                                //HAS PASSED ALL THE TEST CASES  (1120 / 1120)
// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        int mask = 1<<(r-l+1);
        mask--;
        mask = mask << (l-1);
        mask = mask & y;
        x = x | mask;
        return x;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends