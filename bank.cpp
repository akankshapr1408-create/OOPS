#include <bits/stdc++.h>
using namespace std;
class bank{
    private:
    int balance;
    int accountnumber;
    public:
    bank(int bal,int accno){
        accountnumber=accno;
        balance=bal;
    }
    void deposit(int amount){
        balance+=amount;
        cout<<"money deposited  "<<amount<<"  total balance  "<<balance<<endl;
    }
    void withdraw(int amount){
        if(amount<=balance){
            balance-=amount;
            cout<<"money withdrawed  "<<amount<<"  balance left  "<<balance<<endl;
        }
    }
    void display(){
        cout<<"Account Number  "<<accountnumber<<endl;
        cout<<"Balance in your account  "<<balance<<endl;
    }
};

int main() {
	
//create class bank with account no. and balance, keep balance private that is cannot be directly accessed from outside the class 
//provide member fn for depositing , withdrawing and displaying the balance
bank b(9000,123456);
b.display();
b.deposit(4000);
b.display();
b.withdraw(3000);
b.display();

}
