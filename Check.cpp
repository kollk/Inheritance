#include "Check.h"

Check::Check(int acctNum, double checkValue)
{
    accountNum = acctNum;
    value = checkValue;
}


int Check::getAccountNum()
{
    return accountNum;
}


double Check::getValue()
{
    return value;
}
