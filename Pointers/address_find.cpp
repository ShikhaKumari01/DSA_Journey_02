// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int y=10;
//     cout<<&x<<endl;
//     cout<<&y<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    int x=10;
    int* ptr=&x;
    cout<<&x<<endl;
    cout<<*ptr;
}