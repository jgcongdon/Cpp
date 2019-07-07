#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> origList(NUM_VALS);
   vector<int> offsetAmount(NUM_VALS);
   int i = 0;

   origList.at(0) = 40;
   origList.at(1) = 50;
   origList.at(2) = 60;
   origList.at(3) = 70;

   offsetAmount.at(0) = 5;
   offsetAmount.at(1) = 7;
   offsetAmount.at(2) = 3;
   offsetAmount.at(3) = 0;

   /* Your solution goes here  */
   for (i = 0; i < origList.size(); i++) {
      origList.at(i) = origList.at(i) + offsetAmount.at(i);
      cout << origList.at(i) << " ";
   }
   /* Your solution ends here  */

   cout << endl;

   return 0;
}
