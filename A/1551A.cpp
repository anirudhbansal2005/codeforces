#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    int total;
    int c1, c2;
    float calc;
    for(int i=0; i<cases; i++){
        cin >> total;
        calc = (float)total/3)%1);
        cout<<calc<<"\n";
        if(calc==0){
            c1 = total/3;
            c2 = c1;
        }
        else if (calc!=0){
            
            c1 = total/3;
            cout<<(float)total/3;
            c2 = c1;
            if(c1+(2*c2)!=total){
                c1=c1-1;
                c2=c2;
            }
        }
    cout<<c1<<" "<<c2<<"\n";
    c1=0;
    c2=0;
    }
    
}
