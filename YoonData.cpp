// YoonData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;    

void HanoiTower(int n, char from, char by, char to)
{
	if (n == 1)
		printf("����1 %c���� %c�� �̵�\n", from, to);
	else
	{
		HanoiTower(n - 1, from, to, by);
		printf("����%d %c���� %c�� �̵�\n", n, from, to);
		HanoiTower(n - 1, by, from, to);
	}
}

int main()
{
	HanoiTower(3, 'A', 'B', 'C');

	int arr[] = { 1,3,5,6,7 };

	return 0;
}
