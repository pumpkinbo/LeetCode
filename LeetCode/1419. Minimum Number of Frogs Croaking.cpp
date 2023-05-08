#include<iostream>
#include<string>
using namespace std;

/*遍历蛙鸣串，记录每个字母的频数，c表示'c'的频数，r表示'r'的频数，o表示'o'的频数，a表示'a'的频数，k表示'k'的频数。
一方面，由于蛙鸣的字母是按照croak的顺序出现的，
所以在遍历的过程中必须要满足c>=r>=o>=a>=k，并且遍历完成后必须满足c=r=o=a=k（每个蛙鸣必须是完整的），否则就是不合法的，返回-1。
另一方面，我们其实可以把蛙鸣看成是若干区间进行重叠，
遍历到croakOfFrogs的每个位置都会有一个“各个字母的频数”状态，
所有位置的状态中“并行度”最大的地方就是最少需要的青蛙数量。由于k是一次蛙鸣的结尾，c是一次蛙鸣的开头，且c>=k，
所以某个位置的“并行度”其实就是c-k，维护这个最大值即可。
*/

int minNumberOfFrogs(string croakOfFrogs) {
    //根据青蛙叫声统计最少青蛙个数
    //分别用c r o a k变量表示此字母出现的频率
    int c=0,r=0,o=0,a=0,k=0;
    int ans=0;
    for(int i=0;i<croakOfFrogs.length();++i){
        if(croakOfFrogs[i] == 'c') c++;
        if(croakOfFrogs[i] == 'r') r++;
        if(croakOfFrogs[i] == 'o') o++;
        if(croakOfFrogs[i] == 'a') a++;
        if(croakOfFrogs[i] == 'k') k++;

        if(!(c>=r&&r>=o&&o>=a&&a>=k)) return -1;
        ans = max(ans,c-k);
    }

    return c==r && r==o && o==a && a==k ? ans : -1;
}

int main()
{
    string frog;
    cin>>frog;
    cout<<minNumberOfFrogs(frog);
    system("pause");
}