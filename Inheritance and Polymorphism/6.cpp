//Write a C++ Program to show access to Private Public and Protected using
//Inheritance

#include<iostream>
using namespace std;

class a1{
	private:
		int i;
	public:
		int j;
	protected: 
	    int k;
};

class a2:public a1{
	
	public:
	void display()
	{
	 cout<<"this is class a2.";	
	}
};

int main(){
	
	a2 obj;
	obj.display();
	
	return 0;
}
