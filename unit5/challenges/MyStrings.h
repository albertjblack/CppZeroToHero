#ifndef _MY_STRINGS_H_
#define _MY_STRINGS_H_

#include "MyString.h"

namespace member{

  class MyString2 : public MyString{
    public:
      MyString2 & operator-() const;
      MyString2 & operator+(const MyString2 & rhs) const;
      MyString2 & operator*(const int & rhs) const;
      MyString2 & operator=(const MyString2 & rhs);
      MyString2 & operator=(MyString2 && rhs);

      bool operator==(const MyString2 & rhs) const;
      bool operator!=(const MyString2 & rhs) const;
      bool operator<(const MyString2 & rhs) const;
      bool operator>(const MyString2 & rhs) const;

      MyString2 operator+=(const MyString2 & rhs);
      MyString2 operator*=(const int & rhs);



  };
  
}

namespace global{

  class MyString2 : public MyString{

  };

}

#endif