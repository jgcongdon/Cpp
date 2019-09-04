#include <iostream>
using namespace std;

int main() {
   int* numItemsPtr = nullptr;
   int numItems = 99;

   /* Your solution goes here  */
   numItemsPtr = &numItems;
   
   cout << "Items: " << *numItemsPtr << endl;
   /* Your solution ends here  */

   return 0;
}
