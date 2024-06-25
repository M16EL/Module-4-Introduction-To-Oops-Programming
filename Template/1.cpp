//Write a program of to swap the two values using template
#include<iostream>
using namespace std;

template <typename T>
void swap(T x,T y)
{   
    int z;
    
	z=x;
	x=y;
	y=z;
	
	cout<<"value after swap"<<endl<<"X:"<<x<<endl<<"Y:"<<y;
	
}

int main(){
	
	swap<int>(x1,y1);
	
	return 0;
}
