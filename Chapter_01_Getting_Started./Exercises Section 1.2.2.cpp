// Exercise 1.3: Write a program to print "Hello, World" on the standard output.


#include <iostream>
using namespace std;

int main()
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}


// Exercise 1.4: Our program used the built-in addition operator, + , to generate the sum of two numbers. Write a program that uses the multiplication operator, * , to generate the product fo two numbers

#include <iostream>
using namespace std;

int main()
{
  double v1 = 5 , v2 =7;
  std:: cout << v1 * v2 << std::endl;
  return 0;
}

// Exercise 1.5:
// We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

#include <iostream>
using namespace std;

int main()
{
  std::cout << "Enter two numbers: " << std::endl;
  int v1 = 7 , v2 = 5 ;
  std::cin >> v1 >> v2;
  std:: cout << "The output of: ";
  std:: cout << v1; 
  std:: cout << " and ";
  std:: cout << v2;
  std:: cout << " is ";
  std:: cout << v1 * v2;
  std:: cout << std:: endl;
  return 0;
}

// Explain what the following program fragment does:

  std:: cout << "The sum of " << v1; // to print the result. It prints each of its operands to the standard output

            << " and " << v2;
            << "is " << v1 + v2
            << std:: endl;
 

// Is this code legal? If so, why? If not, why not
// Answer: It is Illegal because it is expected primary-expression before "<<" token.
// Fixed: Remove the spare semicolons.

 std:: cout << "The sum of " << v1 << " and " << v2 << "is " << v1 + v2 << std:: endl;
