#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char a){
        data=a;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};
void insertWord(TrieNode* root,string word){
   // cout<<"Insertion: "<<word<<endl;
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
    char ch=word[0];
    int index=ch-'A';
    TrieNode* child;
    if(root->children[index]!=NULL){
        //already present
        child=root->children[index];
    }
    else{
        //absent
        child=new TrieNode(ch);
        root->children[index]=child;
    }
    insertWord(child,word.substr(1));
}
int main(){
    TrieNode* root=new TrieNode('-');
    insertWord(root,"CODER");
}