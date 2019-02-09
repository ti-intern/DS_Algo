#include<iostream>
#include <cmath>

using namespace std;

int findinRange(int *a,int key,int s,int e)
{
	for(int i=s;i<=e;i++){
		if(a[i]==key)
			return i;
	}
	return -1;
}

int jumpSearch(int *a ,int key,int size,int jump)
{
	int i = 0;
	for(;i<size;i+=jump){
		if(a[i]>=key){
			return findinRange(a,key,i-jump,i);
		}
	}
	for(i-=jump;i<size;i++){
		if(a[i]==key){
			return i;
		}
	}
	return -1;
}

int main()
{

	int a[] = {1,2,3,5,6,7,8,9};
	int key = 4;
	int size = sizeof(a)/sizeof(int);
	int jump = sqrt(size);
	int ans = jumpSearch(a,key,size,jump);
	cout<<ans<<endl;
	return 0;
}