/*******************************************
	> File    Name: TestSelectSort.cpp
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月31日 星期二 19时59分26秒
 ****************************************/

#include "SelectSort.h"

void Print(int a[], int size)
{
	for(int i = 0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void TestSelectSort()
{
	int a[10] = {1,8,3,5,7,9,0,2,4,6};
	SelectSort(a, 10);
	Print(a, 10);
}

int main()
{
	TestSelectSort();
	return 0;
}
