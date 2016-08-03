#include "StraightInsertSort.h"

void TestStraightInsertSort()
{
	int a[8] = {3,1,5,7,2,4,9,6};
	int size = 8;
	StraightInsertSort(a, size);
	Print(a, size);
}
int main()
{  
    TestStraightInsertSort();
	system("pause");
	return 0;
} 