#pragma once
// GAKKI WLP��s Calculator.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>
#include <fstream>
using namespace std;


void calutaor(int n, ofstream& subject)// �������n������ 0-100�ļӼ������� ����
{
	int a = 0;
	int x, y, z;//����0-100�������
	int j, k;//jk������0��1����������������� 1����� 2����� 3Ϊ�� 4Ϊ�� mΪ��һ���������nΪ�ڶ��������
	int b;//���ڼ����Ƿ�����д���С��������ĸ�������
	double o;//���ڼ����Ƿ�����д���С�������
	for (a = 0; a < n; a++)
	{
		x = rand() % 100;
		y = rand() % 100;
		z = rand() % 100;// �����������0-100������
		j = 1 + rand() % 4;
		k = 1 + rand() % 4;// ������� 1��2��3��4��ģ��Ӽ�		
		if (j == 1 && k == 1)
		{
			cout << x << "+" << y << "+" << z << "=" << x + y + z << endl;
			subject << x << "+" << y << "+" << z << "=" << x + y + z << endl;//��¼��subjecttxt�ļ���
		}//ͬʱΪ�ӵ����
		else if (j == 1 && k == 2)
		{
			if (x + y - z > 0)
			{
				cout << x << "+" << y << "-" << z << "=" << x + y - z << endl;
				subject << x << "+" << y << "-" << z << "=" << x + y - z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//�ȼӺ�������
		else if (j == 1 && k == 3)
		{
			cout << x << "+" << y << "-" << z << "=" << x + y * z << endl;
			subject << x << "+" << y << "-" << z << "=" << x + y * z << endl;//��¼��subjecttxt�ļ���
		}// �ȼӺ�˵����
		else if (j == 1 && k == 4)
		{
			b = y / z;
			o = (double)y / z;
			if (b == o)
			{
				cout << x << "+" << y << "/" << z << "=" << x + y / z << endl;
				subject << x << "+" << y << "/" << z << "=" << x + y / z << endl;//��¼��subjecttxt�ļ���

			}
			else
				n = n + 1;
		}//�ȼӺ�������
		else if (j == 2 && k == 1)
		{
			if (x - y > 0)
			{
				cout << x << "-" << y << "+" << z << "=" << x - y + z << endl;
				subject << x << "-" << y << "+" << z << "=" << x - y + z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//�ȼ����
		else if (j == 2 && k == 2)
		{
			if (x - y > 0 && x - y - z > 0)
			{
				cout << x << "-" << y << "-" << z << "=" << x - y - z << endl;
				subject << x << "-" << y << "-" << z << "=" << x - y - z << endl;//��¼��subjecttxt�ļ���

			}
			else
				n = n + 1;
		}//ͬʱΪ��
		else if (j == 2 && k == 3)
		{
			if (x - y * z > 0)
			{
				cout << x << "-" << y << "*" << z << "=" << x - y * z << endl;
				subject << x << "-" << y << "*" << z << "=" << x - y * z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//�ȼ����
		else if (j == 2 && k == 4)
		{
			b = y / z;
			o = (double)y / z;
			if (b == o && x - y / z > 0)
			{
				cout << x << "-" << y << "/" << z << "=" << x - y / z << endl;
				subject << x << "-" << y << "/" << z << "=" << x - y / z << endl;//��¼��subjecttxt�ļ���

			}
			else
				n = n + 1;

		}//�ȼ����
		else if (j == 3 && k == 1)
		{
			cout << x << "*" << y << "+" << z << "=" << x * y + z << endl;
			subject << x << "*" << y << "+" << z << "=" << x * y + z << endl;//��¼��subjecttxt�ļ���

		}//�ȳ˺��
		else if (j == 3 && k == 2)
		{
			if (x * y - z > 0)
			{
				cout << x << "*" << y << "-" << z << "=" << x * y - z << endl;
				subject << x << "*" << y << "-" << z << "=" << x * y - z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//�ȳ˺��
		else if (j == 3 && k == 3)
		{
			cout << x << "*" << y << "8" << z << "=" << x * y * z << endl;
			subject << x << "*" << y << "8" << z << "=" << x * y * z << endl;//��¼��subjecttxt�ļ���

		}//���ǳ�
		else if (j == 3 && k == 4)
		{
			b = x * y / z;
			o = (double)x * y / z;
			if (o == b)
			{
				cout << x << "*" << y << "/" << z << "=" << x * y / z << endl;
				subject << x << "*" << y << "8" << z << "=" << x * y * z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//�ȳ˺��
		else if (j == 4 && k == 1)
		{
			b = x / y;
			o = (double)x / y;
			if (b == o)
			{
				cout << x << "/" << y << "+" << z << "=" << x / y + z << endl;
				subject << x << "*" << y << "8" << z << "=" << x * y * z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//�ȳ����
		else if (j == 4 && k == 2)
		{
			b = x / y;
			o = (double)x / y;
			if (b == o && x / y - z > 0)
			{
				cout << x << "/" << y << "-" << z << "=" << x / y - z << endl;
				subject << x << "/" << y << "-" << z << "=" << x / y - z << endl;//��¼��subjecttxt�ļ���

			}
			else
				n = n + 1;
		}//�ȳ����
		else if (j == 4 && k == 3)
		{
			b = x / y;
			o = (double)x / y;
			if (b == o)
			{
				cout << x << "/" << y << "*" << z << "=" << x / y * z << endl;
				subject << x << "/" << y << "*" << z << "=" << x / y * z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//�ȳ����
		else if (j == 4 && k == 4)
		{
			b = (x / y) / z;
			o = (double)(x / y )/ z;
			if (b == o)
			{
				cout << x << "/" << y << "/" << z << "=" << x / y / z << endl;
				subject << x << "/" << y << "/" << z << "=" << x / y / z << endl;//��¼��subjecttxt�ļ���
			}
			else
				n = n + 1;
		}//���ǳ�
	}


}


int main()
{
	ofstream subject;
	int a;
	subject.open("subject.txt");
	if (subject.is_open())
	{
		cout << "��������Ŀ�ĸ���" << endl;
		cin >> a;
		calutaor(a, subject);
		subject.close();
	}
	return 0;
}


