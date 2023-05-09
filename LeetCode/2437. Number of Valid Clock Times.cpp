#include<iostream>
#include<string>
using namespace std;

/*
设置4个变量分别表示每一位的所有可能个数，由乘法原理计算所有可能情况，
非？时，将对应变量置1即可。
小时的两位互相制约，分钟的两位互相制约
*/

int countTime(string time) {
    //统计有效时间个数
    int h1,h2,m1,m2;
    if(time[0] != '?') h1 = 1;
    else{
        if(time[1] == '?') h1 = 10;
        else if(time[1] == '0' || time[1] == '1' || time[1] == '2' || time[1] == '3') h1 = 3;
        else h1 = 2;
    }
    if(time[1] != '?') h2 = 1;
    else{
        if(time[0] == '?' || time[0] == '0' || time[0] == '1') h2 = 10;
        else h2 = 4;
    }
    if(time[3] != '?') m1 = 1;
    else m1 = 6;
    if(time[4] != '?') m2 = 1;
    else m2 = 10;
    if(time[0] == '?' && time[1] == '?') return(24*m1*m2);
    else return(h1*h2*m1*m2);
}


int main()
{
    string time;
    cin>>time;
    cout<<countTime(time)<<endl;
    system("pause");    
}