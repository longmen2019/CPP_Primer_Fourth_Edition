/*https://gist.github.com/pro-grammr/68a4cd992f8f8f08a3e9*/

#include <iostream>
#include "Sales_item.h"

int main(void)
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // first check that item1 and item2 represent the same book
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;  // indicate success
    } else {
        std::cerr << "Data must refer to same ISBN"
                  << std::endl;
        return -1;  // indicate failure
    }
}

// input: 0-201-7835-x 3 20.00
// input: 0-201-7835-x 3 20.00
// output: 0-201-7835-x 6 120 20
/*The dot operator fetches its right-hand operand from its left. The dot operator fetches its right-hand operand from its left. The dot operator applies only to objects of class type: The left-hand operand must be an object of class type; the right-hand operand must name a member of that type.*/