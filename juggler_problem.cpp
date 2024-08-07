//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   void solve(long long n,vector<long long> &a){
        if(n==1){
           // a.push_back(n);
            return;
        }
        
        if(n%2==0){
            n=sqrt(n);
        }
        else //if(n%2!=0)
        {
            n=(sqrt(n))*n;
        }
        a.push_back(n);
        
        solve(n,a);
        return;
    }
  
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long> ans;
        ans.push_back(n);
        
        //solve(n,ans);// --->using Recursions...
        

       //iterative Approach....
        while(n!=1){
            if(n%2==0){
                n=sqrt(n);
            }
            else
            {
                n=n*sqrt(n);
            }
            
            ans.push_back(n);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        Solution ob;
        vector<long long> ans = ob.jugglerSequence(n);
        for (long long u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends