#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int prob;
    int x;
    string change;
    cin >> prob;
    for (int i = 0; i<=prob; i++) {
        getline(cin, change);
        if (change=="X++"){
            x++;
            }
        else if ( change == "--X"){
            --x;
        }
                else if ( change == "++X"){
            ++x;
        }
                else if ( change == "X--"){
            x--;
        }

    }
    cout<<x;
}