// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
//     vector<int>input;
//     input.push_back(2);
//     input.push_back(1);
//     input.push_back(4);
//     input.push_back(3);
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(input.size());
//     for(int i=input.size()-1;i>=0;i--){
//         int curr=input[i];
//         while(s.top()>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(curr);
//     }
//     cout<<"Printing :"<<endl;
//     for(int i=0;i<input.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }




// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
//     vector<int>input;
//     input.push_back(2);
//     input.push_back(1);
//     input.push_back(4);
//     input.push_back(3);
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(input.size());
//     for(int i=0;i<input.size();i++){
//         int curr=input[i];
//         while(s.top()>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(curr);
//     }
//     cout<<"Printing :"<<endl;
//     for(int i=0;i<input.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }



// #include<iostream>
// #include<vector>
// #include<stack>
// #include<limits.h>
// using namespace std;
// vector<int>nextSmaller(vector<int>&input){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(input.size());
//     for(int i=input.size()-1;i>=0;i--){
//         int curr=input[i];
//         while(s.top()!=-1 && input[s.top()]>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(i);
//     }
//     return ans;
// }
// vector<int>prevSmaller(vector<int>&input){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(input.size());
//     for(int i=0;i<input.size();i++){
//         int curr=input[i];
//         while(s.top()!=-1 && input[s.top()]>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(i);
//     }
//     return ans;
// }
// int getRectangularAreaHistogram(vector<int>&height){
//     vector<int>prev=prevSmaller(height);
//     vector<int>next=nextSmaller(height);
//     int maxArea=INT_MIN;
//     int size=height.size();
//     for(int i=0;i<height.size();i++){
//         int len=height[i];
//         if(next[i]==-1){
//             next[i]=size;
//         }
//         int wid=next[i]-prev[i]-1;
//         int area=len*wid;
//         maxArea=max(area,maxArea);
//     }
//     return maxArea;
// }
// int main(){
//     vector<int>input;
//     input.push_back(2);
//     input.push_back(1);
//     input.push_back(5);
//     input.push_back(6);
//     input.push_back(2);
//     input.push_back(3);
//     cout<<"Area:"<<getRectangularAreaHistogram(input);
// }


#include<iostream>
#include<vector>
#include<stack>
#include<limits.h>
using namespace std;
vector<int>prevSmaller(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());
    for(int i=0;i<input.size();i++){
        int curr=input[i];
        while(s.top()!=-1&&input[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
vector<int>nextSmaller(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());
    for(int i=input.size()-1;i>=0;i--){
        int curr=input[i];
        while(s.top()!=-1&&input[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int getRectangularAreaHistogram(vector<int>&heights){
    vector<int>prev=prevSmaller(heights);
    vector<int>next=nextSmaller(heights);
    int size=heights.size();
    int maxArea=INT_MIN;
    for(int i=0;i<heights.size();i++){
        int length=heights[i];
        if(next[i]==-1){
            next[i]=size;
        }
        int width=next[i]-prev[i]-1;
        int area=length*width;
        maxArea=max(area,maxArea);
    }
    return maxArea;
}
int main(){
    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(5);
    input.push_back(6);
    input.push_back(2);
    input.push_back(3);
    // input=prevSmaller(input);
    // for(int i=0;i<input.size();i++){
    //     cout<<input[i]<<" ";
    // }
    // input=nextSmaller(input);
    // for(int i=0;i<input.size();i++){
    //     cout<<input[i]<<" ";
    // }
    cout<<"Maximum area: "<<getRectangularAreaHistogram(input);
}