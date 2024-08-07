//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    long long helper(int i,int len,vector<int>adj[],int n,vector<vector<long long>>& dp){
        if(len==n){
            return 1;
        }
        if(dp[i][len]!=-1) return dp[i][len];
        
        long long cnt=0;
        for(int& j:adj[i]){            //  dfs
            cnt+=helper(j,len+1,adj,n,dp);
            
        }
        
        return dp[i][len]=cnt;
    }
    long long getCount(int n) {
        // Your code goes here
        vector<int>adj[10];     // all possible from current button.
        adj[0]={0,8};
        adj[1]={1,2,4};
        adj[2]={1,2,3,5};
        adj[3]={3,2,6};
        adj[4]={4,1,5,7};
        adj[5]={2,4,5,6,8};
        adj[6]={3,5,6,9};
        adj[7]={4,7,8};
        adj[8]={5,8,0,7,9};
        adj[9]={6,8,9};
        
        vector<vector<long long>>dp(10,vector<long long>(n,-1));
        long long ans=0;
        for(int i=0;i<=9;i++){                // all possiblities of starting button pressed.
            ans+=helper(i,1,adj,n,dp);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends