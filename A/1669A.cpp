#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int rating;
        cin >> rating;
        if(rating>=1900){
            cout<<"Division 1\n";
        }
        else if(rating>=1600){
            cout<<"Division 2\n";
        }
        else if(rating>=1400){
            cout<<"Division 3\n";
        }
        else {
            cout<<"Division 4\n";
        }
    }
}