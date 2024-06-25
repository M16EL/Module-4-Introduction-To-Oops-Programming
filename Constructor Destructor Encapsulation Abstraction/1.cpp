//Write a program to find the multiplication values and the cubic values using
//inline function

#include<iostream>
using namespace std;

inline void mul();
inline void cubes();

inline void mul()
{
   int Multiplicand ,Multiplier, Product;
   
   cout<<"Enter Multiplicand and Multiplier:";
   cin>>Multiplicand>>Multiplier;
   
   Product = Multiplicand * Multiplier;
   cout<<"Product is :"<<Product;
};

inline void cubes()
{
	int n,cube;
	
	cout<<"\nEnter value of n:";
	cin>>n;
	
	cube = n * n * n;
	cout<<"Cube of n is: "<<cube;
}
int main(){
	
	mul();
	cubes();
	
	
	return 0;
}
