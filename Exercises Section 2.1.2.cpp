/*
Refernece :   
Exercise 2.1: What is the difference between an int, a long, and a short value?

Answer: The type short, int, and long represent integer values of potentially different sizes. Typically, shorts are represented in half a machine word, ints in a machine word, and longs in either one or two machine words (on 32 bit machines ints and longs are usually the same size). 
Type : Int
Meaning : integer
Minimum size: 16 bits 
Type: long
Meaning : long integer
Minimum size : 32 bits 
Type: short
Meaning : short integer 
Minimum size : 16 bits 
*/

/*
Exercise 2.2: 
What is the difference between an unassigned and a signed type? 
Answer: The integral types, except the boolean type, may be either signed or unsigned. As it name suggests, a signed type can represent both negative and positive numbers (including zero), whereas an unsigned type represents only values greater than or equal to zero.

The integers, int, short, and long are all signed by default. To get an unsigned type, the type must be specified by default. To get an unsigned type, the type must be specified as unsigned, such as unsighed long. The unsighed int type may be abbreviated as unsigned. That is, unsigned with no other type implies unsigned int. 
*/

/*
Exercise 2.3:
If a short on a given machine has 16 bits then what is the largest number that can be assigned to a short? To an unassigned short?
Answer: Since 15 bytes are used to represent a short, with the 16th bit used for the sign, the largest number it can represent is 2^15 - 1 = 32,767. For an unsigned short, all 16 bits are used to represent the value, so the largest representable number is 2^16 -1 = 65,535.
*/

/*
Exercise 2.4: What value is assigned if we assign 100,000 to a 16 bit unassigned short? What value is assigned if we assign 100,000 to a plain 16-bit short?

If we assign 100,000 to an unsigned short, then the value that will be stored is 100,000 modulo 2^16, or , equivalently, the binary number represented by tye least significat 16 bits of 100,000, which is 100,000-65,536 = 34,464. On the other hand, the value that would be assigned to a signed short is compiler-dependent. The compiler included with MDS assigns the value -31,072. Thi is the value obtained by taking the least significant 16 bits of 100,000 and interpreting them as a signed short. This causes the most significant bit to be interpreted as the sign bit. 
*/

/*
Exercise 2.5: What is the difference between a float and a double?
A float must occupy at least 4 bytes, while a double must occupy at least 8. This allows a double to represent numbers of much greater magnitude, and with much greate precision.
*/

/*
Exercise 2.6: To calcuate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.
Answer: a reasonable choice is to use a double for all of these values. Certainly an integral type is not appropriate, because none of these values are normally integers. A float coud be used, but thre is little reason to give up precision of a double, considering that floating-point arithmetic is typically performed in double precision anyway.
*/
