#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);            
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        cout << 2 * n << "\n";
    }
}
