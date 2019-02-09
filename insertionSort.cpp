#include<iostream>

using namespace std;

void insertionSort(int* a,int size)
{
	for(int i=1;i<size;i++)
	{
		int j = i;
		while(a[j]<a[j-1] && j>0){
			swap(a[j],a[j-1]);
			j--;
		}
    }
}

int main()
{
	int a[] = {1,4,2,6,7,3,6,8,3};
	int size = sizeof(a)/sizeof(int);
	insertionSort(a,size);
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}