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

class BASE		//����
{
public:			//���๫�г�Ա
    BASE(){
     cout << "���Ǹ��๹�캯��" << endl;
    }
    virtual void BASE_Eat()
    {
        cout << "�����麯��"<< endl;
    }
	void BASE_func_1()
	{
		cout << "ִ��BASE_func_1����" << endl;
	}
	~BASE(){
	    cout << "���Ǹ�����������" << endl;
	}
protected:		//���ౣ����Ա
	void BASE_func_2()
	{
		cout << "ִ��BASE_func_2����" << endl;
	}
private:		//����˽�г�Ա
	int m_BASE;
};

class B :public BASE	//����B�࣬�̳�base�࣬private�̳з�ʽ
{
public:					//�����๫�г�Ա

     B(){
       cout << "�������๹�캯��" << endl;
     }
     ~B(){
       cout << "����������������" << endl;
     }
	    virtual void BASE_Eat()
    {
        cout << "���������麯��"<< endl;
    }
	void B_func_1()
	{
		BASE_func_1();		//���������п��Է��ʻ���Ĺ��г�Ա
		BASE_func_2();		//���������п��Է��ʻ���ķ��ʳ�Ա
		cout << "ִ��B_func_1����" << endl;
	}
protected:				//�����ౣ����Ա
	void B_func_2()
	{
		cout << "ִ��B_func_2����" << endl;
	}
private:                		//������˽�г�Ա
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
	/*B b;//����һ�����������b
	b.B_func_1();//���������е���������Ĺ��г�Ա
	BASE base;//����һ���������base
	base.BASE_func_1();//�ڻ����е��û���Ĺ��г� */
    return 0;
}
