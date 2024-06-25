#include<iostream>
using namespace std;

int main(){
	
	int i,n;
	
	cout<<"Enter value of n:";
	cin>>n;
	
	cout<<"Enter values of array:";
	int a[n];
	
	for(i=0;i<=n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<=n;i++){
		cout<<a[i];
	}
	
	
	return 0;
}
