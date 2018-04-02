#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    //2D board array
    char board[8][11]; 
    
    //board elements
    char empty = '0', mine = '*', wall = '+';
    
    //control variables
    int i = 0, j = 0;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 11; j++) {
            if (i == 0 || i == 7) {
                board[i][j] = wall;
            } else if (i == 1 && j == 0 || i == 6 && j == 10) {
                board[i][j] = wall;
            } else if (i > 1 && i < 6 && j == 0 || i > 1 && i < 6 && j == 10) {
                board[i][j] = wall;
            } else if (i == 2 && j == 7 || i == 4 && j == 5 || i == 4 && j == 7) {
                board[i][j] = mine;
            } else {
                board[i][j] = empty;
            }
        }
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 11; j++) {
            cout << board[i][j];
        }
        cout << "\n";
    }
}
/**
+++++++++++
+0000000000
+000000*00+
+000000000+
+000*00*00+
+000000000+
M000*00000+
+++++++++++
**/