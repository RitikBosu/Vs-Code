//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int col=mat[0].size();
        int row=mat.size();
        int arr[row][col]={0};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(k>col){
                  int newk=k%col;  
                  int p=(col-newk)%col;
                  int newcol=j+p;
                  if(newcol>=col){
                      int kk=newcol%col;
                      arr[i][kk]=mat[i][j];
                  }
                  else{
                      arr[i][newcol]=mat[i][j];
                  }
                  
                }
                else{
                  int p=(col-k)%col;
                  int newcol=j+p;
                  if(newcol>=col){
                      int kk=newcol%col;
                      arr[i][kk]=mat[i][j];
                  }
                  else{
                      arr[i][newcol]=mat[i][j];
                  }
                  
                
                }
                
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<row;i++){
            vector<int>aa;
            for(int j=0;j<col;j++){
                aa.push_back(arr[i][j]);
            }
            ans.push_back(aa);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends