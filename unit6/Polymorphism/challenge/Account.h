#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>
#include "I_Printable.h"

class Account: public I_Printable{
  // friend std::ostream & operator<<(std::ostream &os, const Account & account);
  private:
    static constexpr const char * def_name {"Unnamed Account"}; // const available only to the class to provide default parameter values
    static constexpr double def_balance {0.0};
  protected:
    std::string name;
    double balance;
  public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount)= 0;
    double get_balance() const;

    virtual void print(std::ostream &os) const override;

    virtual ~Account() = default;
};

#endif