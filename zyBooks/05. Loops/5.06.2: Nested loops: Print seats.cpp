#include <iostream>
using namespace std;

int main() {
   int numRows = 2;
   int numCols = 3;

   // Note: You'll need to declare more variables

   /* Your solution goes here  */
   int r = 0;
   char c = 0;
   
   for (r = 1; r <= numRows; r++) {
      for (c = 0; c < numCols; c++)
      cout << r << char('A' + c) << " ";
      }
   /* Your solution ends here  */

   cout << endl;

   return 0;
}
