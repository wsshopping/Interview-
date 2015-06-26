O(nlgN)和堆排序的复杂度一样
#include <stdio.h>

int a[12] = {2,3,15,7,18,11,14,10,11,19,150,120};

void quicksort(int left, int right)
{
	int i = left;
	int ii = 0;
	int j = right;
	int tmp;
	int index = a[i];
	if(left > right)
	{
		return;
	}
	while(i != j)
	{
		while(i < j && a[j] >= index)
		{
			j --;	
		}
		while(i < j && a[i] <= index)
		{
			i ++;	
		}
		if(i < j)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}	
	a[left] = a[i];
	a[i] = index;
	
	for(ii = 0; ii < 12; ii ++)
	{
		printf("a[%d] = %d \n", ii, a[ii]);	
	}		
	quicksort(left, i - 1);
	quicksort(i + 1, right);
}


int main(int argc, char **argv)
{
	int i = 0;
	for(i = 0; i < 12; i ++)
	{
		printf("a[%d] = %d \n", i, a[i]);	
	}	
	quicksort(0,11);
	for(i = 0; i < 12; i ++)
	{
		printf("a[%d] = %d \n", i, a[i]);	
	}	
}