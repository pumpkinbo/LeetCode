#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>


// 法1：sort排序，时间复杂度O(nlogn),空间复杂度O(1)
// int findRepeatNumber(vector<int>& nums) {
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<nums.size()-1;i++){
//         if(nums[i] == nums[i+1]) return nums[i];
//     }
//     return -1;
// }

//法2：哈希表,空间复杂度O(n),时间复杂度O(n)
int findRepeatNumber(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();++i){
        if(mp.find(nums[i]) != mp.end()) return nums[i];
        else mp[nums[i]]++;
    }
    return -1;
}

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    cout<<findRepeatNumber(v);
    system("pause");
}