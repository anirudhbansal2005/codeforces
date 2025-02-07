#include<iostream>
#include<string>
using namespace std;
int main(){
        int loop;
        cin >> loop;
        string word;
        int count = -2;
        for(int i=1; i<=loop; i++){
            cin>>word;
            int size = word.size();
            if(size>10) {
                for( int i = 0; i<size; i++ )
                    count++;
                cout<<word[0]<<count<<word[count+1]<<"\n";
                count = -2;
            }
            else {
                cout<<word<<"\n";
            }
    }
}