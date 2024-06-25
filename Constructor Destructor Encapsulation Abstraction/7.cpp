#include<iostream>
using namespace std;

class Date{
	int date;
	string month;
	int year;
	
	public:
	Date()
	{
		cout<<"Enter Date, Month and Year: ";
		cin>>date>>month>>year;
		if(date>=32){
			cout<<"Invalid Date.";
		}else{
			cout<<date<<"-"<<month<<"-"<<year;
		}
	}
};
int main(){
	Date d1;
	
	return 0;
}
