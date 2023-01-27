#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
  // friend std::ostream & operator << (std::ostream & os, const Trust_Account & account);
  private:
    static constexpr const char * def_name {"Unnamed Account"}; // const available only to the class to provide default parameter values
    static constexpr double def_balance {0.0};
    static constexpr double def_int_rate {0.0};
    static constexpr double def_deposits_over_amount {5000.0};
    static constexpr double def_deposits_over_bonus_amount {50};
  protected:
    int withdrawal_count;
  public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;

    virtual void print(std::ostream &os) const override;

    virtual ~Trust_Account() = default;
};

#endif