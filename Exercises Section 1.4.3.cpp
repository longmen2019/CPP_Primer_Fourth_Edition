/*Exercise 1.14:
What happens in the program presented in this section if the input values are equal?

Answer: If the input values are equal, it will print a line which show the count of the number you input.
*/

/*Exercise 1.15:
Compile and run the program from this section with two equal values as input. Compare the output to what you predicted in the previous exercise. Explain any discrepancy between what happened and what you predicted.*/


#include <iostream>
int main(){
  std::cout <<"Enter two numbers:" <<std::endl;
  int v1, v2;
  std::cin >> v1 >> v2;
  int sum = 0;
  for (int val = 10; val <=10; ++val)
  sum += val;
  std:: cout<< sum << std::endl;
  return 0;
  }

/* Exercise 1.16 
Write a program to print the larger of two inputs supplied by the user
*/

#include <iostream>

int main(){
int v1, v2;
std::cout << "Enter the first number: " <<std::endl;
std::cin >> v1 ;
std::cout << "Enter the second number: " <<std::endl;
std::cin>> v2;
if (v1 > v2){
  std::cout<< "First number " << v1 << " is the largest" << std::endl;
}
else{
  std::cout<< "Second number " << v2 << " is the largest" << std::endl;
}
return 0;

}

/*Exercise 1.17: Write a program to ask the user to enter a series of numbers. Print a message saying how many of the numbers are negative numbers.*/

#include <iostream>

int main(){
  int pos = 0 , neg = 0 , i ,zer = 0 , arr[10];
  std::cout << "Enter 10 numbers: " << std::endl;
  for (i = 0 ; i <10 ; i++)
    std::cin >> arr[i];
  for (i = 0; i <10 ; i++){
    if (arr[i] > 0)
      pos++;
    else if (arr[i]==0)
      zer++;
    
    else 
      neg++;
    }
  
  
std::cout <<"\n Frequency of Positive Numbers: " <<pos <<std::endl;
std::cout <<"\n Frequency of Zero: " << zer <<std::endl;
std::cout<< "\n Freqnuecy of Negative Number:" << neg << std::endl;
return 0;
}