/*******************************************
	> File    Name: SelectSortOP.h
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月31日 星期二 20时31分25秒
 ****************************************/

#include <iostream>
using namespace std;

void SelectSortOP(int a[], int n)
{
	int MinIndex;
	int MaxIndex;
	for(int i = 0; i <= n/2; i++)
	{
		MinIndex = i;
		MaxIndex = n-i;
		for(int j =i+1; j <= n-i-1; j++)
		{
			if(a[MaxIndex] < a[j])
			{
				MaxIndex = j;
			}
			if(a[MinIndex] > a[j])
			{
				MinIndex = j;
			}
		}
		swap(a[MinIndex], a[i]);
		//if(MinIndex != MaxIndex)
		swap(a[MaxIndex], a[n-i]);
	}
}
