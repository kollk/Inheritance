

#ifndef CHECK_H
#define CHECK_H

class Check {
public:
    /** @brief Create a check drawn on specified account for specified ammount
     *
     * @param acctNum  Account number of account this check is to be drawn from
     * @param theValue Value check is written for
     */
    Check(int acctNum, double checkValue);


    /** @brief Returns account check is from
     *
     * @return int Account number check is to be drawn from
     */
    int getAccountNum();


    /** @brief Returns value of check
     *
     * @return double Value of check
     *
     */
    double getValue();
private:
    int accountNum;
    double value;
};

#endif // CHECK_H
