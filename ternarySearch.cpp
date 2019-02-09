#include <iostream>

using namespace std;

int ternarySearch(int *a, int start, int end, int key) 
{
	int mid1;
	int mid2;

	while(start<=end){
		mid1 = start + (start+end)/3;
		mid2 = end - (start+end)/3;

		if(a[mid1]==key)
			return mid1;

		else if(a[mid2]==key)
			return mid2;

		else if(a[mid1]>key)
			end = mid1-1;

		else if(a[mid2]<key)
			start = mid2+1;
		else{
			start = mid1+1;
			end = mid2-1;
		}
	}
	return -1;
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int key = 3;
	int size = sizeof(a)/sizeof(int);
	int ans = ternarySearch(a,0,size-1,key);
	cout<<ans<<endl;
	return 0;
}