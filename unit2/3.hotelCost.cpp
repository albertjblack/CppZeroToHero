#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[]){
 cout << "Welcome to the Gatsby Hotel! ($USD)" << endl;

 short small_room_qty {0};
 cout << "Enter the number of small rooms you want to rent: ";
 cin >> small_room_qty;

 short large_room_qty {0}; 
 cout << "Enter the number of large rooms you want to rent: ";
 cin >> large_room_qty;
 
 const short small_room_price = 25;
 const short large_room_price = 35;
 short subtotal = (small_room_price * small_room_qty) + (large_room_price * large_room_qty);
 
 cout << "Order\n";
 cout << "Small rooms: " << small_room_qty << endl;
 cout << "Large rooms: " << large_room_qty << endl;
 
 cout << "Room prices: $" 
   << small_room_price << " per small room | $" 
   << large_room_price << " per large room." << endl;

 const short validity_days = 30;
 const float sales_tax_decimal = 0.06;
 cout << "Subtotal: $" << subtotal << endl;
 cout << "6% Tax: $" << subtotal * sales_tax_decimal << endl;
 
 cout << "=======================" << endl;
 cout << "Total: $" << subtotal * (1+sales_tax_decimal) << endl;
 cout << "This estimate is valid for " << validity_days << " days" << endl;

 return 0;
}

