#include <cstring>
#include "MyString.h"


MyString::MyString() : str{nullptr} {
  str = new char[1];
  str[0] = '\0';
}

MyString::MyString(const char * s) : str{nullptr} {
  if (s == nullptr){
    str = new char[1];
    str[0] = '\0';
  } else {
   str = new char[strlen(s)+1]; 
   strcpy(str,s);
  }
}

MyString::MyString(const MyString & src) : str{nullptr}{
  str = new char[strlen(src.str)+1];
  strcpy(str,src.str);
}

MyString::MyString(MyString && src) : str{src.str}{
  src.str = nullptr;
}

MyString::~MyString(){
  delete [] str;
}

void MyString::display() const{
  printf("<MyString | str:%s, len:%d>",str,static_cast<int>(strlen(str)));
}
