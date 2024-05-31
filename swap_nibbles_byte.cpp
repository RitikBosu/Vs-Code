//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
         int i=0,j=4;
        while(i<=3)
        {
            int a=(n &(1<<i))==0?0:1;
            int b=(n &(1<<j))==0?0:1;
            if(a!=b) // if both bit are not same swap them , swapping is nothing but toogling the bit
            {
                n=n^(1<<i);
                n=n^(1<<j);
                
            }
            i++;
            j++;
        }
        return n;
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
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends