#include<iostream>
using namespace std;

int main(){
    int i, j,n;
    char ch = 'A';
    
    cout<<"Enter value of n:";
    cin>>n;
    
    for(i = 1; i <= n; i++) {
    	ch = 'A';
        for(j = 1; j <=i ; j++) {
            cout << ch; 
            ch++;
        }
        cout << "\n";
    }
    return 0;
}


