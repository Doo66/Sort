/*******************************************
	> File    Name: TestHeapSort.cpp
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月30日 星期一 23时16分54秒
 ****************************************/
#include "HeapSort.h"

void Print(int a[], size_t n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void TestHeapSort()
{
	int a[10] = {1,4,3,2,6,8,7,9,5,0};
	HeapSort(a, 10);
	Print(a, 10);
}

int main()
{
	TestHeapSort();
	return 0;
}
