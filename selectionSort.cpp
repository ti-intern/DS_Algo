#include<iostream>

using namespace std;

void selectionSort(int* a,int size)
{
	for(int i=0;i<size-1;i++)
	{
		int x = i;
		for(int j=i+1;j<size;j++)
		{
			if(a[j]<a[x])
				x = j;
		}
		swap(a[x],a[i]);
	}
}

int main()
{
	int a[] = {1,4,2,6,7,3,6,8,3};
	int size = sizeof(a)/sizeof(int);
	selectionSort(a,size);
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}