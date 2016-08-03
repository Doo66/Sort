/*******************************************
	> File    Name: TestSelectSortOP.cpp
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年05月31日 星期二 20时31分00秒
 ****************************************/

#include "SelectSortOP.h"

void Print(int a[], int size)
{
	for(int i = 0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void TestSelectSortOP()
{
	int a[10] = {1,8,3,2,5,9,0,7,6,4};
	SelectSortOP(a, 10);
	Print(a, 10);
}

int main()
{
	TestSelectSortOP();
	return 0;
}
