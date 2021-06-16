/*Reference 
https://stackoverflow.com/questions/15859764/c-primer-exercises-involving-sales-item-h
*/
#include <iostream>
#include "Sales_item.h"

int main(){
  Sales_item book;
  //read ISBN, number of copies sold, and sales price
  std::cin >> book;
  //write ISBN, number of copies sold, total revenue, and average price
  std::cout << book << std::endl;
  return 0;
// Input: 0-201-70353-x 4 24.99
// Output: 0-201-70353-x 4 99.96 24.99
}

/*Adding Sales_items
A slightly more interesting example adds Sales_item objects:
*/

// This program starts by including the Sales_item and iostream headers
#include <iostream>
#include "Sales_item.h"

int main(){

  // Next we define two Sales_item object to hold the two trasactions that we wish to sum
  Sales_item item1, item2;
  std::cin >> item1 >> item2; //read a pair of transactions
  /*
  addomg twp Sales_items together creates a new object whose ISBN is that of its operands and whose 
  number sold and revenue reflect the sum of the corresponding  values in its operands.
  */
  std::cout << item1 + item2 << std::endl;//print their sun
  return 0;
  // we're reading and printing the sum of two Sales_item objects

//input: 0-201-7835-x 3 20.00
//input: 0-201-7835-x 2 25.00
//output: 0-201-7835-x 5 110 22
}
