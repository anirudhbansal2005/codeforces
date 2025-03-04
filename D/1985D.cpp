#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n, m, count = 0, maxCount = 0;
        cin >> n >> m;
        char arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
                if(arr[i][j]=='#'){
                    count++;
                }
                else {
                    maxCount = max(count, maxCount);
                }
            }
        }
    }
}