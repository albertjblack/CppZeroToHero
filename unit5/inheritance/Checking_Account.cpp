#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string _name, double _balance)
  : Account{_name, _balance}{

}

bool Checking_Account::withdraw(double amount){
  if (amount < 0){
    return false;
  } else if((amount+def_with_fee) <= balance){
    balance -= (def_with_fee + amount);
    return true;
  } else {
    return false;
  }
}

std::ostream & operator << (std::ostream & os, const Checking_Account & account){
  os << "<Checking_Account | name: " << account.name << ", balance: " << account.get_balance();
  return os;
}
