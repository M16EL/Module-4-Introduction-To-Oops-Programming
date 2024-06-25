#include<iostream>
using namespace std;

class BankAccount{
	string Name_of_depositer;
	int Account_Number;
	string Type_of_Account;
	double Balance_Amount_in_the_account,Deposite_Amount,Withdraw_Amount;
	
	public:
	void get()
	{
		cout<<"Enter your Name:";
		cin>>Name_of_depositer;
		cout<<"Enter Account Number:";
		cin>>Account_Number;
		cout<<"Enter Type of Account:";
		cin>>Type_of_Account;
		cout<<"Balance Amount in Account:";
		cin>>Balance_Amount_in_the_account;
	}
	
	void Display()
	{
		cout<<"Name = "<<Name_of_depositer<<endl;
		cout<<"Account Number  = "<<Account_Number<<endl;
		cout<<"Type of Account = "<<Type_of_Account<<endl;
		cout<<"Balance  = "<<Balance_Amount_in_the_account<<endl;
		
	}
	
	void Deposite()
	{
		cout<<"Enter Amount you want to deposite:";
		cin>>Deposite_Amount;
		
		Balance_Amount_in_the_account += Deposite_Amount;
		
		cout<<"Your Updated Blance is = "<<Balance_Amount_in_the_account<<".";
	}
	
	void Withdraw()
	{
		cout<<"Enter Amount you want to withdraw:";
		cin>>Withdraw_Amount;
		
		Balance_Amount_in_the_account -= Withdraw_Amount;
		
		cout<<"Your Updated Blance is = "<<Balance_Amount_in_the_account<<".";
	} 
};

int main(){
	string choice;
	BankAccount Accountholder1;
	Accountholder1.get();
	Accountholder1.Display();
    cout<<"you want to deposite or withdraw?.";
    cin>>choice;
    if (choice == "deposite" || choice == "Deposite")
	{
    	Accountholder1.Deposite();
	}else
	{
		Accountholder1.Withdraw();
	}
	
	return 0;
}
