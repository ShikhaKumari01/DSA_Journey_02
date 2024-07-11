// #include<iostream>
// using namespace std;
// void printArray(string str,int size,int i,char key){
//     if(i==size){
//         return;
//     }
//     if(key==str[i]){
//         cout<<"Present at index:"<<i<<endl;
//     }
//     printArray(str,size,i+1,key);
// }
// int main(){
//     string str="SHIKHADAS";
//     // for(int i=0;i<10;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     char key='S';
//     int size=str.length();
//     int i=0;
//     printArray(str,size,i,key);
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// void printArray(string str,int size,int i,char key,vector<int>&data){
//     if(i==size){
//         return;
//     }
//     if(key==str[i]){
//         data.push_back(i);
//     }
//     printArray(str,size,i+1,key,data);
// }
// int main(){
//     string str="SHIKHADAS";
//     // for(int i=0;i<10;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     char key='H';
//     int size=str.length();
//     int i=0;
//     vector<int>data;
//     printArray(str,size,i,key,data);
//     for(int i=0;i<data.size();i++){
//         cout<<data[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void searchKey(vector<int>arr,int target,int i){
//     int n=arr.size();
//     if(i==n){
//         cout<<"Absent";
//         return;
//     }
//     if(arr[i]==target){
//         cout<<"Present at "<<i<<"th index"<<endl;
//         return;
//     }
//     searchKey(arr,target,i+1);
// }
// int main(){
//     vector<int>arr={2,4,57,9,80,77,65};
//     int target=99;
//     int i=0;
//     searchKey(arr,target,i);
// }


#include<iostream>
#include<vector>
using namespace std;
void searchKey(string str,char target,int i){
    int n=str.size();
    if(i==n){
        cout<<"Absent";
        return;
    }
    if(str[i]==target){
        cout<<"Present at "<<i<<"th index"<<endl;
        return;
    }
    searchKey(str,target,i+1);
    
}
int main(){
    string str="SHIKHA KUMARI";
    char target='I';
    int i=0;
    searchKey(str,target,i);
}