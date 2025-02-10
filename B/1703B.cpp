#include<bits/stdc++.h>
using namespace std;
void balloonCalc(int x, string y){
    set<char> z(y.begin(), y.end());
    int t = z.size();
    cout<<(t*2)+(x-t)<<"\n";
}
int main(){
    int cases;
    cin >> cases;
    int length;
    string str;
    for(int i=0; i<cases; i++){
        cin >> length >> str;
        balloonCalc(length, str);
    }

}