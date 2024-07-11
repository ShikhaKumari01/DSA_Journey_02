// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe(int row,int col,vector<vector<char>>&board,int n){
//     //left row
//     int i=row;
//     int j=col;
//     while(j>=0){
//         if(board[i][j]=='Q') {
//             return false;
//         }
//         j--;
//     }
//     //upper left diagonal
//     i=row;
//     j=col;
//     while(i>=0&&j>=0){
//         if(board[i][j]=='Q') {
//             return false;
//         }
//         i--;
//         j--;
//     }
//     //bottom left diagonal
//     i=row;
//     j=col;
//     while(i<n&&j>=0){
//         if(board[i][j]=='Q') {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
// void printBoard(vector<vector<char>>&board,int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }
// void placeQueen(vector<vector<char>>&board,int n,int col){
//     if(col>=n){
//         printBoard(board,n);
//         return;
//     }
//     for(int row=0;row<n;row++){
//         if(isSafe(row,col,board,n)){
//             board[row][col]='Q';
//             placeQueen(board,n,col+1);
//             board[row][col]='-';
//         }
//     }
// }
// int main(){
//     int n=4;
//     vector<vector<char>>board(n,vector<char>(n,'-'));
//     int col=0;
//     placeQueen(board,n,col);
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe(int row,int col,vector<vector<char>>&board,int n){
//     //left row
//     int i=row;
//     int j=col;
//     while(j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         j--;
//     }
//     //upper left diagonal
//     i=row;
//     j=col;
//     while(i>=0&&j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         i--;
//         j--;
//     }
//     //bottom left diagonal
//     i=row;
//     j=col;
//     while(i<n&&j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
// void printBoard(vector<vector<char>>&board,int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }
// void placeQueen(vector<vector<char>>&board,int n,int col){
//     if(col>=n){
//         printBoard(board,n);
//         return;
//     }
//     for(int row=0;row<n;row++){
//         if(isSafe(row,col,board,n)){
//            board[row][col]='Q';
//            placeQueen(board,n,col+1) ;
//            board[row][col]='-';
//         }
//     }
// }
// int main(){
//     int n=4;
//     vector<vector<char>>board(n,vector<char>(n,'-'));
//     int col=0;
//     placeQueen(board,n,col);
//     return 0;
// }




#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int row,int col,vector<vector<char>>&board,int n){
    //left row
    int i=row;
    int j=col;
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }
    //upper left diagonal
    i=row;
    j=col;
    while(i>=0&&j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
    //bottom left diagonal
    i=row;
    j=col;
    while(i<n&&j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void printBoard(vector<vector<char>>&board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void placeQueen(vector<vector<char>>&board,int col,int n){
    if(col==n){
        printBoard(board,n);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            placeQueen(board,col+1,n);
            board[row][col]='-';
        }
    }
}
int main(){
    int n=4;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;
    placeQueen(board,col,n);
}