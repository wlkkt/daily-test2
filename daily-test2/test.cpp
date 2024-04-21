#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    vector<string> v;
    vector<int> vi;
    while (cin >> str)
    { // 注意 while 处理多个 case
        string::iterator it = str.begin();
        while (it != str.end())
        {
            string a;
            while (((*it) >= '0' && (*it) <= '9'))
            {
                a.push_back((*it));
                ++it;
            }
            v.push_back(a);
        }

        int sz1 = v.size();
        for (int i = 0; i < sz1; i++)
        {
            vi.push_back(v[i].size());
        }

        int num = vi[0];
        for (int i = 1; i < sz1; i++)
        {
            num = num > vi[i] ? num : vi[i];
        }

        for (int i = 0; i < sz1; i++)
        {
            if (num == v[i].size())
            {
                cout << v[i];
            }
        }
    }
}




