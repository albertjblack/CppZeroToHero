#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string _name, double _balance, double _int_rate) : 
  Account{_name,_balance}, int_rate{_int_rate}{

  }

bool Savings_Account::deposit(double amount){
  amount += (amount * int_rate/100 );
  return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount){
  return Account::withdraw(amount);
}



void Savings_Account::print(std::ostream &os) const{
  os.precision(2);
  os << std::fixed;
  os << "<Savings_Account | name: " << name << ", balance: " << get_balance() << ", interest rate: " << int_rate;

}