#include "Account_Util.h"

using namespace std;

int main(int argc, char * argv[]){
  std::cout.precision(2);
  std::cout << std::fixed;

  Account *p1 = new Checking_Account("Larry", 10000);
  Account *p2 = new Savings_Account("Jarry", 100000,2.3);
  Account *p3 = new Trust_Account("Harry", 1000000, 2.5);
  
  vector<Account *> accs {p1, p2, p3};

  display(accs);
  withdraw(accs, 20000);
  deposit(accs, 899);

  display(accs);

  delete p1;
  delete p2;
  delete p3;

  return 0;
}