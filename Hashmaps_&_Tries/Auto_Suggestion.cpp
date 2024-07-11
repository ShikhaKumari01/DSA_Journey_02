#include<iostream>
#include<vector>
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
    int index=ch-'a';
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
void storeSuggestion(vector<string>&temp,TrieNode* curr,string &prefix){
    if(curr->isTerminal){
        temp.push_back(prefix);
    }
    for(char ch='a';ch<='z';ch++){
        int index=ch-'a';
        TrieNode* next=curr->children[index];
        if(next!=NULL){
            prefix.push_back(ch);
            storeSuggestion(temp,next,prefix);
            prefix.pop_back();
        }
    }
}
vector<vector<string>> getSuggestion(TrieNode* root,string input){
    TrieNode* prev=root;
    string prefix="";
    vector<vector<string>>output;
    for(int i=0;i<input.size();i++){
        char lastCh=input[i];
        int index=lastCh-'a';
        TrieNode* curr=prev->children[index];
        if(curr==NULL){
            break;
        }
        else{
            vector<string>temp;
            prefix.push_back(lastCh);
            storeSuggestion(temp,curr,prefix);
            output.push_back(temp);
            prev=curr;
        }
    }
    return output;
}
int main(){
    vector<string>v;
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("lane");
    v.push_back("last");
    v.push_back("lost");
    v.push_back("lord");
    string input="lovi";
    TrieNode* root=new TrieNode('-');
    for(int i=0;i<v.size();i++){
        insertWord(root,v[i]);
    }
    vector<vector<string>>ans=getSuggestion(root,input);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}