// #include<iostream>
// using namespace std;
// int main(){
//     //BAD PRACTICE
//     // int *ptr;
//     // cout<<*ptr;

//     // int *ptr=0;
//     // cout<<*ptr;
//     int *ptr=nullptr;
//     cout<<*ptr;
// }


#include<iostream>
using namespace std;
int main(){
    int a=5;
    int*ptr=&a;
    cout<<(*ptr)++<<endl;
    cout<<++(*ptr)<<endl;
}