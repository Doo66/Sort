/*******************************************************
	> File    Name: QuickSort.h
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年06月01日 星期三 20时56分37秒
 ****************************************************/

#include <iostream>
using namespace std;

int Partition(int a[], int left, int right)
{
	int reference = a[left];	//选最左边元素为基准
	int i = left;
	while(left < right)
	{
		while(a[right] >= reference && right>left)
		{
			right--; //向左移动，找小于基准的元素
		}
		while(a[left] <= reference && left < right)
		{
			left++;  //向右移动，找大于基准堆元素
		}
		if(left < right)
		{
			swap(a[left], a[right]);
		}
	}
	swap(a[i], a[left]);
	return left;
}

void QuickSort(int a[], int left, int right)
{
	if(left < right)
	{
		int mid = Partition(a, left, right);
		QuickSort(a, left, mid-1);
		QuickSort(a, mid+1, right);
	}
}
