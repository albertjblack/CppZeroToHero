#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string _name, double _balance, double _int_rate) 
  : Savings_Account{_name,_balance,_int_rate}, withdrawal_count{0}{

}

bool Trust_Account::deposit(double amount){
  if (amount >= def_deposits_over_amount){
    amount += def_deposits_over_bonus_amount;
  } 
  return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
  if(withdrawal_count<3){
    withdrawal_count++;
    return Savings_Account::withdraw(amount);
  } return false;
}

std::ostream & operator << (std::ostream & os, const Trust_Account & account){
  os << "<Trust_Account | name: " << account.name << ", balance: " << account.get_balance() << ", interest rate: " << account.int_rate;
  return os;
}