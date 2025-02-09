#include<bits/stdc++.h>
using namespace std;
void cipherInitial(vector<int>& v, vector<char>& vv){

}
int main(){
    int cases;
    cin >> cases;
     for(int i=0; i<cases; i++){
        int cipher;
        cin >> cipher;
        vector<int> x(cipher);
        vector<char> c;
        int moves;
        for(int i=0; i<cipher; i++){
            cin >> x[i];
        }
        for(int i=0; i<cipher; i++){
            cin >> moves; 
            for(int i=0; i<moves; i++){
                c.resize(moves);
                cin >> c[i];
            }
            cipherInitial(x, c);
        }
        
     }
}