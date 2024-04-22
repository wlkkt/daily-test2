//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    string str;
//    vector<string> v;
//    vector<int> vi;
//    while (cin >> str)
//    { // 注意 while 处理多个 case
//        string::iterator it = str.begin();
//        while (it != str.end())
//        {
//            string a;
//            while (((*it) >= '0' && (*it) <= '9'))
//            {
//                a.push_back((*it));
//                ++it;
//            }
//            v.push_back(a);
//        }
//
//        int sz1 = v.size();
//        for (int i = 0; i < sz1; i++)
//        {
//            vi.push_back(v[i].size());
//        }
//
//        int num = vi[0];
//        for (int i = 1; i < sz1; i++)
//        {
//            num = num > vi[i] ? num : vi[i];
//        }
//
//        for (int i = 0; i < sz1; i++)
//        {
//            if (num == v[i].size())
//            {
//                cout << v[i];
//            }
//        }
//    }
//}
//
////
//class Solution {
//public:
//    int tribonacci(int n) {
//
//        if (n == 0) return 0;//边界处理
//        if (n == 1 || n == 2) return 1;//边界处理
//
//        vector<int> dp(n + 1);//开辟dp表
//
//        dp[0] = 0, dp[1] = dp[2] = 1;//初始化的dp表
//
//        for (int i = 3; i <= n; i++)
//            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];//状态转移方程
//
//        return dp[n];//题目要求返回第n个数
//    }
//};
//
//
//
//class Solution {
//public:
//    int tribonacci(int n) {
//        //1、创建并填满dp表
//        //2、初始化
//        //3、填表
//        //4、返回值
//        //处理边界情况
//        if (n == 0) return 0;
//        if (n == 1 || n == 2) return 1;
//
//        int a = 0, b = 1, c = 1, d = 0;
//
//        for (int i = 3; i <= n; i++)
//        {
//            d = a + b + c;
//
//            //滚动操作
//            a = b;
//            b = c;
//            c = d;
//        }
//
//        return d;
//    }
//};
//class Solution {
//public:
//    int tribonacci(int n) {
//
//        if (n == 0) return 0;//边界处理
//        if (n == 1 || n == 2) return 1;//边界处理
//
//        vector<int> dp(n + 1);//开辟dp表
//
//        dp[0] = 0, dp[1] = dp[2] = 1;//初始化的dp表
//
//        for (int i = 3; i <= n; i++)
//            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];//状态转移方程
//
//        return dp[n];//题目要求返回第n个数
//    }
//};
//
//
//
//class Solution {
//public:
//    int tribonacci(int n) {
//        //1、创建并填满dp表
//        //2、初始化
//        //3、填表
//        //4、返回值
//        //处理边界情况
//        if (n == 0) return 0;
//        if (n == 1 || n == 2) return 1;
//
//        int a = 0, b = 1, c = 1, d = 0;
//
//        for (int i = 3; i <= n; i++)
//        {
//            d = a + b + c;
//
//            //滚动操作
//            a = b;
//            b = c;
//            c = d;
//        }
//
//        return d;
//    }
//};