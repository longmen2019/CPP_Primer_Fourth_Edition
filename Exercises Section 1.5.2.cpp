// http://www.cplusplus.com/forum/beginner/186645/
/*Write a program that reads several transactions. For each new transaction that you read, 
determine if it is the same ISBN as the previous transaction, keeping a count of how many transactions there are for
each ISBN. Test the program by giving multiple transactions. These transactions should represent multiple 
ISBNs but the records for each ISBN should be grouped together.*/

#include <iostream>
#include "Sales_item.h"

int main(){
  Sales_item currItem, sum; // created 2 objects of type Sales_item,
  // try to read a Sales_item object into the variable currItem
  // if succeed, execute the if body
  if (std::cin >> currItem){
    // we've successfully read a Sales_item object into currItem 
    int count = 1;
    // Our object is to count the number of Sales_item objects
    // That have the same ISBN so we create 
    // A variable called count.
    // We initialise count to 1 because we already have our first Sales_item object 
    while (std::cin >> sum){
      // Try to read a Sales_item object into the variable sum.
      // If succeed, execute the body of the while loop and try again
      {
        // We have successfully read a Sales_item object into currItem.
        // Now we have 2 Sales_item objects, in sum and currItem
        if (currItem.isbn() == sum.isbn()) {
        //compare the isbn of sum and currItem, execute the body of hte if block if they are the same
        // sum and currItem have the same isbn, so we increment count
        //That means the first time we pass through this loop we have
        // 2 books with the same isbn-each time through the loop
        // we will have count books with the same isbn after the next line .
        count++;
        }
        else{
            // the isbn are different. Since the books are grouped by isbn,
            //we can safely say we only have count number of books that have the same isbn as currentItem
            std::cout << currItem.isbn() <<" occurrs " << count << "times." << std::endl;
            currItem = sum;
            count = 1;
          }
        }
        std::cout << currItem << "occurs" << count << "times" << std::endl;
      }
    }
    return 0;
  }

