#include<iostream>
using namespace std;

class BankAccount{
	string Name_of_depositer,Type_of_Account;
	int Account_Number,choice = 1;
	double Balance_Amount_in_the_account,Deposite_Amount,Withdraw_Amount;
	
	public:
	BankAccount()
	{
		cout<<"Enter your Name:";
		cin>>Name_of_depositer;
		cout<<"Enter Account Number:";
		cin>>Account_Number;
		cout<<"Balance Amount in Account:";
		cin>>Balance_Amount_in_the_account;
		
		cout<<"you want to deposite or withdraw?."<<endl<<"1.deposite"<<endl<<"2.withdraw"<<endl;
		cin>>choice;
		
		if(choice = 1){
		cout<<"Enter Amount you want to deposite:";
		cin>>Deposite_Amount;
		
		Balance_Amount_in_the_account += Deposite_Amount;
		
		cout<<"Your Updated Blance is = "<<Balance_Amount_in_the_account<<"."<<endl;
	
         }else{

		cout<<"Enter Amount you want to withdraw:";
		cin>>Withdraw_Amount;
		
		Balance_Amount_in_the_account -= Withdraw_Amount;
		
		cout<<"Your Updated Blance is = "<<Balance_Amount_in_the_account<<".";
	}
	
	}
	
};

int main(){
	BankAccount Accountholder1;

    return 0;
}
