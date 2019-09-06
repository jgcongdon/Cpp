#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   string userItem;
   ostringstream itemsOSS;

   cout << "Enter items (type Exit to quit):" << endl;
   cin >> userItem;

   while (userItem != "Exit") {

      /* Your solution goes here  */
      itemsOSS << userItem << " ";
      /* Your solution ends here  */

      cin >> userItem;
   }

   cout << itemsOSS.str() << endl;

   return 0;
}
