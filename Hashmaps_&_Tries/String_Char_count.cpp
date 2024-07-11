// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     string str="thiruvananthapuram";
//     unordered_map<char,int>m;
//     int freq[26]={0};
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         freq[ch-'a']++;
//     }
//     for(int i=0;i<26;i++){
//         if(freq[i]!=0){
//             pair<char,int>p=make_pair(i+'a',freq[i]);
//             m.insert(p);
//         }
//     }
//     cout<<"Printing all key-val pair: "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" -> "<<i.second<<endl;
//     }
// }

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str="thiruvananthapuram";
    unordered_map<char,int>m;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        m[ch]++;
    }
    for(auto i:m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
}