//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int padovanSequence(int n) {
        
        
        int mod = 1e9+ 7 ; 
       
        int a =1 ; 
        int b = 1 ; 
        int c = 1  ; 
        
        
        if( n < 3 )return 1 ; 
        int ans = 0 ; 
        
        
        for(int i = 3 ; i <=n ; i++){
            
            ans = a % mod + b %mod ; 
            a = b ; 
            b = c ; 
            c = ans ; 
           
        }
        return ans % mod  ; 
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
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends