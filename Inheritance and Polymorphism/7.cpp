#include<iostream>
using namespace std;

class a1{
	public:
		string name;
		
		a1(){
			cout<<"Enter your name: ";
			cin>>name;
		}
}; 

class a2:public a1{
	public:
		
		a2(){
			cout<<"Your name is:"<<name;
		}
};

class a3:public a2{
	public:
		
		
		a3(){
			cout<<"\nGood name.";
		}
};

int main(){

	a3 obj2;
	
	return 0;
}
