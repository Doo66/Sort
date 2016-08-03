/*******************************************************
	> File    Name: TestQuickSort.cpp
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年06月01日 星期三 20时56分57秒
 ****************************************************/

#include "QuickSort.h"

void Print(int a[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void TestQuickSort()
{
	int a[10] = {1,9,3,5,8,0,6,4,7,2};
	QuickSort(a, 0, 9);
	Print(a, 10);
}

int main()
{
	TestQuickSort();
	return 0;
}
