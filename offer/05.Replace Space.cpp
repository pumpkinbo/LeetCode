#include<string>
#include<iostream>
using namespace std;

// 将字符串中的空格替换为特定字符

string replaceSpace(string s) {
    string ans;
    int i=0,j=0;
    while(i!=s.length()){
        if(s[i] == ' '){
            ans.push_back('%');
            ans.push_back('2');
            ans.push_back('0');
            i++;
        }
        else{
            ans.push_back(s[i++]);
        }
    }
    return ans;
}

int main()
{
    string str1 = "hello i am you";
    // cin>>str1;
    // cout<<str1.length()<<endl;
    cout<<replaceSpace(str1);
    system("pause");
}