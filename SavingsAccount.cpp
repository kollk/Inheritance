#include "SavingsAccount.h"
#include <iostream>
using namespace std;



SavingsAccount::SavingsAccount()
    :BankAccount()
{
    cout << "Making a Savings Account...." << endl;
    interestRate = .2;
}

SavingsAccount::SavingsAccount(int theANumber, double theBalance, double interest)
    : BankAccount(theANumber, theBalance)
{
    cout << "Making a Savings Account...." << endl;
    interestRate = interest;
}


SavingsAccount::~SavingsAccount()
{
    cout << "Destroying a Savings Account..." << endl;
}

double SavingsAccount::getInterest()const{
    return interestRate;
}

void SavingsAccount::setInterest(double rateOfInterest){
    this->interestRate = rateOfInterest;
}

 void SavingsAccount::update(){
   setBalance(getBalance() + interestRate);
}

 string SavingsAccount::toString()const{
     stringstream descriptor;
        descriptor << "Savings Account" << endl
                   << " uses:" <<BankAccount::toString() << endl
                   << " -interestRate:" << getInterest() << endl;
        return descriptor.str();
 }




