//Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Rectangle{
	public:
	int l,w,result;
};

class area:public Rectangle{
	
	public:
	void a(){
		cout<<"Enter length and width:";
		cin>>l>>https://github.com/M16EL/Se---Introduction-To-Programming---May-2024w;
		result= l * w;
		cout<<"Area of Rectangle is: "<<result;
	};
};
int main(){
	
	area obj;
	obj.a();
	
	
	return 0;
}
