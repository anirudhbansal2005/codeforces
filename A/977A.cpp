#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int num;
    int sub;
    cin >> num;
    cin >> sub;
    for(int i=0; i<sub; i++){
        if((num%10)==0){
            num=num/10;
        }
        else {
            num--;
        }
    }
    cout<<num;
}