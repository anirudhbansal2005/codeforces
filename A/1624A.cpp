#include<bits/stdc++.h>
using namespace std;
void operationsRequired(int& maxVal, int& minVal) {
    int ops = maxVal - minVal;
    cout<<ops<<"\n";
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a;
        cin >> a;
        vector<int> b(a);
        for(int i=0; i<a; i++){
           cin >> b[i];
        }
        int minVal = *min_element(b.begin(), b.end());
        int maxVal = *max_element(b.begin(), b.end());
        operationsRequired(maxVal, minVal);
    }

}