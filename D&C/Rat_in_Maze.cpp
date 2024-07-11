// #include<iostream>
// #include <string>
// #include<vector>
// using namespace std;
// bool isSafe(int i, int j, int row, int col, int maze[][3], vector<vector<bool>>& visited){
//     if (((i >= 0 && i < row) && (j >= 0 && j < col)) && maze[i][j] == 1 && visited[i][j] == false){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// void solve(int maze[][3],int row,int col,int i,int j,vector<vector<bool>>&visited,vector<string>&path,string output){
//     if(i==(row-1)&&j==(col-1)){
//         path.push_back(output);
//         return;
//     }
//     //down
//     if(isSafe(i+1,j,row,col,maze,visited)){
//         visited[i+1][j]=true;
//         solve(maze,row,col,i+1,j,visited,path,output+'D');
//         visited[i+1][j]=false;
//     }
//     //left
//     if(isSafe(i,j-1,row,col,maze,visited)){
//         visited[i][j-1]=true;
//         solve(maze,row,col,i,j-1,visited,path,output+'L');
//         visited[i][j-1]=false;
//     }
//     //right
//     if(isSafe(i,j+1,row,col,maze,visited)){
//         visited[i][j+1]=true;
//         solve(maze,row,col,i,j+1,visited,path,output+'R');
//         visited[i][j+1]=false;
//     }
//     //up
//     if(isSafe(i-1,j,row,col,maze,visited)){
//         visited[i-1][j]=true;
//         solve(maze,row,col,i-1,j,visited,path,output+'U');
//         visited[i-1][j]=false;
//     }
// }
// int main(){
//     int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
//     int row=3;
//     int col=3;
//     int i=0;
//     int j=0;
//     if(maze[0][0]==0){
//         cout<<"Sorry, there is no src point present here!";
//         return 0;
//     }
//     vector<vector<bool>>visited(row,vector<bool>(col,false));
//     visited[0][0]=true;
//     vector<string>path;
//     string output="";
//     solve(maze,row,col,i,j,visited,path,output);
//     if (path.empty()) {
//         cout << "There is no path from src to destination.";
//     } else {
//         cout << "Paths found: " << endl;
//         for (int k = 0; k < path.size(); k++){
//             cout << path[k] << endl;
//         }
//     }

// }



// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe(int i,int j,int row,int col,int maze[][4],vector<vector<bool>>visited){
//     if(((i>=0&&i<row)&&(j>=0&&j<col))&&visited[i][j]==false&&maze[i][j]==1){
//         return true;
//     }
//     else return false;
// }
// void ratMaze(int maze[][4],int row,int col,int i,int j,vector<vector<bool>>visited,vector<string>&path,string output){
//     if(i==(row-1)&&j==(col-1)){
//         path.push_back(output);
//         return;
//     }
//     //Down
//     if(isSafe(i+1,j,row,col,maze,visited)){
//         visited[i+1][j]=true;
//         ratMaze(maze,row,col,i+1,j,visited,path,output+'D');
//         visited[i+1][j]=false;
//     }
//     //Left
//     if(isSafe(i,j-1,row,col,maze,visited)){
//         visited[i][j-1]=true;
//         ratMaze(maze,row,col,i,j-1,visited,path,output+'L');
//         visited[i][j-1]=false;
//     }
//     //Right
//     if(isSafe(i,j+1,row,col,maze,visited)){
//         visited[i][j+1]=true;
//         ratMaze(maze,row,col,i,j+1,visited,path,output+'R');
//         visited[i][j+1]=false;
//     }
//     //Up
//     if(isSafe(i-1,j,row,col,maze,visited)){
//         visited[i-1][j]=true;
//         ratMaze(maze,row,col,i-1,j,visited,path,output+'U');
//         visited[i-1][j]=false;
//     }
// }
// int main(){
//     int maze[5][4]={{1,0,1,0},{1,1,1,1},{0,1,1,0},{0,1,1,0},{0,0,1,1}};
//     int row=5;
//     int col=4;
//     int i=0;
//     int j=0;
//     if(maze[0][0]==0){
//         cout<<"There is no source position!";
//         return 0;
//     }
//     if(maze[row-1][col-1]==0){
//         cout<<"There is no destination position!";
//         return 0;
//     }
//     vector<vector<bool>>visited(row,vector<bool>(col,false));
//     visited[0][0]=true;
//     vector<string>path;
//     string output="";
//     ratMaze(maze,row,col,i,j,visited,path,output);
//     cout<<"Print the ways:"<<endl;
//     for(int i=0;i<path.size();i++){
//         cout<<path[i]<<" ";
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4],int row, int col,vector<vector<bool> >  visited){
//     if(
//         (newx >=0  &&  newx < row )&&
//         (newy >=0  &&  newy < col) &&
//         (maze[newx][newy] == 1) &&
//         (visited[newx][newy] == false)
//     ){
//        return true; 
//     }else{
//         return false;
//     }

// }
   
// void printAllPaths(int maze[][4],int row,int col,int srcx,int srcy,string output, vector<vector<bool> > visited,vector<string>&path){
//     // base case 
//     // destination coordinates are [row-1],[col-1]
//     if(srcx == row-1 && srcy == col-1){
//         //reached destination
//         cout<<output<<endl;
//         // path.push_back(output);
//         return;
//     }

//     // 1 case solve karo banki recurssion sambhal lega
//     int newx;
//     int newy;
//     //UP
//     if(isSafe(srcx, srcy,srcx-1,srcy,maze,row, col,visited )){
//         //marked visited
//         newx=srcx-1;
//         newy=srcy;
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,srcx,srcy, output+'U',visited,path);
//         //backtracking
//         visited[newx][newy] =false;

//     }
//     //DOWN
//     // newx = srcx+1;
//     // newy = srcy;
//     if(isSafe(srcx, srcy,srcx+1, srcy,maze,row, col,visited )){
//         //marked visited
//         newx = srcx+1;
//          newy = srcy;
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,srcx,srcy,output+'D',visited,path);
//         //backtracking
//         visited[newx][newy] =false;

//     }
//     //LEFT
//     // newx = srcx;
//     // newy = srcy-1;
//     if(isSafe(srcx, srcy,srcx, srcy-1,maze,row, col,visited )){
//         //marked visited
//          newx = srcx;
//         newy = srcy-1;
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,srcx,srcy,output+'L',visited,path);
//         //backtracking
//         visited[newx][newy] =false;

//     }
//     //RIGHT
//     //   newx = srcx;
//     //   newy = srcy+1;
//     if(isSafe(srcx, srcy,srcx,srcy+1,maze,row, col,visited )){
//         //marked visited
//           newx = srcx;
//       newy = srcy+1;
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,srcx,srcy,output+'R',visited,path);
//         //backtracking
//         visited[newx][newy] =false;

//     }

// }


// int main(){
//     int maze[4][4] = {
//         {1,0,0,0},
//         {1,1,0,0},
//         {1,1,1,0},
//         {1,1,1,1}
//     };
//      int row = 4;
//      int col = 4;

//      int srcx = 0; 
//      int srcy = 0;
//      string output = "";
//      //CREATE VISISTED 2D ARRAY
//      vector<vector <bool> > visited(row , vector<bool>(col, false));
//     if(maze[0][0] == 0){
//         //src pos is closed that is RAT doesn't move
//         cout << "No path exists" <<endl;
//         return 0;
//     }
//         vector<string>path;
//         cout << "path exists" <<endl;
//         visited[srcx][srcy] = true; 
//         cout << "After visited" <<endl;
//         printAllPaths(maze,row,col,srcx,srcy,output,visited,path); 
    
//     for(int i=0;i<path.size();i++){
//         cout<<path[i]<<" ";
//     }
    
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>>& visited){
//     if(
//         (newx >= 0 && newx < row) &&
//         (newy >= 0 && newy < col) &&
//         (maze[newx][newy] == 1) &&
//         (visited[newx][newy] == false)
//     ){
//         return true;
//     } else {
//         return false;
//     }
// }

// void printAllPaths(int maze[][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool>>& visited, vector<string>& path){
//     // base case 
//     // destination coordinates are [row-1],[col-1]
//     if(srcx == row-1 && srcy == col-1){
//         // reached destination
//         path.push_back(output);
//         return;
//     }

//     // 1 case solve karo banki recurssion sambhal lega
//     int newx;
//     int newy;

//     // UP
//     newx = srcx - 1;
//     newy = srcy;
//     if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
//         // marked visited
//         visited[newx][newy] = true;
//         // call recursion
//         printAllPaths(maze, row, col, newx, newy, output + 'U', visited, path);
//         // backtracking
//         visited[newx][newy] = false;
//     }

//     // DOWN
//     newx = srcx + 1;
//     newy = srcy;
//     if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
//         // marked visited
//         visited[newx][newy] = true;
//         // call recursion
//         printAllPaths(maze, row, col, newx, newy, output + 'D', visited, path);
//         // backtracking
//         visited[newx][newy] = false;
//     }

//     // LEFT
//     newx = srcx;
//     newy = srcy - 1;
//     if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
//         // marked visited
//         visited[newx][newy] = true;
//         // call recursion
//         printAllPaths(maze, row, col, newx, newy, output + 'L', visited, path);
//         // backtracking
//         visited[newx][newy] = false;
//     }

//     // RIGHT
//     newx = srcx;
//     newy = srcy + 1;
//     if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
//         // marked visited
//         visited[newx][newy] = true;
//         // call recursion
//         printAllPaths(maze, row, col, newx, newy, output + 'R', visited, path);
//         // backtracking
//         visited[newx][newy] = false;
//     }
// }

// int main(){
//     int maze[4][4] = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 0},
//         {1, 1, 1, 0},
//         {1, 1, 1, 1}
//     };

//     int row = 4;
//     int col = 4;
//     int srcx = 0; 
//     int srcy = 0;
//     string output = "";
//     // CREATE VISITED 2D ARRAY
//     vector<vector<bool>> visited(row, vector<bool>(col, false));
//     if(maze[0][0] == 0){
//         // src pos is closed that is RAT doesn't move
//         cout << "No path exists" << endl;
//         return 0;
//     }

//     vector<string> path;
//     visited[srcx][srcy] = true; 
//     printAllPaths(maze, row, col, srcx, srcy, output, visited, path); 
    
//     if(path.size() == 0) {
//         cout << "No path exists" << endl;
//     } else {
//         cout<<"Paths exist"<<endl;
//         cout << "Paths are: " << endl;
//         for(int i = 0; i < path.size(); i++){
//             cout << path[i] << endl;
//         }
//     }
    
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4],int row, int col,vector<vector<bool> >  &visited){
//     if(
//         newx >=0  &&  newx < row &&
//         newy >=0  &&  newy < col &&
//         maze[newx][newy] == 1 &&
//         visited[newx][newy] == false
//     ){
//        return true; 
//     }else{
//         return false;
//     }

// }


   
// void printAllPaths(int maze[][4],int row,int col,int srcx,int srcy,string output, vector<vector<bool> > &visited, vector<string> &path){
//     // base case 
//     // destination coordinates are [row-1],[col-1]
//     if(srcx == row-1 && srcy == col-1){
//         //reached destination
//         path.push_back(output);
//         return;
//     }

//     // 1 case solve karo banki recurssion sambhal lega
//     int newx;
//     int newy;
//     //UP
//     newx = srcx-1;
//     newy = srcy;
//     if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
//         //marked visited
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,newx,newy, output+'U',visited,path);
//         //backtracking
//         visited[newx][newy] =false;

//     }
//     //DOWN
//     newx = srcx+1;
//     newy = srcy;
//     if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
//         //marked visited
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,newx,newy,output+'D',visited,path);
//         visited[newx][newy] =false;

//     }
//     //LEFT
//     newx = srcx;
//     newy = srcy-1;
//     if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
//         //marked visited
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,newx,newy,output+'L',visited,path);
//         //backtracking
//         visited[newx][newy] =false;

//     }
//     //RIGHT
//       newx = srcx;
//       newy = srcy+1;
//     if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
//         //marked visited
//         visited[newx][newy] =true;
//         //call recursion
//         printAllPaths(maze,row,col,newx,newy,output+'R',visited,path);
//         //backtracking
//         visited[newx][newy] =false;

//     }

// }


// int main(){
//     // string str = "abc";
//     // int index=0;
//     // printPermutation(str,index);

//     int maze[4][4] = {
//         {1,0,0,0},
//         {1,1,0,0},
//         {1,1,1,0},
//         {1,1,1,1}
//     };
//      int row = 4;
//      int col = 4;

//      int srcx = 0; 
//      int srcy = 0;
//      string output = "";
//       vector<string> path;
//      //CREATE VISISTED 2D ARRAY
//      vector<vector <bool> > visited(row , vector<bool>(col, false));
   
//     if(maze[0][0] == 0){
//         //src pos is closed that is RAT doesn't move
//         cout << "No path exists" <<endl;
//     }
//     else{
//         cout << "path exists" <<endl;
//         visited[srcx][srcy] = true; 
//            cout << "After visited" <<endl;
//         printAllPaths(maze,row,col,srcx,srcy,output,visited,path); 
//            cout << "After function call" <<endl;
//            for(int i = 0; i < path.size(); i++){
//             cout << path[i] << endl;
//         }
//     }

//     return 0;
// }




#include<iostream>
#include<vector>
using namespace std;

// void printPermutation(string &str, int i){
//     //base case
//     if(i >= str.length()){
//         cout << str <<" ";
//     }
//     for(int j = i; j< str.length();j++){
//         swap(str[i],str[j]); 
//         //recursion action
//         printPermutation(str, i+1);
//         //backtracking
//         swap(str[i],str[j]);

//     }
// }

    // A function that will handle all the below mentioned possibilities
    // posibility hai : 
    // -> path closed 
    // out of bound
    //check if pos is already visited
 
bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4],int row, int col,vector<vector<bool> >  &visited){
    if(
        newx >=0  &&  newx < row &&
        newy >=0  &&  newy < col &&
        maze[newx][newy] == 1 &&
        visited[newx][newy] == false
    ){
       return true; 
    }else{
        return false;
    }

}
   
void printAllPaths(int maze[][4],int row,int col,int srcx,int srcy,string &output, vector<vector<bool> > &visited){
    // base case 
    // destination coordinates are [row-1],[col-1]
    if(srcx == row-1 && srcy == col-1){
        //reached destination
        cout << output <<endl;
        return;
    }

    // 1 case solve karo banki recurssion sambhal lega

    //UP
    int newx = srcx-1;
    int newy = srcy;
    if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
        //marked visited
        visited[newx][newy] =true;
        //call recursion
         cout <<"Recusion calling" <<endl;
        output.push_back('U');
        printAllPaths(maze,row,col,newx, newy, output,visited);
        //backtracking
        output.pop_back();
        visited[newx][newy] =false;

    }
    //DOWN
    newx = srcx+1;
    newy = srcy;
    if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
        //marked visited
        visited[newx][newy] =true;
        //call recursion
        output.push_back('D');
         cout <<"Recusion calling D" <<endl;
        printAllPaths(maze,row,col,newx, newy,output,visited);
         cout <<" After Recusion calling D" <<endl;

        //backtracking
         output.pop_back();
        visited[newx][newy] =false;

    }
    //LEFT
    newx = srcx;
    newy = srcy-1;
    if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
        //marked visited
        visited[newx][newy] =true;
        //call recursion
        output.push_back('L');
        printAllPaths(maze,row,col,newx, newy,output,visited);
        //backtracking
         output.pop_back();
        visited[newx][newy] =false;

    }
    //RIGHT
      newx = srcx;
      newy = srcy+1;
    if(isSafe(srcx, srcy,newx, newy,maze,row, col,visited )){
        //marked visited
        visited[newx][newy] =true;
        //call recursion
        output.push_back('R');
        printAllPaths(maze,row,col,newx, newy,output,visited);
        //backtracking
         output.pop_back();
        visited[newx][newy] =false;

    }

}


int main(){
    // string str = "abc";
    // int index=0;
    // printPermutation(str,index);

    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
     int row = 4;
     int col = 4;

     int srcx = 0; 
     int srcy = 0;
     string output = "";
     //CREATE VISISTED 2D ARRAY
     vector<vector <bool> > visited(row , vector<bool>(col, false));
   
    if(maze[0][0] == 0){
        //src pos is closed that is RAT doesn't move
        cout << "No path exists" <<endl;
    }
    else{
        cout << "path exists" <<endl;
        visited[srcx][srcy] = true; 
           cout << "After visited" <<endl;
        printAllPaths(maze,row,col,srcx,srcy,output,visited); 
           cout << "After function call" <<endl;
    }

    return 0;
}