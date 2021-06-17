/*
Exercise 1.21:
The Web site (https://stackoverflow.com/questions/15859764/c-primer-exercises-involving-sales-item-h) contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Write a program that loops through a set of book sales transactions, reading each transaction and writing that transaction to the standard output. 
*/

#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
  for (Sales_item item; cin>> item; cout<< item<< endl);

  return 0;
}

/*
Exercise 1.22:
Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
*/

#include <iostream>
#include "Sales_item.h"

int main(){
  Sales_item item1 , item2;
  std::cin >> item1 >> item2;
  if (item1.isbn()== item2.isbn())
  {
    std::cout << item1 + item2 << std::endl;
  }
  else{

  
  std::cerr << "Input error: different ISBN.\n" ;
  }
return 0;
}

 /*
 Write a program that reads several transactions for the same ISBN. Write the sum of all the transaction that were read.
 */

 #include <iostream>
 #include "Sales_item.h"

 int main(){
   Sales_item total;
   if (std::cin >> total){
     Sales_item trans;
     while (std::cin >> trans)
     {
       if (total.isbn() == trans.isbn()){
         total += trans;
        
       }
       else {
         std::cout << total << std::endl;
         total = trans;
       }
     }
     std::cout << total << std::endl;

   }
   else
   {
     std::cerr << "Input Error" << std::endl;
     return -1;
   }
   return 0;
 }

