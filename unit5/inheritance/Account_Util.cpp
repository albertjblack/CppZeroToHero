#include "Account_Util.h"


void display(const std::vector<Account> & accounts){
  std::cout << "Account" << std::endl;
  for (const Account & acc:accounts){
    std::cout << acc << std::endl;
  }
  std::cout << "" << std::endl;

}

void deposit(std::vector<Account> & accounts, double amount){
  std::cout << "Account (deposit) $" << amount << std::endl;
  for (Account & acc:accounts){
    std::cout << (acc.deposit(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

void withdraw(std::vector<Account> & accounts, double amount){
  std::cout << "Account (withdraw) $" << amount << std::endl;
  for (Account & acc:accounts){
    std::cout << (acc.withdraw(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

// Savings Account

void display(const std::vector<Savings_Account> & accounts){
  std::cout << "Savings_Account" << std::endl;
  for (const Savings_Account & acc:accounts){
    std::cout << acc << std::endl;
  }
  std::cout << "" << std::endl;

}

void deposit(std::vector<Savings_Account> & accounts, double amount){
  std::cout << " Savings_Account (deposit) $" << amount << std::endl;
  for (Savings_Account & acc:accounts){
    std::cout << (acc.deposit(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

void withdraw(std::vector<Savings_Account> & accounts, double amount){
  std::cout << "Savings_Account (withdraw) $" << amount << std::endl;
  for (Savings_Account & acc:accounts){
    std::cout << (acc.withdraw(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

// Checking Account

void display(const std::vector<Checking_Account> & accounts){
  std::cout << "Checking_Account" << std::endl;
  for (const Checking_Account & acc:accounts){
    std::cout << acc << std::endl;
  }
  std::cout << "" << std::endl;

}

void deposit(std::vector<Checking_Account> & accounts, double amount){
  std::cout << " Checking_Account (deposit) $" << amount << std::endl;
  for (Checking_Account & acc:accounts){
    std::cout << (acc.deposit(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

void withdraw(std::vector<Checking_Account> & accounts, double amount){
  std::cout << "Checking_Account (withdraw) $" << amount << std::endl;
  for (Checking_Account & acc:accounts){
    std::cout << (acc.withdraw(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

// Trust Account

void display(const std::vector<Trust_Account> & accounts){
  std::cout << "Trust_Account" << std::endl;
  for (const Trust_Account & acc:accounts){
    std::cout << acc << std::endl;
  }
  std::cout << "" << std::endl;

}

void deposit(std::vector<Trust_Account> & accounts, double amount){
  std::cout << " Trust_Account (deposit) $" << amount << std::endl;
  for (Trust_Account & acc:accounts){
    std::cout << (acc.deposit(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}

void withdraw(std::vector<Trust_Account> & accounts, double amount){
  std::cout << "Trust_Account (withdraw) $" << amount << std::endl;
  for (Trust_Account & acc:accounts){
    std::cout << (acc.withdraw(amount) ? "Success" : "Fail") << std::endl;
  }
  std::cout << "" << std::endl;

}
