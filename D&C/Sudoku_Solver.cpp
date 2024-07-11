#include<iostream>
using namespace std;
bool isSafe(int board[9][9],int i,int j,int val,int n){
    for(int row=0;row<n;row++){
        if(board[row][j]==val){
            return false;
        }
    }
    for(int col=0;col<n;col++){
        if(board[i][col]==val){
            return false;
        }
    }
    for(int p=0;p<n;p++){
        if(board[3*(i/3)+(p%3)][3*(j/3)+(p/3)]==val){
            return false;
        }
    }
    return true;
}
bool solve(int board[9][9],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0){
                for(int val=1;val<=9;val++){
                    if(isSafe(board,i,j,val,n)){
                        board[i][j]=val;
                        int aageKaSol=solve(board,n);
                        if(aageKaSol==true){
                            return true;
                        }
                        board[i][j]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main(){
    int board[9][9]={
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,0,6,0,0,7,5,0},
        {0,0,0,0,0,0,4,7,6},
        {0,7,0,0,4,5,0,0,0},
        {0,0,8,0,0,9,0,0,0}
    };
    //0->represents no number present at that place
    int n=9;
    solve(board,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}