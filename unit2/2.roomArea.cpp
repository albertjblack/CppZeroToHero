/* This program will calculate the area of a room in square feet */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[]){
 
 int room_width {0};
 cout << "Enter the width of the room:" << endl;
 cin >> room_width;

 int room_length {0};
 cout << "Enter the length of the room:" << endl;
 cin >> room_length;

 cout << "The area of the room is " << room_length * room_width << " sft." << endl;
 return 0;
 

}
