#include"global.h"
//噸宥糞�嶢鈎�

//java匈中
class java   
{
public:
	void header() 
	{
		cout << "，，，，，，，，，，，，(巷慌遊何)，，，，，，，，，，，，，，，" << endl;
	}
	void booter() 
	{
		cout << "，，，，，，，，，，，，(巷慌久何)，，，，，，，，，，，，，，，" << endl;
	}
	void left() 
	{
		cout << "，，，，，，，，，，，，(巷慌恣迦)，，，，，，，，，，，，，，，" << endl;
	}
	void center() 
	{
		cout << "，，，，，，，，，，，，(java婢幣)，，，，，，，，，，，，，，，" << endl;
		cout << "，，，，，，，，，，，，，，，，，，，，，，，，，，，" << endl;
	}
};
//python匈中
class Python
{
public:
	void header()
	{
		cout << "，，，，，，，，，，，，(巷慌遊何)，，，，，，，，，，，，，，，" << endl;
	}
	void booter()
	{
		cout << "，，，，，，，，，，，，(巷慌久何)，，，，，，，，，，，，，，，" << endl;
	}
	void left()
	{
		cout << "，，，，，，，，，，，，(巷慌恣迦)，，，，，，，，，，，，，，，" << endl;
	}
	void center()
	{
		cout << "，，，，，，，，，，，，(Python婢幣)，，，，，，，，，，，，，，，" << endl;
	}
};

//写覚糞��

//匯倖匈中巷慌議叫廉亟匯倖窃
class Base_page 
{
public:
	void header()
	{
		cout << "，，，，，，，，，，，，(巷慌遊何)，，，，，，，，，，，，，，，" << endl;
	}
	void booter()
	{
		cout << "，，，，，，，，，，，，(巷慌久何)，，，，，，，，，，，，，，，" << endl;
	}
	void left()
	{
		cout << "，，，，，，，，，，，，(巷慌恣迦)，，，，，，，，，，，，，，，" << endl;
	}


};
//java匈中
class java:public Base_page
{
public:
	void center()
	{
		cout << "，，，，，，，，，，，，(java婢幣)，，，，，，，，，，，，，，，" << endl;
		cout << "，，，，，，，，，，，，，，，，，，，，，，，，，，，" << endl;
	}
};
//python匈中
class python :public Base_page
{
public:
	void center()
	{
		cout << "，，，，，，，，，，，，(python婢幣)，，，，，，，，，，，，，，，" << endl;
		cout << "，，，，，，，，，，，，，，，，，，，，，，，，，，，" << endl;
	}
};
//c++匈中
class CPP :public Base_page
{
public:
	void center()
	{
		cout << "，，，，，，，，，，，，(CPP婢幣)，，，，，，，，，，，，，，，" << endl;
		cout << "，，，，，，，，，，，，，，，，，，，，，，，，，，，" << endl;
	}
};

void test01() 
{
	java ja;
	ja.header();
	ja.booter();
	ja.left();
	ja.center();

}

void test02()
{
	python py;
	py.header();
	py.booter();
	py.left();
	py.center();
}
void test03() 
{
	CPP cpp;
	cpp.header();
	cpp.booter();
	cpp.left();
	cpp.center();
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};