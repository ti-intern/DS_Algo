#include<iostream>

using namespace std;

int linearSearch(int *a,int key,int size)
{
	for(int i=0;i<size;i++){
		if(a[i]==key)
			return i;
	}
	return -1;
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int key = 3;
	int size = sizeof(a)/sizeof(int);
	int ans = linearSearch(a,key,size);
	cout<<ans<<endl;
	return 0;
}