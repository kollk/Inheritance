#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(){
    Balance = 0;
    accountNumber = 0;
}

BankAccount::BankAccount(int theANumber, double theBalance)
{ this->accountNumber = theANumber;
    this->Balance = theBalance;
}
BankAccount::~BankAccount(){
    //do nothing
}



int BankAccount::getNumber()const{
    return accountNumber;
}


double BankAccount::getBalance()const{
    return Balance;
}

void BankAccount::setBalance(double newBalance){

    this->Balance = newBalance;
}

void BankAccount::setNumber(int aNumber){
    accountNumber = aNumber;
}


void BankAccount::deposit(double money){
    Balance = Balance + money;
}


double BankAccount::withdraw(double money){
    if(Balance - money >= 0){
        Balance = Balance - money;

    }
    else{
        cout << "Balance is too low." << endl;
    }
}


//bool BankAccount:: balance(){
// if(withdraw() == true){
//     return true;
// }
//     else{
//         return false;
//     }
// }

//virtual update() = 0;

string BankAccount::toString()const {
    stringstream descriptor;
    descriptor << "BankAccount object" << endl
               << " -accountNumber:" << getNumber() << endl
               << " -theBalance:" << getBalance() << endl;
    return descriptor.str();

}


