//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;

class Student{
	protected:
		int rollno;
		
		public:
		void roll_no(){
		cout<<"Enter your roll no:";
		cin>>rollno;
	}
	
};

class Test:public Student{
	protected:
	int sub1,sub2;
	
	
	public:
	void marks(){
	
	cout<<"Enter your marks in Maths and Science:";
	cin>>sub1>>sub2;
    }
};

class Result: public Test{
	int totel;
	
	public:
	void totel_marks(){
	
	totel = sub1+sub2;
	
	cout<<"Totle marks is :"<<totel;
    }
};
int main(){
	
	Result obj;
	obj.roll_no();
	obj.marks();
	obj.totel_marks();
	
	
	return 0;
}
