// #include<iostream>
// using namespace std;
// void printArray(string str,int size,int i,char key,int &count){
//     if(i==size){
//         return;
//     }
//     if(key==str[i]){
//         count=count+1;
//     }
//     printArray(str,size,i+1,key,count);
// }
// int main(){
//     string str="SHHHHIKHAAADAS";
//     // for(int i=0;i<10;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     char key='v';
//     int size=str.length();
//     int i=0;
//     int count=0;
//     printArray(str,size,i,key,count);
//     cout<<"Total no. of occurence:"<<count;
// }

#include<iostream>
#include<vector>
using namespace std;
void searchKey(string str,char target,int i,int &count){
    int n=str.size();
    if(i==n){
        cout<< count;
    }
    if(str[i]==target){
        count++;
    }
    searchKey(str,target,i+1,count);
    
}
int main(){
    string str="SSSSSSSHIKHAS KUUUUMARI";
    char target='S';
    int i=0;
    int count=0;
    searchKey(str,target,i,count);
}