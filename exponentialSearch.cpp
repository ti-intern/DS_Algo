#include <iostream>

using namespace std;

int binarySearch(int *a,int key,int start,int end)
{
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

int exponentialSearch(int* a,int key,int size)
{
	int start = 0;
	int end = 1;

	while(end<size){
		if(a[end]>=key){
			return binarySearch(a,key,start,end);
		}
		else{
			start = end;
			end <<= 1;
		}
	}

	return binarySearch(a,key,start,size);
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int key = 1;
	int size = sizeof(a)/sizeof(int);
	int ans = exponentialSearch(a,key,size);
	cout<<ans<<endl;
	return 0;
}