#include<iostream>
using namespace std;

class area{
	int r,l,w;
	float Pi=3.14;
	double lm,wm,result;
	
	public:
		
		void a(){
			cout<<"Enter value of r:";
			cin>>r;
			result= Pi * r * r;
			cout<<"Area of Circle: "<<result;
		}
		
		void a(int l1, int w1){
			l=l1;
			w=w1;
			result = l * w;
			cout<<"Area of rectangle is: "<<result;
		}
		
		void a(double l1,double l2){
			lm=l1;
			wm=l2;
			result = 1/2 * l * w;
			cout<<"Area of triangle is: "<<result;
		}
		
		void a(int m){
			l = m;
			result = m * m * m * m;
			cout<<"Area of squar is: "<<result;
		}
};

int main(){
	int choice;
	int n1,n2;
	double m1,m2;
	area obj;
	cout<<"Enter 1 for Circle ,2 for rectangle, 3 for Triangle, 4 for Sqaur: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.a();
			break;
		case 2:
			cout<<"Enter length and width :";
			cin>>n1,n2;
			obj.a(n1,n2);
			break;
		case 3:
			cout<<"Enter length and base :";
			cin>>m1,m2;
			obj.a(m1,m2);
		case 4:
			cout<<"Enter length of side :";
			cin>>n1;
			obj.a(n1);
			break;
		default:
			cout<<"Invalid .";
			
	}
	
	
	
	return 0;
}
