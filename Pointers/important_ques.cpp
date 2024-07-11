// #include<iostream>
// using namespace std;
// int *solve(){
//     int a=5;
//     int* ans=&a;
//     return ans;
// }
// int main(){
//     cout<<solve();
// }


// #include<iostream>
// using namespace std;
// int main(){
//    char s[]="hello";
//    char* p=s;
//    cout<<s[0]<<" "<<p[0];
// }


#include<iostream>
using namespace std;
int main(){
   char st[]="ABCD";
   for(int i=0;st[i]!='\0';i++){
    cout<<st[i]<<*(st)+i<<*(i+st)<<i[st];
   }
}