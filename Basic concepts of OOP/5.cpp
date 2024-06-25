#include<iostream>
using namespace std;

class ractangle{
	float length,width,area,perimeter;	
	
	public:
		void member()
		{
			cout<<"Enter length:";
			cin>>length;
			cout<<"Enter width:";
			cin>>width;
			
			area= length * width;
			cout<<"Area is = "<<area<<"\n";
			
			perimeter = (2 * length) + (2 * width);
			cout<<"perimeter is = "<<perimeter;
		};
	
};
int main(){
	
	ractangle n;
	n.member();	
	
	return 0;
}
