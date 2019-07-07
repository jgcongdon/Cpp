#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> mpgTracker(3);

   mpgTracker.at(0) = 17;
   mpgTracker.at(1) = 19;
   mpgTracker.at(2) = 20;

   /* Your solution goes here  */
   cout << "Last mpg reading: " << mpgTracker.back() << endl;
   /* Your solution ends here  */

   return 0;
}
