#include<bits/stdc++.h>
using namespace std;
void posBishop(vector<vector<char>> board){
    for (int i = 1; i < 7; i++) {       
        for (int j = 1; j < 7; j++) { 
            if (board[i][j] == '#' &&
                board[i-1][j-1] == '#' && // Top-left
                board[i-1][j+1] == '#' && // Top-right
                board[i+1][j-1] == '#' && // Bottom-left
                board[i+1][j+1] == '#') { // Bottom-right
                cout << (i+1) << " " << (j+1) << "\n";
                return; 
            }
        }
    }
}
int main(){
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        vector<vector<char>> c1(8, vector<char>(8)); // Initialize 8x8 grid

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> c1[i][j]; // Now it's safe to access
            }
        }
        posBishop(c1);
    }
}