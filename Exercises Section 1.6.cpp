// /*
// Exercise 1.25:
// Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section
// */

// #include <iostream>
// #include "Sales_item.h"

// int main(){
//   Sales_item item1, item2;
//   std::cin >> item1 >> item2;
//   if (item1.isbn()==item2.isbn()){
//     std::cout<< item1 + item2 << std::endl;
//   }
//   else{
//     std::cerr << "Input error: different ISBN.\n";
//   }
//   return 0;

// }

// /*
// Exercise 1.26:
// In the bookstore program we used the addition operator and not the compound assignment operatorto add trans
// to total. Why didn't we use the compound assignment operator?
// */

#include <iostream>
#include "Sales_item.h"

int main(){
  // declare variables to hold running sum and data for the next record 
  Sales_item total, trans;
  // is there data to process?
  if (std::cin >> total){
    // if so, read the transaction records
    while (std::cin >> trans)
    if (total.isbn() == trans.isbn())
    // match: update the running total
    // compound assignment operator
    total += trans;
    else{
      // no match: print & assign to total
      std::cout << total << std::endl;
      total = trans;
    }
    // remember to print last record 
    std::cout << total << std::endl;
       
   
  } else{
    // no input!, warn the user
    std::cout << "No data?!" << std::endl;
    return -1; // indicate failure
  }
  return 0;
}