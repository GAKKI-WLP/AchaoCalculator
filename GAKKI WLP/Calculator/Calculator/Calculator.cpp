// GAKKI WLP‘s Calculator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
using namespace std;


void calutaor(int n, ofstream& subject)// 随机出现n个三个 0-100的加减法算数 函数
{
	int a = 0;
	int x, y, z;//三个0-100的随机数
	int j, k;//jk来产生1,2,3,3,4的两个随机数，其中 1代表加 2代表减 3为除 4为乘 m为第一个运算符，n为第二个运算符
	int b,h;//用于检验是否除法中存在小数的情况的辅助变量
	double o,p;//用于检验是否除法中存在小数的情况
	for (a = 0; a < n; a++)
	{
		x = rand() % 100;
		y = rand() % 100;
		z = rand() % 100;// 随机产生三个0-100的整数
		j = 1 + rand() % 4;
		k = 1 + rand() % 4;// 随机产生 1，2，3，4来模拟加减		
		if (j == 1 && k == 1)
		{
			cout << x << "+" << y << "+" << z << "=" << x + y + z << endl;
			subject << x << "+" << y << "+" << z << "=" << x + y + z << endl;//记录到subjecttxt文件中
		}//同时为加的情况
		else if (j == 1 && k == 2)
		{
			if (x + y - z > 0)
			{
				cout << x << "+" << y << "-" << z << "=" << x + y - z << endl;
				subject << x << "+" << y << "-" << z << "=" << x + y - z << endl;//记录到subjecttxt文件中
			}
			else
				n = n + 1;
		}//先加后减的情况
		else if (j == 1 && k == 3)
		{
			cout << x << "+" << y << "-" << z << "=" << x + y * z << endl;
			subject << x << "+" << y << "-" << z << "=" << x + y * z << endl;//记录到subjecttxt文件中
		}// 先加后乘的情况
		else if (j == 1 && k == 4)
		{
			if (z != 0)//排除分母为0的情况
			{
				b = y / z;
				o = (double)y / z;
				if (b == o)
				{
					cout << x << "+" << y << "/" << z << "=" << x + y / z << endl;
					subject << x << "+" << y << "/" << z << "=" << x + y / z << endl;//记录到subjecttxt文件中

				}
				else
					n = n + 1;
			}
			else
				n = n + 1;
		}//先加后除的情况
		else if (j == 2 && k == 1)
		{
			if (x - y > 0)
			{
				cout << x << "-" << y << "+" << z << "=" << x - y + z << endl;
				subject << x << "-" << y << "+" << z << "=" << x - y + z << endl;//记录到subjecttxt文件中
			}
			else
				n = n + 1;
		}//先减后加
		else if (j == 2 && k == 2)
		{
			if (x - y > 0 && x - y - z > 0)
			{
				cout << x << "-" << y << "-" << z << "=" << x - y - z << endl;
				subject << x << "-" << y << "-" << z << "=" << x - y - z << endl;//记录到subjecttxt文件中

			}
			else
				n = n + 1;
		}//同时为减
		else if (j == 2 && k == 3)
		{
			if (x - y * z > 0)
			{
				cout << x << "-" << y << "*" << z << "=" << x - y * z << endl;
				subject << x << "-" << y << "*" << z << "=" << x - y * z << endl;//记录到subjecttxt文件中
			}
			else
				n = n + 1;
		}//先减后乘
		else if (j == 2 && k == 4)
		{
			if (z != 0)//排除分母为0的情况
			{
				b = y / z;
				o = (double)y / z;
				if (b == o && x - y / z > 0)
				{
					cout << x << "-" << y << "/" << z << "=" << x - y / z << endl;
					subject << x << "-" << y << "/" << z << "=" << x - y / z << endl;//记录到subjecttxt文件中

				}
				else
					n = n + 1;
			}
			else
				n = n + 1;

		}//先减后除
		else if (j == 3 && k == 1)
		{
			cout << x << "*" << y << "+" << z << "=" << x * y + z << endl;
			subject << x << "*" << y << "+" << z << "=" << x * y + z << endl;//记录到subjecttxt文件中

		}//先乘后加
		else if (j == 3 && k == 2)
		{
			if (x * y - z > 0)
			{
				cout << x << "*" << y << "-" << z << "=" << x * y - z << endl;
				subject << x << "*" << y << "-" << z << "=" << x * y - z << endl;//记录到subjecttxt文件中
			}
			else
				n = n + 1;
		}//先乘后减
		else if (j == 3 && k == 3)
		{
			cout << x << "*" << y << "*" << z << "=" << x * y * z << endl;
			subject << x << "*" << y << "*" << z << "=" << x * y * z << endl;//记录到subjecttxt文件中

		}//都是乘
		else if (j == 3 && k == 4)
		{
			if (z != 0)//排除分母为0的情况
			{
				b = x * y / z;
				o = (double)x * y / z;
				if (o == b)
				{
					cout << x << "*" << y << "/" << z << "=" << x * y / z << endl;
					subject << x << "*" << y << "*" << z << "=" << x * y * z << endl;//记录到subjecttxt文件中
				}
				else
					n = n + 1;
			}
			else
				n = n + 1;
		}//先乘后除
		else if (j == 4 && k == 1)
		{
			if (y != 0)
			{
				b = x / y;
				o = (double)x / y;
				if (b == o)
				{
					cout << x << "/" << y << "+" << z << "=" << x / y + z << endl;
					subject << x << "*" << y << "*" << z << "=" << x * y * z << endl;//记录到subjecttxt文件中
				}
				else
					n = n + 1;
			}
			else
				n = n + 1;
		}//先除后加
		else if (j == 4 && k == 2)
		{
			if (y != 0)//排除分母为0的情况
			{
				b = x / y;
				o = (double)x / y;
				if (b == o && x / y - z > 0)
				{
					cout << x << "/" << y << "-" << z << "=" << x / y - z << endl;
					subject << x << "/" << y << "-" << z << "=" << x / y - z << endl;//记录到subjecttxt文件中

				}
				else
					n = n + 1;
			}
			else
				n = n + 1;

		}//先除后减
		else if (j == 4 && k == 3)
		{
			if (y != 0)//排除分母为0的情况
			{
				b = x / y;
				o = (double)x / y;
				if (b == o)
				{
					cout << x << "/" << y << "*" << z << "=" << x / y * z << endl;
					subject << x << "/" << y << "*" << z << "=" << x / y * z << endl;//记录到subjecttxt文件中
				}
				else
					n = n + 1;
			}
			else
				n = n + 1;
		}//先除后乘
		else if (j == 4 && k == 4)
		{
			if (y != 0 && z != 0)
			{
				b = x / y;
				h = b / z;
				o = (double)x / y;
				p = (double)b / z;
				if (b == o && h == p)
				{
					cout << x << "/" << y << "/" << z << "=" << x / y / z << endl;
					subject << x << "/" << y << "/" << z << "=" << x / y / z << endl;//记录到subjecttxt文件中
				}
				else
					n = n + 1;
			}
			else
				n = n + 1;

		}//都是除
	}


}


int main()
{
	ofstream subject;
	int a;
	subject.open("subject.txt");
	if (subject.is_open())
	{
		cout << "请输入题目数目" << endl;
		cin >> a;
		calutaor(a, subject);
		subject.close();
	}
	return 0;

}


