#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int SIZE_LIST = 4;
   vector<int> keysList(SIZE_LIST);
   vector<int> itemsList(SIZE_LIST);
   int i = 0;

   keysList.at(0) = 42;
   keysList.at(1) = 105;
   keysList.at(2) = 101;
   keysList.at(3) = 100;

   itemsList.at(0) = 10;
   itemsList.at(1) = 20;
   itemsList.at(2) = 30;
   itemsList.at(3) = 40;

   /* Your solution goes here  */
   for (i=0; i < SIZE_LIST; i++) {
      if (keysList.at(i) > 100) {
         cout << itemsList.at(i) << " ";
      }
   }
   /* Your solution ends here  */

   cout << endl;

   return 0;
}
