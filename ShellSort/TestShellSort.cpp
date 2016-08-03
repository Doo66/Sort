/*******************************************
	> File    Name: TestShellSort.cpp
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月31日 星期二 08时55分19秒
 ****************************************/
#include "ShellSort.h"

void Print(int a[], int n)
{
	for(int i = 0; i<n; i++)	
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void TestShellSort()
{
	int a[10] = {1,4,3,9,2,7,6,0,5,8};
	shellsort(a, 10);
	Print(a, 10);
}

int main()
{
	TestShellSort();
	return 0;
}

