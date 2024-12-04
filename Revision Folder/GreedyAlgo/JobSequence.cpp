#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class JobDetails{
    public:
    int ser_no;
    int profit;
    int deadline;
};
bool compare(JobDetails a, JobDetails b) {
    return a.profit > b.profit;
}

int main(){
    int n;
    cout<<"Enter number of jobs:"<<endl;
    cin>>n;
    vector<JobDetails>job(n);
    cout<<"Enter your job details:"<<endl;
    // 1 15 7
    // 2 20 2
    // 3 30 5
    // 4 18 3
    // 5 18 4
    // 6 10 5
    // 7 23 2
    // 8 16 7
    // 9 25 3
    for(int i=0;i<n;i++){
        cin>>job[i].ser_no>>job[i].profit>>job[i].deadline;
    }
    sort(job.begin(),job.end(),compare);

    int totalTime=0;
    for(int i=0;i<n;i++){
        totalTime=max(totalTime,job[i].deadline);
    }

    // cout<<totalTime;

    vector<int>arr(totalTime+1,0);
    int maxProfit = 0;
    for (int i = 0; i < n; i++) {
        for (int j = job[i].deadline; j > 0; j--) {
            if (arr[j] == 0) { 
                arr[j] = job[i].ser_no; 
                maxProfit += job[i].profit;
                break;
            }
        }
    }
    cout<<maxProfit<<endl;



}








