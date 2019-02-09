#include<iostream>

using namespace std;

void bubbleSort(int* a,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=1;j<size;j++)
		{
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
		}
	}
}

int main()
{
	int a[] = {1,4,2,6,7,3,6,8,3};
	int size = sizeof(a)/sizeof(int);
	bubbleSort(a,size);
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}