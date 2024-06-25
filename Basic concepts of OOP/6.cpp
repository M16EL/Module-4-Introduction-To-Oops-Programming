#include<iostream>
using namespace std;

class Person{
	string name;
	int age;
	string country;	
	
	public:
		void get()
		{
			cout<<"Enter Your Name:";
			cin>>name;
			cout<<"Enter your Age:";
			cin>>age;
			cout<<"Enter country you belong to:";
			cin>>country;
		};
		
		void set()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Country : "<<country<<endl;	
		};
	
};
int main(){
	
	Person n1;
	n1.get();	
	n1.set();	
	
	return 0;
}
