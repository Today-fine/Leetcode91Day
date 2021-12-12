#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> results = vector<int>();
        int listSize = num.size();
        int temp;
        for (int i = listSize - 1; i >= 0; i--)
        {
            if (k != 0)
            {
                temp = num[i] + k % 10;
                k /= 10;
                if (temp >= 10)
                {
                    ++k; // 进位
                    temp -= 10;
                }
            }
            else
            {
                temp = num[i];
            }
            results.push_back(temp);
        }
        while (k > 0)
        {
            results.push_back(k % 10);
            k /= 10;
        }

        reverse(results.begin(), results.end());

        return results;
    }
};

int main(int argc, char **argv)
{
    vector<int> nums = {1, 2, 0, 0};
    int k = 34;
    Solution s;
    s.addToArrayForm(nums, k);

    return 0;
}

/*
分析：
    倒序遍历数组，在逐位相加，大于等于10就进一位

对于非负整数 X 而言，X 的数组形式是每位数字按从左到右的顺序形成的数组。例如，如果 X = 1231，那么其数组形式为 [1,2,3,1]。
    q a
给定非负整数 X 的数组形式 A，返回整数 X+K 的数组形式。

示例 1：

输入：A = [1,2,0,0], K = 34
输出：[1,2,3,4]
解释：1200 + 34 = 1234
示例 2：

输入：A = [2,7,4], K = 181
输出：[4,5,5]
解释：274 + 181 = 455
示例 3：

输入：A = [2,1,5], K = 806
输出：[1,0,2,1]
解释：215 + 806 = 1021
示例 4：

输入：A = [9,9,9,9,9,9,9,9,9,9], K = 1
输出：[1,0,0,0,0,0,0,0,0,0,0]
解释：9999999999 + 1 = 10000000000
 

提示：

1 <= A.length <= 10000
0 <= A[i] <= 9
0 <= K <= 10000
如果 A.length > 1，那么 A[0] != 0


*/