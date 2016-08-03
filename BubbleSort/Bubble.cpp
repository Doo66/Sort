/*******************************************************
	> File    Name: Bubble.cpp
	> Author:       xjf
	> Mail:         doo_magic@126.com
	> Created Time: 2016年08月03日 星期三 13时57分56秒
 ****************************************************/

#include <iostream>
using namespace std;

void BubbleSort(int* arr, int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n-i; j++)
		{
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
}
void Test()
{
	int arr[] = {1, 3, 4, 9, 0, 7, 6, 8, 5, 2};
	BubbleSort(arr, 10);
	for(int i = 0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	Test();
	return 0;
}
