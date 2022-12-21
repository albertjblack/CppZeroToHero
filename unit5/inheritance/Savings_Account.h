#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"

class Savings_Account : public Account{
  friend std::ostream & operator << (std::ostream & os, const Savings_Account & account);
  private:
    static constexpr const char * def_name {"Unnamed Account"}; // const available only to the class to provide default parameter values
    static constexpr double def_balance {0.0};
    static constexpr double def_int_rate {0.0};
  protected:
    double int_rate;
  public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    // inherit Account::withdraw;
};

#endif