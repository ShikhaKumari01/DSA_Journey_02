// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int &b=a;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<&a<<endl;
//     cout<<&b<<endl;
// }


// #include<iostream>
// using namespace std;
// void update(int* &ptr){
//     ptr=ptr+1;
//     cout<<ptr<<endl;
// }
// int main(){
//     int a=5;
//     int* p=&a;
//     cout<<p<<endl;
//     update(p);
//     cout<<p<<endl;
    
// }

#include<iostream>
using namespace std;
void update(int* &ptr){
    cout<<"Update:"<<ptr<<endl;
    ptr=ptr+1;
    cout<<"Updated:"<<ptr<<endl;
}
int main(){
    int a=5;
    int* p=&a;
    cout<<p<<endl;
    update(p);
    cout<<p<<endl;
    
}