/*******************************************
	> File    Name: SelectSort.h
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月31日 星期二 19时59分26秒
 ****************************************/

#include <iostream>
using namespace std;

int SelectMinKey(int a[], int n, int key)
{
	int ret = key;
	for(int i = key+1; i<n; i++)
	{
		if(a[ret] > a[i])
		{
			ret = i; 
		}
	}
	return ret;
}


void SelectSort(int a[], int n)
{
	int MinIndex = 0;
	for(int i = 0; i < n; i++)
	{
		MinIndex = SelectMinKey(a, n, i);	//找出最小值的下标
		if(MinIndex != i)
		{
			swap(a[i], a[MinIndex]);
		}
	}
}
