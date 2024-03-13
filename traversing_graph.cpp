#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int mat[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };
    int r=sizeof(mat)/sizeof(mat[0]);
    int c=sizeof(mat)/sizeof(mat[0]);
    vecor<vector<int> > visited(r, vector<int> c,0)
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(!visited[i][j]){}
            cout<<i<<","<<j<<endl;
        }
    }
}