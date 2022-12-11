#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include "utils.h"

class MyString{
  friend std::ostream & operator<<(std::ostream &lhs, const MyString &rhs);
  friend std::istream & operator>>(std::istream &lhs, MyString &rhs);

  private:
    char * str;
  
  public:
    MyString();
    MyString(const char * s);
    MyString(const MyString & src);
    MyString(MyString && src);
    ~MyString();

    MyString & operator=(const MyString & rhs);
    MyString & operator=(MyString && rhs);
    
    void display() const;
    int get_length() const;
    const char * get_str() const;

};

#endif