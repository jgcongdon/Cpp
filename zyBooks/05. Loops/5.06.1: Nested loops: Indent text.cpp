#include <iostream>
using namespace std;

int main() {
   int userNum  = 0;
   int i = 0;
   int j = 0;

   /* Your solution goes here  */
   cin>> userNum;
   
   for (i = 0; i <= userNum; ++i) {
      for (j = 0; j < i; ++j) {
         cout << " ";
      }
   cout << i << endl;
   }
   /* Your solution ends here  */

   return 0;
}
