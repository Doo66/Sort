/*******************************************
	> File    Name: HeapSort.h
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月30日 星期一 23时17分11秒
 ****************************************/

#include<iostream>
#include<assert.h>
using namespace std;

void adjustdown(int a[], size_t n, int parent)
{
	int child = parent*2+1;
	while(child < n)
	{
		if(child+1 < n && a[child+1] > a[child])
		{
			child++;
		}
		if(a[child] > a[parent])
		{
			swap(a[child], a[parent]);
			parent = child;
			child = parent*2+1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int a[], size_t n)
{
	assert(a);
	for(int i = (n-2)/2; i>=0; i--)
	{
		adjustdown(a, n, i); //向下调整成大堆
	}
	for(int i = 0; i < n; i++)
	{
		swap(a[0], a[n-i-1]);
		adjustdown(a, n-i-1, 0);
	}
}

