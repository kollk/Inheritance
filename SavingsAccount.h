


#ifndef SAVINGSACCOUNT_H

#define SAVINGSACCOUNT_H
#include "BankAccount.h"



class SavingsAccount : public BankAccount

{
public:
    /**
     * @brief SavingsAccount creates a savings account that inherits from a bank account
     */
    SavingsAccount();
    /**
     * @brief SavingsAccount savings account
      * @param theANumber the number of the account
     * @param theBalance the balance of the account
     * @param interest sets the interest rate equal to the desired interest
     */
    SavingsAccount(int theANumber, double theBalance, double interest);
    /**
      *SavingsAccount destructor
      */
    ~SavingsAccount();
    /**
     * @brief getInterest gets the interes of the savings account
     * @return interestRate
     */
    double getInterest()const;
    /**
     * @brief setInterest sets the interest rate
     * @param interest the rate of interest to be paid on the account
     * @return interestRate
     */
    void setInterest(double interest);
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

    double interestRate;

};
#endif // SAVINGSACCOUNT_H
