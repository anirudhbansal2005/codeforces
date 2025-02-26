#include<bits/stdc++.h>
using namespace std;
void shiftRight(char a[3][10], string b){
    string c = "";
    int k=0;
    for(int j=0; j<3; j++){
        for(int i=0; i<10; i++){
            if(b[k]==a[j][i]){
                c+=a[j][i+1];
                k++;
                i=-1;
                j=0;
            }
        }
    }
    cout<<c;
}
void shiftLeft(char a[3][10], string b){
    string c = "";
    int k=0;
    for(int j=0; j<3; j++){
        for(int i=0; i<10; i++){
            if(b[k]==a[j][i]){
                c+=a[j][i-1];
                k++;
                i=0;
                j=0;
            }
        }
    }
    cout<<c;
}
int main(){
    char c;
    cin >> c;
    string s;
    cin >> s;
    char arr[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
                      {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, 
                      {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
    if(c=='R'){
        shiftLeft(arr, s);
    }
    else {
        shiftRight(arr, s);
    }
}