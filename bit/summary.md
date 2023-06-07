# Bit Manipulation

## Basic Pattern
### hint:
* extra each bit to 0/1
### key:
* while loop (keep extracting as long as x != 0)
* for each iteration, each bit = x & 1 
* retrive bit from smallest to largest
* "|" = XOR, & = AND, || = OR
* at the end of the iteation, to x >>= 1 to fetch the next bit
### problems:
  * min flips