/*******************************************
	> File    Name: ShellSort.h
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月31日 星期二 08时54分59秒
 ****************************************/

#include<iostream>
using namespace std;

void shellsort(int a[], int n)
{
	int gap = n;
	while(gap >= 1)
	{
		for(int i = gap; i<n; i++)
		{
			
			if(a[i-gap] > a[i])
			{
				int tmp = a[i];
				while((i-gap >= 0) && (a[i-gap] > tmp))
				{
					a[i] = a[i-gap];
					i -= gap;
				}
				a[i] = tmp;
			}
		}
		gap = gap/2;
	}
}

