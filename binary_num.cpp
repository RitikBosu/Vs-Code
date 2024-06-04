//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string binaryNextNumber(string s) {
        while(s[0]!='1' && s.size()>1)
        s.erase(s.begin());
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                s[i]='1';
                return s;  
            }
            else
            s[i]='0';
        }
        return '1'+s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends