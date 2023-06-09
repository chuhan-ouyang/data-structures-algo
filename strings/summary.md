# Strings Notes

## Rewriting the String 
### hint: 
* return a modified string, that is possibly shorter
* don't want to creat enew string to save space
* you want to remove extra elements
* achieve O(n) time and O(1) space
### key:
* reverse
  * allow you to manipulate the string palce
  * no creating new string!
  * no need to use vector<char>!
  * can either use built-in reverse, which is [) range, or self write reverse that is [] range
  * can also reverse just a sub-segment!
### key:
  * allow you to shorten a string or longer a string
  * useful if you fill the first "k" elem of a string with useful content (for the result), and resizing the string will allow you to ditch the unused contents
### key:
  * use helper functions to modify strings in place
    * void
    * string& s as arg
    * modify s in place
### key:
  * reverse string 2
  * reverse words