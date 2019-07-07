#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> countDown(0);
   int newSize = 0;
   int i = 0;

   newSize = 3;

   /* Your solution goes here  */
   countDown.resize(newSize);
   
   for (i=0; i < newSize; i++) {
		countDown.at(i) = newSize - i;
   }
   /* Your solution ends here  */

   for (i = 0; i < newSize; ++i) {
      cout << countDown.at(i) << " ";
   }
   cout << "Go!" << endl;

   return 0;
}
