#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string _name, double _balance, double _int_rate) : 
  Account{_name,_balance}, int_rate{_int_rate}{

  }

bool Savings_Account::deposit(double amount){
  amount += (amount * int_rate/100 );
  return Account::deposit(amount);
}

std::ostream & operator<<(std::ostream & os, const Savings_Account & account){
  os << "<Savings_Account | name: " << account.name << ", balance: " << account.get_balance() << ", interest rate: " << account.int_rate;
  return os;
}