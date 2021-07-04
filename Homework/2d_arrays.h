#pragma once
#include <iostream>
using namespace std;

void array_generation_2d() //�������� ����� �������
//��������� ��������� ��������
{
	const int n = 10;
	const int m = 5;
	int a[n][m]; //������ ������ �������� �� ����� ������, ������ �� ����� �������, �� ��� �� �������
	
	//a[0][1] = 5;
	//int b = a[2][1];

	for (int i = 0; i < n; i++) //���������� ������� ���������� �������: ������� ��������� �� �������, ����� �� ��������
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 10;
			std::cout << a[i][j] << ' ';
		}
		std::cout << endl;
	}
}

void generate_unit_matrix() //�������� ��������� ������� (�������, � ������� �� ������� ��������� 1, ��������� - 0)
{
	const int n = 10;
	int a[n][n]; //������ ������ �������� �� ����� ������, ������ �� ����� �������, �� ��� �� �������

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//a[i][j] = ((i == j) ? 1 : 0); //���� ��� ��������� - ��������� �������, ������������ � ������ ������� 1, ����� - 0
			a[i][j] = (i==j); //���������� ���������, ������� ������������ ������������ � 1 ��� 0, ������ �� true ��� false
			std::cout << a[i][j] << ' ';
		}
		std::cout << endl;
	}
}

void generate_triangle_matrix() //�������� ����������� ������� (�������, � ������� ���� ������� ��������� ��������� �������� �� 1 �� 9 ���, ���� - 0, �� ����� ��������� - 1)
{
	const int n = 10;
	int a[n][n]; //������ ������ �������� �� ����� ������, ������ �� ����� �������, �� ��� �� �������

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				a[i][j] = 1;
			}
			else if (j > i)
			{
				a[i][j] = rand() % 9+1;
			}
			else
			{
				a[i][j] = 0;
			}
			std::cout << a[i][j] << ' ';
		}
		std::cout << endl;
	}
}

void array_generation_2d_2() //�������� ����� �������
//��������� ������� n*2
{
	const int n = 10;
	int a[n][2]; //������ ������ �������� �� ����� ������, ������ �� ����� �������, �� ��� �� �������


	for (int i = 0; i < n; i++) //���������� ������� ���������� �������: ������� ��������� �� �������, ����� �� ��������
	{
		for (int j = 0; j < 2; j++)
		{
			a[i][j] = rand() % 10;
			std::cout << a[i][j] << ' ';
		}
		std::cout << endl;
	}

	int max_elem_of_first_column = a[0][0];
	int index_of_max_elem_of_first_column = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i][0] > max_elem_of_first_column)
		{
			max_elem_of_first_column = a[i][0];
			index_of_max_elem_of_first_column = i;
		}
	}
	cout << a[index_of_max_elem_of_first_column][1] << endl; //
}

void cards_array_generation_2d() //�������� ������� ���� ����� ��������� ������
{
	const int n = 52;
	int a[n][2]; //������ ������ �������� �� ����� ������, ������ �� ����� �������, �� ��� �� �������


	for (int i = 0; i < n; i++) //���������� ������� ���������� �������: ������� ��������� �� �������, ����� �� ��������
	{
		a[i][0] = i/4+2;
		a[i][1] = i%4;
		
		std::cout << a[i][0] << ' ' << a[i][1];
		std::cout << endl;
	}
}

/*  i / 4 + 2           i % 4
0     0        	 2        0             0
1  	  0		     2        1             1
2     0		     2        2             2
3  	  0			 2        3             3
4  	  1			 3        0             0
5     1			 3        1             1
6  	  1			 3        2             2
7  	  1			 3        3             3
8     2          4        0             0
*/

//4 3
//4 2
//3 6
//1 2
//5 9
//2 5