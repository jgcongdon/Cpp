#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> oldData(3);
   vector<int> newData(4);
   unsigned int i = 0;

   oldData.at(0) = 10;
   oldData.at(1) = 12;
   oldData.at(2) = 18;

   newData.at(0) = 25;
   newData.at(1) = 27;
   newData.at(2) = 29;
   newData.at(3) = 23;

   /* Your solution goes here  */
   oldData.resize(newData.size());
   
   int match = 0;
   
   for (i = 0; i < oldData.size(); ++i) {
      if (oldData.at(i) == newData.at(i)) {
         ++match;
      }
      else {
         oldData.at(i) = newData.at(i);
      }
   }
   
   if (match == newData.size()) {
      cout << "Data matches!" << endl;
   }
   /* Your solution ends here  */

   for (i = 0; i < oldData.size(); ++i) {
      cout << oldData.at(i) << " ";
   }
   cout << endl;

   return 0;

}
