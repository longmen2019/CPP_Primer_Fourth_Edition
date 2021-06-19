

/*Exercise 1.7:  Compile a program that has incorrectly nested omments*/

#include <iostream>
/*
* comment pairs /* */ cannot nest.
* "cannot nest" is considered source code,
* as is the rest of the program
*/
int main()
{
  return 0;
}

/*Exercise 1.8: Indicate which, if any, of the following output statements, are legal.
*/

#include <iostream>
using namespace std;

int main()
{
std::cout <<"/*";

std::cout <<"*/";

std::cout << /* "*/" */; //this output statement is illegal

return 0;

}
