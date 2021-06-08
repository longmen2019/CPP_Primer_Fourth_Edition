
  /*Exercise 1.9*/
  /*What does the following for loop do? What is the final value of sum? */
  int sum = 0;
  for (int i = -100 ; i <=100 ; ++i)
  sum +=i;
 /*Answer: The following for loop is summing from -100 to 100. The final value of the sum is 0*/
 
/*Exercise 1.10:
Write a program that uses a for loop to sum the numbers from 50 to 100.
*/

#include <iostream>
using namespace std;

int main()
{
  //Prior to the for loop, we define sum, which we set to zero
  int sum = 0;
  //The variable i used only inside the iteration and is defined as part of the for statement itself.
  //Create i and initalize it to 50.
  //Test whether i is less than or equal to 100
  //If i is less than or equal to 100, execute the for body, which adds i to sum. If i is not less than or equal to 100, then break out of the loop and continue execution with the first statement following the for body
  for (int i = 50 ; i <= 100; ++i)
  //Increment i 
  sum += i;
  //Repeat the test in step 2, continuing with the remaining steps as long as the condition is true 
  std::cout<< "Sum of 1 to 100 inclusive is: " <<sum << std::endl;
  return 0;
}

/*
Now rewrite the program using a while
*/
#include <iostream>
using namespace std;

int main()
{
  int sum = 0 , i =50;
  // keep executing the while until i is greater than 100
  while (i <= 100)
  {
    sum += i; // assigns sum +i to sum
    ++i; // add 1 to i
  }
  std::cout<<"Sum of 50 to 100 inclusive is: " << sum<< std::endl;
  return 0;

}

/*Exercise 1.11
Write a program using a while loop to print the numbers from 10 down to 0.
*/

#include <iostream>
using namespace std;

int main(){
  int sum = 0, i = -10;
  while (i <=10){
    sum += i;
    ++i;
  }
  std::cout<<sum<<std::endl;
  return 0;

}
/* Now rewrite the program using a for.*/
#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  for (int i =-10 ; i <=10 ; ++i)
  sum += i;
  std::cout << sum << std::endl;

  return 0;
}

/*
Exercise 1.12: Compare and contrast the loops you wrote in the previous two exercises. Are there advantages or disadvantages to using either form?
*/

/*
Answer 1:
A while loop will always evaluate the condition first:
while (condition){
  //get executed after condition is checked
}

A for loops allows you to initiate a counter variable, a check condition, and a way to increment your counter all in one line.
for (int x = 0; x <100; x++){
  //executed until x >= 100
}

Answer 2: The main difference between the for's and the while's is a matter of pragmatics: we usually use for when there is a known number of iterations, and use while constructs when the number of iterations is not known in advance.
*/

/*Exercise 1.13: Compliers vary as to how easy it is to understand their diagnostics. Write programs that contains the common errors discussed in the box on 16. Study the messages the compiler generates so that these messages will be familiar when you encounter them while compiling more complex programs.
*/
// 1. Syntax Errors:
int main (){
  std::cout << "Hello World" << std::endl;
  return 0
} //error: missing ';' on return statement

//2. Type Errors:
int main (){
  char w = "Hello World!"; //error: here char should be std::string 
  std::cout << w<< endl;
  return 0;
}
//3. Declaration Errors:
#include <iostream>
int main(){
  int v1, v2;
  std::cin >> v >> v2; //error: uses "v" not "v1"
  //cout not defined, should be std::count 
  cout << v1 + v2 << std::endl;
  return 0;
}
