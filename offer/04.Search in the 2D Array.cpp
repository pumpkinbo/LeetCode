//offer04-二维数组中的查找
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    //法1：Z字型查找（针对数组有序）时间复杂度O(m+n)
    if(matrix.empty()) return false;

    //数组为空的情况下不能使用size+[]！先进行判空操作
    int row = matrix.size();
    int col = matrix[0].size();
    //从右上角开始查找
    int x = 0,y = col-1;
    while(x<row && y>=0){
        if(target == matrix[x][y]) return true;
        if(target > matrix[x][y]){
            //这一行都比target小
            x++;
        }
        else{
            //这一列都比target大
            y--;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v = {{1,2,3},{2,3,4},{7,8,9}};
    int n;
    cin>>n;
    cout<<findNumberIn2DArray(v,n);
    system("pause");
}