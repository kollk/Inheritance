using namespace std;
#include <sstream>


#include "Check.h"
#include "BankAccount.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount : public BankAccount
{
public:
 /**
 * @brief CheckingAccount creates a cheacking account that inherits from a bank account
 */
CheckingAccount();
/**
 * @brief CheckingAccount sets the min balance to 100 and a service charge to 0
 * @param theANumber the number of the bank account
 * @param theBalance the amount of the balance in the account
 */
CheckingAccount(int theANumber, double theBalance);
/**
 * @brief ~CheckingAccount destructor
 */
virtual ~CheckingAccount();

/**
* @brief checkBalance checks to see if the balance is greater then 100
* @return returns true if balance is greater then 100 otherwise false
*/
bool checkBalance();
/**
 * @brief takeACheck if the account has enough money then it withdraws the amount of the check
 * @param Check amount of check
 * @return true if the check cleared otherwise false
 */
bool takeACheck(Check& Check);

/**
 * @brief toString a virtual function that produces a common mechanism for conducting monthly maintenance on accounts of all types
 * @return account information
 */
string toString() const;
/**
 * @brief update updates the account information on a monthly basis
 */
void update();
private:
double minBalance;
double serviceCharge;

};

#endif // CHECKINGACCOUNT_H
