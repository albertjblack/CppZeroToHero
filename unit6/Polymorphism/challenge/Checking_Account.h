#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCOUNT_H

#include "Account.h"

class Checking_Account : public Account{
  // friend std::ostream & operator << (std::ostream & os, const Checking_Account & account);
  private:
    static constexpr const char * def_name {"Unnamed Account"}; 
    static constexpr double def_balance {0.0};
    static constexpr double def_with_fee {15.0};
  public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;

    virtual void print(std::ostream &os) const override;

    virtual ~Checking_Account() = default;
};

#endif