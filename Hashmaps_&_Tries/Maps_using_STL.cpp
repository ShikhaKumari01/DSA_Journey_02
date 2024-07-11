#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // unordered_map<string,int>m;

    // pair<string,int>p1=make_pair("Shikha",1);
    // m.insert(p1);

    // pair<string,int>p2("Shikha",1);
    // m.insert(p2);

    // m["Shikha"]=1;
    // m["Radha"]=2;
    // m["Krishna"]=3;
    // m["Ram"]=4;
    // cout<<m.at("Ram")<<endl;
    // cout<<m.at("Shikha")<<endl;
    // cout<<m.count("Khushi")<<endl;
    // cout<<m.count("Radha")<<endl;

    // if(m.find("Radha")!=m.end()){
    //     cout<<"Radha found"<<endl;
    // }
    // else{
    //     cout<<"Radha not found"<<endl;
    // }
    // cout<<"Size: "<<m.size()<<endl;
    // //Sita ki entry bn gyi ab map me
    // cout<<m["Sita"]<<endl;
    // cout<<"Size: "<<m.size()<<endl;

    // cout<<"Printing all key-val pair: "<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" -> "<<i.second<<endl;
    // }

    unordered_map<char,int>m;
    int freq[26]={0};
    for(int i=0;i<26;i++){
        pair<char,int>p=make_pair(i+'a',i);
        m.insert(p);
    }
    cout<<"Printing all key-val pair: "<<endl;
    for(auto i:m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
}