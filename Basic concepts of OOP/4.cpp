#include<iostream>
using namespace std;

class circle{
	int r;
	float Pi=3.14,area,circumference;	
	
	public:
		void member()
		{
			cout<<"Enter value of r:";
			cin>>r;
			
			area= Pi * r * r;
			cout<<"Area is = "<<area<<"\n";
			
			circumference = 2 * Pi * r;
			cout<<"Circumference is = "<<circumference;
		};
	
};
int main(){
	
	circle n;
	n.member();	
	
	return 0;
}
