/*
We might use the numbers directly in our for loop, uising the first input as the lower bound for the range and the second 
as the upper bound. However, if the user gives us the higher number first, that strategy would fail: Our program would exit
for loop immediately. Instead, we should adjust the range so that the larger number is the upper bound and the smaller is the lower.
*/
#include <iostream>
int main()
{
  std::cout << "enter two numbers:" <<std::endl;
  int v1, v2;
  std::cin >> v1 >> v2; // read input
  // use smaller number as lower bound for summation
  // and larger number as upper bound
  int lower , upper ;
  if (v1 <= v2){
    lower = v1;
    upper = v2;
  }else {
    lower = v2;
    upper = v1;
  }
  int sum =0 ;
  // sum values from lower up to and including upper
  for (int val = lower ; val <= upper; ++val)
  sum += val; // sum = sum + val

  std::cout << "Sum of " << lower 
            << " to " << upper 
            << " inclusive is "
            << sum << std::endl;
  return 0;

}
/*
The effect of this code is to set upper and lower appropriately. The if condition tests whether v1 is less than or equal to v2. If so,
we perform the block that immediately follows the condition. This block contains two statements, each of which does an 
assignment. The first statement assigns v1 to lower and the second assigns v2 to upper.
If the condition is false--that is, if v1 is larger than v2--then we execute the statement following the else. Again, this statement is block consisting of two assignments. We assign v2 to lower and v1 to upper. 
*/
