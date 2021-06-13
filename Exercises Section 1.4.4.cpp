/*
Excercise 1.18: 
Write a program that prompts the user for two numbers and writes each number in the range specified by the two numbers to be standard output.
*/

#include <iostream>

int main(){
  int x = 0 , y = 0;
  std::cout<<"Enter two values: " << std::endl;
  std::cin>>x >> y;
  int current = std::min(x,y);
  int max = std::max(x,y) ;
  while (current <= max){
    
    std::cout<<"The number between " << x << " and " << y << " is " << current << std::endl;
    ++current;
  }
  
  return 0;
}


/*Exercise 1.19:
What happens if you give the numbers 1000 and 2000 to the program written for the previous exercise?Revise the program so that it never prints more than 10 numbers per line.
Reference: http://www.cplusplus.com/forum/beginner/193660/
*/

#include <iostream>

int main ()
{
   std::cout << "How many numbers per line would you like? ";
   int x;
   std::cin >> x;

   for(int i = 1000; i <= 2000; i++ )
   {
      std::cout << i << ' ';
      
      if (i % x == 0)
      {
         std::cout << '\n';
      }
   }
}

/*Exercise 1.20:
Write a program to sum the numbers in a users-specified range, omitting the if test that sets the upper and lower bounds. Predict what happens if the input is the numbers 7 and 3, in that order. Now run the program giving it the numbers 7 and 3, and see if the results match your expectation. If not, restudy the discussion on the for and while loop until you understand what happened.
*/