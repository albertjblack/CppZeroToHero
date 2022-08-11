// you have a message and you look at every char and replace it with a character in the ring .. substitution cipher
// 1. ask user to enter seceret message
// 2. encrypt with the subs cipher and display the encrypted message
// 3. then decrypt the encrypted message back to the original message
// you may use 2 strings for substitution, to enc replace at pos n from alph to n in key
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]){
 string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789! .,:;/"};
 string cipher   {"CGJLPSVXZABDEFHIKMNOQRTUWYcgjlpsvxzabdefhikmnoqrtuwy2563489710;. !/,:"};
 
 string plaintext {};
 cout << "Enter text to encrypt: (only letters, numbers, spaces, and these symbols [. , : ; / !]) ";
 getline(cin, plaintext);


 string ciphertext {};
 for (char c:plaintext){
  ciphertext += cipher.at(alphabet.find(c));
 }
 cout << "This is your ciphertext: " << ciphertext << endl;

 plaintext.clear();
 for (char c: ciphertext){
  plaintext += alphabet.at(cipher.find(c));
 }
 cout << "The previous ciphertext was derived from this plaintext: " << plaintext << endl; 

 return 0;
}