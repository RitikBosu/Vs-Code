#include<iostream>
#include<vector>
using namespace std;
// void matrix(int a, int b){
//     for (int i=0; i<N+1; i++){
//         for(int j=0;j<i; j++){
//             cout<<matrix[i][j];
//         }
//     }
// }
// int main(){
//     int N,E, u, v;
//     cin>>N>>E;
//     int mat[N+1][N+1];
//     //INITIALISE WITH ZERO
//     for(int i=0; i<N+1; i++){
//         for(int j=0; j<N+1; j++){
//             mat[i][j]=0;
//         }
//     }
//     while(E--){
//         cin>>u>>v;
//         mat[u][v]=1;
//         mat[v][u]=1;
//     }
//     //print matrix
//     for(int i=0; i<N+1; i++){
//         for(int j=0; j<N+1; j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout <<endl;
//     }   
// }
int main(){
    int N, E, u, v;
    cin>>N>>E;
    vector<int> list[N+1];
    while(E--){
        cin>>u>>v;
        list[u].push_back(u);
        list[v].push_back(v);
    }
    for(int i=0; i<N+1; i++){
        cout<<i<<";";
        for(int ele: list[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}