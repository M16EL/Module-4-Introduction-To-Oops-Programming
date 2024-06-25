#include<iostream>
using namespace std;

int main(){
	
	int i,j,n,n1,n2,n3,a1,count=0;

	cout<<"Enter value of n:";
	cin>>n;
	
	cout<<"Enter values of array:";
	int a[n];
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
	int t = a[i];
    int arr[n1];
	for(i=0;i<n;i++)
	{
		  count=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			   if(a[i]==a[j])
			{
	           count++;
			}
				
	    	}
	    	
		
			
		}
		
		if(count==0)
		{
			cout<<a[i];
        }
		else{
        	arr[n1]=a[i];
		}
		
		
		for(i=0;i<=n1;i++){
		cout<<arr[i];
	}


	}
	
	
	
	
	
	return 0;
}




//else
//		{
//			arr[n1]=a[i];
//			n1++;
//		}


