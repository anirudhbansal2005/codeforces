#include<bits/stdc++.h>
using namespace std;
int blackSqaure(int arr[4], string x){
    int length = x.size();
    int k=0, count=0;
    for(int j=1; j<5; j++){
        for(int i=0; i<length; i++){
            if(x[i]==char(j + '0')){
                count+=arr[k];
            }
        }
        k++;
    }
    return count;
}

int main(){
    int arr[4];
    for(int i=0; i<4; i++){
        cin >> arr[i];
    }
    string s;
    cin >> s;
    cout<<blackSqaure(arr, s);
}