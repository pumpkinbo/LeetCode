#include<iostream>
#include<vector>
using namespace std;

// int removeElement(vector<int>& nums, int val){
//     //从数组中移除值为val的元素并返回数组长度
//     //法1：暴力求解
//     int size = nums.size();
//     for(int i=0;i<size;i++){
//         if (nums[i] == val)
//         {
//             //找到要移除的元素
//             //移动数组元素
//             for(int j=i+1;j<size;j++){
//                 nums[j-1] = nums[j];
//             }
//             i--;
//             size--;
//         }
//     }
//     return size;
// }

int removeElement(vector<int>& nums,int val)
{
    //双指针法
    //快指针指向原数组，遍历数组元素 
    //慢指针指向结果数组中的当前存储位置
    int slow = 0;
    for(int quick=0;quick<nums.size();quick++){
        //不等的时候赋值，相等的时候快指针继续移动而慢指针不移动
        if(nums[quick] != val){
            nums[slow++] = nums[quick];
        }
    }
    return slow;
}

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    int val;
    cin>>val;
    int ans = removeElement(v,val);
    cout<<ans;
    system("pause");
}