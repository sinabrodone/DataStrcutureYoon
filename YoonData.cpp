// YoonData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;    
class Point
{
public:

	int xpos;
	int ypos;

public:
	Point(int x = 0, int y = 0)
		:xpos(x), ypos(y)
	{

	}
};

template<typename T>
void Print(T a)
{
	cout << a << endl;
}

template<>
void Print(Point& inPoint) 
{
	cout << inPoint.xpos << ", " << inPoint.ypos;
}


int main()
{
	Point p(2, 3);
	Print(p);
	return 0;
}
