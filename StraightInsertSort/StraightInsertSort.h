#include <iostream>
using namespace std;

void StraightInsertSort(int a[], int n)
{
	for(int i = 1; i<n; i++)
	{
		if(a[i] < a[i-1])
		{
			int j = i-1;
			int x = a[i];	//�ڱ�λ
			a[i] = a[i-1];	//Ԫ����ǰ�ƶ�1
			while(x<a[j])
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = x;
		}
	}

}

void Print(int a[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}