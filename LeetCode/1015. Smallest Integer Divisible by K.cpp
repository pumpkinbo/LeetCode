#include<iostream>
#include<unordered_set>
using namespace std;

//官解 + 解析链接
//解析链接：https://leetcode.cn/problems/smallest-integer-divisible-by-k/solution/ke-bei-k-zheng-chu-de-zui-xiao-zheng-shu-ynog/2013338

int smallestRepunitDivByK(int k) {
    //又数论的知识可知：
    //余数residnew = (residold * 10 + 1)mod k
    //将所得余数记录于哈希表中，一旦余数出现重复，说明出现循环，不可能存在整除K的数，若最后余数为0，则哈希表的长度即为答案
    int resid = 1 % k;
    int length = 1;
    unordered_set<int>st;
    st.insert(resid);
    while(resid != 0){
        resid = (resid * 10 + 1) % k;
        if(st.find(resid) != st.end()) return -1;
        else{
            st.insert(resid);
            length++;
        }
    }
    return length;
}

int main()
{
    int k;
    cin>>k;
    cout<<smallestRepunitDivByK(k)<<endl;
    system("pause");
}