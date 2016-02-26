/**
  * @author Koll Klienstuber
  */

#include <sstream>
using namespace std;
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
///**
class BankAccount
{

public:
    /**
     * @brief BankAccount creates an simple individual bank account
     */
    BankAccount();
    /**
     * @brief BankAccount Sets account number and the balance
     * @param theANumber the number of the account
     * @param theBalance the amount of the balance
     */
    BankAccount(int theANumber, double theBalance);
    /**
     * @brief ~BankAccount destructor
     */
    virtual ~BankAccount();
    /**
     * @brief setNumber sets the bank accounts number
     * @param aNumber the number of the account
     */
    void setNumber(int aNumber);
    /**
     * @brief getNumber returns the account number
     * @return the account number
     */
    int getNumber()const;
    /**
     * @brief getBalance gets the balance of the account
     * @return the balance of the account
     */
    double getBalance()const;
    /**
     * @brief setBalance sets the balance of the account
     * @param newBalance the new balance of the account after the change
     */
    void setBalance(double newBalance);
    /**
     * @brief deposit a deposit into the account
     * @param money the amount to be depositied
     * @return the new balance of the account
     */

    void deposit(double money);
    /**
     * @brief withdraw withdraws money from the account
     * @param money the amount of money to be taken out of the account
     * @return the new balance of the account
     */
    double withdraw(double money);
    /**
     * @brief balance
     * @return
     */
    bool balance();

    /**
     * @brief toString a virtual function that produces a common mechanism for conducting monthly maintenance on accounts of all types
     * @return account information
     */
    virtual string toString()const;
    /**
     * @brief update a pure virtual function that produces a string showing the account info
     */
    virtual void update() = 0;

private:
    int accountNumber;
    double Balance;
};

#endif // BANKACCOUNT_H

