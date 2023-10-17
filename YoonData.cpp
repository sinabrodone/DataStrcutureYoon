// YoonData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;    

void HanoiTower(int n, char from, char by, char to)
{
	if (n == 1)
		printf("원반1 %c에서 %c로 이동\n", from, to);
	else
	{
		HanoiTower(n - 1, from, to, by);
		printf("원반%d %c에서 %c로 이동\n", n, from, to);
		HanoiTower(n - 1, by, from, to);
	}
}

int main()
{
	HanoiTower(3, 'A', 'B', 'C');

	int arr[] = { 1,3,5,6,7 };

	return 0;
}
