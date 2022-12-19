/* 

Section 14 - Opertator Overloading
-- Task: overload the following operators in the MyString class provided
--- Do this activity twice (member fx, non-member fx)

'-' unary minus: returns lowercase version of the string

'==' comparison: if two strings are equal
'!=' comparison: if two strings are not equal
'<' less than: returns if the lhs is lexically smaller than the rhs
'>' greater than: returns if the lhs is lexically greater than the rhs

'+' conatenation: self explanatory
'*' repeat: returns a string copied n times -> if s2 = "abc"; s1 = s2 * 3 => s1 => "abcabcabc"
'+=' equivalent to s1 = s1 + s2 // return a ref -> no extra copies
'*=' equivalent to -> if s1 "abc" and s1 *=4 -> s1 = "abc" 5 times // return a ref -> no extra copies

'++' pre and post increment // pre returns by reference and has no parameter -> return *this // all char upper case // pre makes first, then assigns
'--' pre and post decrement // post returns by value and has an int parameter -> return tmp // all char lower case

'<<' insertion
'>>' extraction

# the pre increment {do whatever you need; return *this}
# the post increment {M tmp {*thi}; operator++(); return tmp;}

*/

int main(int argc, char * argv[]){
  return 0;
}

