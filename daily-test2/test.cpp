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

////////////////////////抽象类
//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//	virtual void Drive() = 0;
//};
//
//
//class Benz : public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-舒适" << endl;
//	}
//};
//
//class BMW : public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-操控" << endl;
//	}
//};
//
//
//int main()
//{
//	Benz b;//正确
//	BMW w;//正确
//
//	Car* ptr = &b;
//	ptr->Drive();
//
//	ptr = &w;
//	ptr->Drive();
//
//	return 0;
//}

////////////////例子
//#include <iostream>
//using namespace std;
//
////抽象类动物
//class Animal 
//{
//public:
//    virtual void speak() = 0;//纯虚函数
//};
//
//
//class Dog : public Animal 
//{
//public:
//    virtual void speak() override 
//    {
//        std::cout << "汪!" << std::endl;
//    }
//};
//
//class Cat : public Animal 
//{
//public:
//    virtual void speak() override {
//        std::cout << "喵!" << std::endl;
//    }
//};
//
//int main()
//{
//    Dog d;
//    Cat c;
//    Animal* ptr = &d;
//    ptr->speak();
//    
//    ptr = &c;
//    ptr->speak();
//    return 0;
//}


///////////////////////动态绑定
//#include <iostream>
//using namespace std;
//
//class A 
//{
//public:
//	virtual void add()
//	{
//		cout << "A:add" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	virtual void add()
//	{
//		cout << "B:add" << endl;
//	}
//private:
//	int _a = 1;
//};
//
//int main()
//{/*
//	B b1;
//	B b2;*/
//	int i = 0;
//	int* ptr = &i;
//	return 0;
//}

///////////////////////////////////单进程时的父子类虚表
//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//private:
//	int b = 0;
//};
//
//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//int main()
//{
//	Base b;
//	Derive d;
//
//	VFPTR * vTableb = (VFPTR*)(*(int*)&b);
//	PrintVTable(vTableb);
//
//	VFPTR* vTabled = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTabled);
//	return 0;
//}


/////////////////////////////////////多进程时的父子类虚表
#include <iostream>
using namespace std;

class Base1 {
public:
	virtual void func1() { cout << "Base1::func1" << endl; }
	virtual void func2() { cout << "Base1::func2" << endl; }
private:
	int b1;
};

class Base2 {
public:
	virtual void func1() { cout << "Base2::func1" << endl; }
	virtual void func2() { cout << "Base2::func2" << endl; }
private:
		int b2;
};

class Derive : public Base1, public Base2 {
public:
	virtual void func1() { cout << "Derive::func1" << endl; }
	virtual void func3() { cout << "Derive::func3" << endl; }
private:
	int d1;
};

typedef void(*VFPTR) ();
void PrintVTable(VFPTR vTable[])
{
	cout << " 虚表地址>" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}

int main()
{
	Derive d;
	VFPTR* vTableb1 = (VFPTR*)(*(int*)&d);
	PrintVTable(vTableb1);

	//也可以直接切片
	//Base2* ptr = &d;
	VFPTR* vTableb2 = (VFPTR*)(*(int*)((char*)&d + sizeof(Base1)));//将Derive*强转为char*，char* + Base1的大小得到Base2空间的首地址...
	PrintVTable(vTableb2);

	return 0;
}
