#include <iostream>

int main(){
 double favInt;
 printf("Enter your favorite number between 1 and 100\n");
 scanf("%lf",&favInt);
 printf("Awesome! %.2lf is a great number :)\n", favInt);
 return 0;
}