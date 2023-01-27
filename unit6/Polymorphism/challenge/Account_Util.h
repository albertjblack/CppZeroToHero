#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H



#include <vector>
#include "Account.h"

// Account

void display(const std::vector<Account *> & accounts);
void deposit(std::vector<Account *> & accounts, double amount);
void withdraw(std::vector<Account *> & accounts, double amount);


#endif