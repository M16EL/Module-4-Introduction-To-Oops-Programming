#include<iostream>
using namespace std;

class calculator{
	int a ,b;
		
	public:
	
	void get()
	{
		cout<<"Enter first value:";
		cin>>a;
		cout<<"Enter second value:";
		cin>>b;
	}
	
	void add()
	{
		cout<<a+b;
	}
	
	void sub()
	{
		cout<<a-b;
	}
	
	void mul()
	{
		cout<<a*b;
	}
	
	void div(){
		if(b!=0){
			cout<<a/b;
		}else{
			cout<<"invalid value.";
		}
	}
};

int main(){
	calculator c1;
	char op='+';op='-';op='*';op='/';
	cout<<"Enter operator:";
	cin>>op;
	switch(op){
		case '+':
			c1.get();
			c1.add();
			break;
		case '-':
			c1.get();
			c1.sub();
			break;
		case '*':
			c1.get();
			c1.mul();
			break;
		case '/':
			c1.get();
			c1.div();
			break;
		default:
			cout<<"invalid operator";
	}
	
	return 0;
}
