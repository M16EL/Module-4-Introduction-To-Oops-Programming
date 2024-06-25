#include<iostream>
using namespace std;

class Employee{
	string name;
	int id,n;
	double salary;
	
	public:
		
	Employee(){
		cout<<"Enter Number of project you have done:";
		cin>>n;
		
		if(n>=5){
			salary= n * 2 *10000;
		}else if(n<=4){
			salary = n * 10000;
		}else if (n>0 && n<2){
			salary = 10000;
		}
		
		cout<<salary;
	}
};
int main(){
	
	Employee e1;
	
	
	return 0;
}
