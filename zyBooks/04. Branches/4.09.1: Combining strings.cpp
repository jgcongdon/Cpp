#include <iostream>
#include <string>
using namespace std;

int main() {
   string secretID = "Barry";
   string lastName = "Allen";
   char spaceChar = ' ';

   /* Your solution goes here  */
   secretID.push_back(' ');
   secretID.append(lastName);
   /* Your solution ends here  */

   cout << secretID << endl;
   return 0;
}
