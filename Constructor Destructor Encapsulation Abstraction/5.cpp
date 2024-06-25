#include<iostream>
using namespace std;

class Triangle{
	int length,a,b,c;
	
	public:
	Triangle()
	{
		cout<<"Enter length and a, b and c:";
		cin>>length>>a>>b>>c;
		
		if (a==b && b==c){
			cout<<"Triangle is equilateral";
		}else if(a==b || b==c || a==c){
			cout<<"Triangle is isosceles";
		}else if (a!=b!=c){
			cout<<"Triangle is scalene";
		}
	}
};
int main(){
    Triangle T1;	
	return 0;
}
