#include <iostream> // the first line is a preprocessor directive

int main(){
  // the program starts by printing on the user's screen and then waits for input from the user.
  // if the user enters
  std::cout << "Enter two numbers: " << std::endl;
  int v1, v2;
  std::cin >> v1 >> v2;
  // followed by a newline, then the program produces the following output:
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2<< std::endl;
  return 0;
}