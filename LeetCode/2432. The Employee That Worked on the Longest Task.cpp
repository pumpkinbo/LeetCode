#include<vector>
#include<iostream>
using namespace std;

int hardestWorker(int n, vector<vector<int>>& logs) {
    // 遍历数组即可
    int ans = logs[0][0];
    int maxcost = logs[0][1];
    for(int i=1;i<logs.size();i++){
        int id = logs[i][0];
        int cost = logs[i][1] - logs[i-1][1];
        if(cost > maxcost || (cost==maxcost && id < ans)){
            ans = id;
            maxcost = cost;
        }
    }
    return ans;
}
