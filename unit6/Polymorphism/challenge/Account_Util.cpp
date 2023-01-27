#include "Account_Util.h"


void display(const std::vector<Account *> & accounts){
  std::cout << "Account" << std::endl;
  for (const auto acc:accounts){
    std::cout << *acc << std::endl;
  }
  std::cout << "" << std::endl;

}

void deposit(std::vector<Account *> & accounts, double amount){
  std::cout << "Account (deposit) $" << amount << std::endl;
  for (auto acc:accounts){
    std::cout << (acc->deposit(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

void withdraw(std::vector<Account *> & accounts, double amount){
  std::cout << "Account (withdraw) $" << amount << std::endl;
  for (auto acc:accounts){
    std::cout << (acc->withdraw(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

