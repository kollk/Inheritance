#include "CheckingAccount.h"
#include <sstream>
#include <iostream>
#include <string>

CheckingAccount::CheckingAccount(int theANumber, double theBalance)
: BankAccount(theANumber, theBalance)
{
}

CheckingAccount::CheckingAccount()
    : BankAccount()
{
   minBalance = 100;
   serviceCharge = 0;
}

CheckingAccount::~CheckingAccount(){
    //do nothing
    cout<<"Destroying a Checking Account... \n";
}

void CheckingAccount::update(){
    if(minBalance < 100){
        this->setBalance(getBalance() - 5);
    }
}

bool CheckingAccount::checkBalance(){
    if(this->getBalance() >= 100){
        return true;
    }
    else{
        return false;
    }
}


bool CheckingAccount::takeACheck(Check& Check){
    if (Check.getValue() > this->getBalance()){
        setBalance(this->getBalance() - Check.getValue());
        return true;
    }
    else {
        cout << "sorry you dont have enough money to cash the check" << endl;
        return false;
    }
}

string CheckingAccount::toString() const{
    stringstream descriptor;
       descriptor << "Checking Account" << endl
                 << " uses:" <<BankAccount::toString() << endl;
//        if (getBalance() < 100){
//            setBalance(getBalance() - 5);
//            cout << "your balance is under $100 so we took $5 \n";
        //}

       return descriptor.str();
}
