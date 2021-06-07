/*
The use of a variale like val to control a loop happens so often that the language defines a second control structure, called a "for statement", that abbreviates the code that manages the loop variable. We could rewrite the program to sum the numbers from 1 through 10 using a for loop as follows:
*/

#include <iostream>

int main()
{
  // Prior to for loop, we define sum, which we set to zero. The variable val is used only inside the iteration and is defined as part of the for statement itself.
  int sum = 0;
  // sum values from 1 up to 10 inclusive
  // The for statement has two parts: the for header and the for body.
  //The header controls how often the body si executed.
  //The header itself consists of three parts: an init-statement, a condition, and an expression
  for (int val = 1 ; val <= 10; ++val) //In this case, the init-statement: int val = 1; defines an int object named val and gives it an initial value of one. The iniit-statement is performed only once, on entry to the for.
  // The condition val <= 10 which compares the current value in val to 10, is tested each time through the loop. As long as val is less than or equal to 10, we execute the for body.
    sum += val ; // equivalent to sum = sum + val
  std::cout << "Sum of 1 to 10 inclusive is "
            << sum << std::endl;
  return 0;
}
/*
To recap, the overall execution flow of this for is:
1. Create val and initilize it to 1.
2. Test whether val is less than or equal to 10.
3. If val is less than or equal to 10, execute the for body, which adds val to sum. If val is not less than or equal to 10, then break out of the loop and continue execution with the first statement following the for body.
4. Increment val
5. Repeat the test in step2, continuing with the remaining steps as long as the condition is true.
*/