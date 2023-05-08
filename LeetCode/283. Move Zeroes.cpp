#include<iostream>
#include<vector>
using namespace std;

//双指针法，将非零元素整理至数组前端后，继续移动slow指针至数组末尾，所有元素置0
void moveZeroes(vector<int>& nums) {
    int slow = 0;
    for(int fast = 0;fast < nums.size();fast++){
        if(nums[fast] != 0){
            nums[slow++] = nums[fast];
        }
    }
    //将数组之后的元素置0
    for(;slow < nums.size();slow++){
        nums[slow] = 0;
    }
}

void print(vector<int>& nums){
    for(vector<int>::iterator it = nums.begin();it != nums.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,num;
    cin>>n;
    vector<int>v;
    for(int i = 0;i < n;i++){
        cin>>num;
        v.push_back(num);
    }
    moveZeroes(v);
    print(v);
    system("pause");
}