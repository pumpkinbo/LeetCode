#include<iostream>
#include<bitset>
#include<string>
using namespace std;

bool queryString(string s, int n) {
    //1~n的二进制字符串是否是s的子串
    for(int i=1;i<=n;i++){
        bitset<32> bits;    //n最大10^9，简单计算n32位较合适
        bits = i;
        string str = bits.to_string();
        string str2 = str.substr(str.find_first_not_of('0'));       //由于许多位，找到首位不是0的位置截取子串
        if(s.find(str2) == string::npos) return false;      //与str.end不同
    }
    return true;
}


int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<queryString(s,n)<<endl;
    
    system("pause");
}
