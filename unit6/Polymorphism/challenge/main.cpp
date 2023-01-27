#include "Account_Util.h"

using namespace std;

int main(int argc, char * argv[]){
  std::cout.precision(2);
  std::cout << std::fixed;

  // account
  // vector<Account> accounts; 
  // accounts.push_back(Account{});
  // accounts.push_back(Account{"Pepe",110});
  // accounts.push_back(Account{"Fer", 110});
  // accounts.push_back(Account{"Chema", 50});

  // display(accounts);
  // deposit(accounts,1.68);
  // withdraw(accounts,2.0);
  // display(accounts);


  Account *ptr = new Trust_Account("Leo", 500000000000000, 2.710);
  std::cout << *ptr << std::endl;
  // ^^ this will say Account and not Trust_Account 

  std::cout << std::endl;
  std::cout << std::endl;

  // savings
  vector<Savings_Account> savings_accounts;
  savings_accounts.push_back(Savings_Account{}); 
  savings_accounts.push_back(Savings_Account{"Pepe", 210}); 
  savings_accounts.push_back(Savings_Account{"Fer", 210});
  savings_accounts.push_back(Savings_Account{"Chema", 205});

  display(savings_accounts);
  deposit(savings_accounts,1.68);
  withdraw(savings_accounts,2.0);
  display(savings_accounts);

  // checking
  vector<Checking_Account> checking_accounts;
  checking_accounts.push_back(Checking_Account{}); 
  checking_accounts.push_back(Checking_Account{"Pepe", 210}); 
  checking_accounts.push_back(Checking_Account{"Fer", 210});
  checking_accounts.push_back(Checking_Account{"Chema", 205});

  display(checking_accounts);
  deposit(checking_accounts,1.68);
  withdraw(checking_accounts,2.0);
  display(checking_accounts);

  // trust
  vector<Trust_Account> trust_accounts;
  trust_accounts.push_back(Trust_Account{}); 
  trust_accounts.push_back(Trust_Account{"Pepe", 210}); 
  trust_accounts.push_back(Trust_Account{"Fer", 210});
  trust_accounts.push_back(Trust_Account{"Chema", 205});

  display(trust_accounts);
  deposit(trust_accounts,50000);
  withdraw(trust_accounts,2.0);
  withdraw(trust_accounts,2.0);
  withdraw(trust_accounts,2.0);
  withdraw(trust_accounts,2.0);
  display(trust_accounts);

  return 0;
}