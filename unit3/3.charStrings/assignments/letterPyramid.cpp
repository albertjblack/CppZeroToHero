// In this assignment, you will display a Letter Pyramid given a string of characters. 
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string reverse_string(string input_string){
 string reversed_string {};
 for(size_t i{0}; i < input_string.length(); ++i){
  reversed_string += input_string.at(input_string.length()-i-1);
 }
 return reversed_string;
}

int main(int argc, char *argv[]){
 string user_input {}, reversed_input {}, temp {};
 cout << "Enter an alphanumeric string to build a pyramid from: ";
 getline(cin, user_input);
 reversed_input = reverse_string(user_input);
 size_t N = user_input.length();

 size_t total {1}, lim_idx {0};
 while(total <= 2 * N - 1){
  temp = user_input.substr(0,lim_idx+1) + reversed_input.substr(N-lim_idx,lim_idx);
  string spaces (N-lim_idx, ' ');
  cout << spaces << temp << endl;
  lim_idx += 1;
  total += 2;
 }


 return 0;
}