#include<iostream>
using namespace std;

class car{
	string company;
	string model;
	int year;
	
	public:
	car()
	{
		cout<<"Enter company , model and year of your car:"<<endl;
		getline(cin,company);
		getline(cin,model);
		cin>>year;
	};
	
	void display()
	{
		cout<<"your company is "<<company<<",model is "<<model<<" and year is "<<year<<".";
	};
};
int main(){
	
	car c1;
	c1.display();
	
	return 0;
}
