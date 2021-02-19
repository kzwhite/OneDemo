#include <iostream>
#include <cmath>
#include <string.h>
#include <iomanip>

#define aa 123;
using namespace std;

/*struct studen{
 int age;
 int num;
 char *name;
}stu; */

class BASE		//基类
{
public:			//基类公有成员
    BASE(){
     cout << "我是父类构造函数" << endl;
    }
    virtual void BASE_Eat()
    {
        cout << "我是虚函数"<< endl;
    }
	void BASE_func_1()
	{
		cout << "执行BASE_func_1函数" << endl;
	}
	~BASE(){
	    cout << "我是父类析构函数" << endl;
	}
protected:		//基类保护成员
	void BASE_func_2()
	{
		cout << "执行BASE_func_2函数" << endl;
	}
private:		//基类私有成员
	int m_BASE;
};

class B :public BASE	//定义B类，继承base类，private继承方式
{
public:					//派生类公有成员

     B(){
       cout << "我是子类构造函数" << endl;
     }
     ~B(){
       cout << "我是子类析构函数" << endl;
     }
	    virtual void BASE_Eat()
    {
        cout << "我是子类虚函数"<< endl;
    }
	void B_func_1()
	{
		BASE_func_1();		//在派生类中可以访问基类的公有成员
		BASE_func_2();		//在派生类中可以访问基类的访问成员
		cout << "执行B_func_1函数" << endl;
	}
protected:				//派生类保护成员
	void B_func_2()
	{
		cout << "执行B_func_2函数" << endl;
	}
private:                		//派生类私有成员
	int m_B;
};

int main()
{
    BASE *P[3];
    int  s = aa;
    char a[] = "xyz" , b[] = {'x','y','z'};
    const char *c = "abc";
    c = "xyz";
    int m = 3;
    int n = 6;
    swap(m,n);
    cout << m << endl;
    cout << setw(4)<<strlen(a) << endl;
    cout << strlen(b)<< endl;
    cout << *c << endl;
   /* BASE b;
    B Son;
    BASE &a =  b;
    BASE *p = new BASE();
    p->BASE_Eat();
    a.BASE_Eat();
    Son.BASE_Eat();
    b.BASE_Eat(); /*
	/*B b;//创建一个派生类对象b
	b.B_func_1();//在派生类中调用派生类的公有成员
	BASE base;//创建一个基类对象base
	base.BASE_func_1();//在基类中调用基类的公有成 */
    return 0;
}
