/* 
Ask the user for
1. int for cents # assume it's >= 0
2. provide a table of conversion, 1dll, quarter, dime, nickel, penny to cents
..
1. ask for cents.
2. print out change results
** dollars: , quarters: , dimes: , nickels: , pennies: .
SOL.
1. Account
2. Upd Bal via mod for unnaccounted.
3. repeat
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
 int cents{}, dollars{}, quarters{}, dimes{}, nickels{}, balance{};
 cout << "Enter cents to exchange: ";
 cin >> cents;
 
  dollars = cents / 100;
  balance = cents % 100;

  quarters = balance / 25;
  balance %= 25;

  dimes = balance / 10;
  balance %= 10;

  nickels = balance/5;
  balance %= 5;

 printf(
  "Dollars: %d\nQuarters: %d\nDimes: %d\nNickels: %d\nPennies: %d\n", dollars, quarters, dimes, nickels, balance
 );
 return 0;
}