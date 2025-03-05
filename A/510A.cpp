#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> c(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i%2==0){
                c[i][j] = '#';
            }
            else if(i%2!=0){
                c[i][j] = '.';
            }
        }
    }
    for(int i=1; i<n; i+=4){
        c[i][m-1] = '#';
    } 
    for(int i=3; i<n; i+=4){
        c[i][0] = '#';
    }   
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<c[i][j];
        }
        cout<<"\n";
    }
}