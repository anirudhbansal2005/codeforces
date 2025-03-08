#include<bits/stdc++.h>
using namespace std;
int ribbonCut(int x, vector<int> y){
    int sum = 0, count = 0;
    if(y[0]+y[1]+y[2]==x){
        return 3;
    }
    else if (y[0]+y[1]==x || y[1]+y[2]==x || y[0]+y[3]==x){
        return 2;
    }
    return 1;
}
int main(){
    int n;
    vector<int> tree(3);
    cin >> n;
    for(int i=0; i<3; i++){
        cin >> tree[i];
    }
    sort(tree.begin(), tree.end());
    cout<<ribbonCut(n, tree);
}