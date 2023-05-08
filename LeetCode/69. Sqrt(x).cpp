#include<iostream>
using namespace std;

int mySqrt(int x){
    // 求x的平方根
    // 使用二分查找
    int left = 0,right = x;
    int ans;
    while(left <= right){
        int mid = (left + right) / 2;
        if((long long)mid * mid <= x){
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<mySqrt(num);
    system("pause");
}