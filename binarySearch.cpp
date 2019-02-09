#include<iostream>

using namespace std;

int binarySearch(int *a,int key,int size)
{
	int start = 0;
	int end = size-1;
	int mid;

	while(start<=end){
		mid = (start+end)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]>key)
			end = mid-1;
		else
			start = mid+1;
	}

	return -1;
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int key = 3;
	int size = sizeof(a)/sizeof(int);
	int ans = binarySearch(a,key,size);
	cout<<ans<<endl;
	return 0;
}