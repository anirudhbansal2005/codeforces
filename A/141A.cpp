#include<bits/stdc++.h>
using namespace std;
bool compareString(string x, string y){
    int xsize = x.size(), ysize = y.size();
    if(xsize!=ysize){
       return false;
    }
    else if(xsize==ysize){
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        return x==y;
    }
}
int main(){
    string str1, str2, fstr;
    cin >> str1 >> str2;
    fstr = str1+str2;
    cin >> str1;
    if(compareString(fstr, str1)){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}