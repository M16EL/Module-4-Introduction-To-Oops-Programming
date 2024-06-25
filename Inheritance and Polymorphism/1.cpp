#include<iostream>
using namespace std;

class Cricketer {
	public:
	int run,matches,i;
	
};

class batsman : public Cricketer
{
	int totel_run;
	float avg_run;
	
    public:
    	
    void r()
	{
		cout<<"Enter Matches you have played:";
		cin>>matches;
		for(i=1;i<=matches;i++){
//			if(i==1){
				cout<<"Enter your runs in "<<i<< "st match:";
			    cin>>run;
			    totel_run+=run;
//			}
//else if
//			{
//			cout<<"Enter your runs in "<<i<< "nd match:";
//			cin>>run;
//			}else if
//			{
//			cout<<"Enter your runs in "<<i<< "rd match:";
//			cin>>run;
//			}
		}
	};
	void totel_avg()
	{
		totel_run+=run;
	    cout<<"your totel run in"<<matches<<"matches are:"<<totel_run;
	    
	    avg_run = totel_run/matches;
	    cout<<"\nyour avgrage run is :"<<avg_run;
	}
	

	
};
int main(){
	
	batsman obj1;
	obj1.r();
	obj1.totel_avg();
	
	
	return 0;
}

