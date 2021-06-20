/*
A while statement provides for iterative execution. We could use a while to write a program to sum the numbers from 1 through 10 inclusive
as follows:
*/

#include <iostream> // we begin by including the iostream header

int main() // We also define a main function
{
  //inside main we define two int variables: sum, which will hold our summation, 
  //and val, which will represent each of the values from 1 through 10
  int sum =0 , val = 1;
  //we give sum an initial value of zero and start val oof with the value one.
  //keep executing the while until val is greater than 10
  // the important part is the while statement.
  // A while has the form 
  /*
  while (condition) while_body_statement;
  */
  while (val <= 10){
    sum+= val; //assigns sum+val to sum
    ++val; // add 1 to val
  }
  // A while executes by (repeatedly) testing the condition and executing 
  //the associated while_body_statement until the condition is false
  std::cout << "Sum of 1 to 10 inclusive is "
            <<sum << std::endl;
  return 0;
}
