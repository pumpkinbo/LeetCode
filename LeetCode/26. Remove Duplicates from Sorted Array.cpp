#include<vector>
#include<iostream>
using namespace std;

//仍然使用双指针法，
//快指针扫描原数组
//慢指针指向结果数组
//快指针永远领先慢指针一个元素
//由于数组为升序排列，判断元素是否重复只需要将快指针指向的元素与慢指针指向的元素比较即可
int removeDuplicates(vector<int>& nums) {
    //第一个元素永远不会重复，因此快指针指向第二个元素
    int slow = 0;
    for(int fast = 1;fast < nums.size();fast++){
        if(nums[fast] != nums[slow]){
            nums[++slow] = nums[fast];
        }
    }
    return (slow + 1);
}

int main()
{
    int n;
    cin>>n;
    int num;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    int ans = removeDuplicates(v);
    cout<<ans<<endl;
    system("pause");
}
