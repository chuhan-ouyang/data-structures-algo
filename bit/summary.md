# Bit Manipulation

## Basic Pattern
### hint:
* extra each bit to 0/1
### key:
* while loop (keep extracting as long as x != 0)
* for each iteration, each bit = x & 1 
* retrive bit from smallest to largest
* "|" = OR, & = AND, ^ = XOR
* at the end of the iteation, to x >>= 1 to fetch the next bit
### problems:
  * min flips

## Ops:
* The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
* The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
* The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
* The << (left shift) in C or C++ takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift. 
* The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. 
* The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it.