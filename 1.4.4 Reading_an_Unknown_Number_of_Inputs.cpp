/*In this case we cannot know how many numbers  we'll be asked to add. 
Instead, we want to keep reading numbers until the program reaches the end of the input. When the input finished, the program writes the total to the standard output:
*/

#include <iostream> 
// The first line inside main defines two int variables, named sum and value
int main(){
  //We'll use valuie to hold each number we read, which we do inside the condition in the while
    int sum = 0 , value ;
    std::cout << "Enter values: " << std::endl;
    //read till end-of-file, calculating a running total of all values read 
    while(std::cin>> value) 
    /*what happen here is that to evaluate the condition, the input operation is executed, which has the effect of reading the next number from the standard input,
    storing what was read in value.
    The input operator returns its left operand. The condition tests that result, meaning it tests
    std::cin.*/
      sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
