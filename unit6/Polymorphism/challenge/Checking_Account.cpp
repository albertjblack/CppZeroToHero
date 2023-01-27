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

bool Checking_Account::deposit(double amount){
  return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const{
  os.precision(2);
  os << std::fixed;
  os << "<Checking_Account | name: " << name << ", balance: " << get_balance();
}