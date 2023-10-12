// YoonData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;    

int LSearch(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
            return i;
    }

    return -1;
}

// 이진 탐색
int BSearch(int ar[], int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (target == ar[mid])
            return mid;
        else
        {
            if (ar[mid] > target)
                last = mid - 1;
            else
                first = mid +1;
        }
    }

    return -1;
}

int main()
{
    //자료구조 공부 시작.
    int arr[] = { 3,5,2,4,9 };
    int idx = 0;

    // 순차탐색
    idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
    if (idx == -1)
        cout << "탐색 실패" << endl;
    else
        cout << "타겟 저장 인덱스: " << idx << ' ' << endl;

    idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
    if (idx == -1)
        cout << "탐색 실패" << endl;
    else
        cout << "타겟 저장 인덱스: " << idx << ' ' << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
