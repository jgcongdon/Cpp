#include <vector>
using namespace std;

int main() {
   vector<int> runTimes(5);

   // Populate vector
   runTimes.at(0) = 800;
   runTimes.at(1) = 775;
   runTimes.at(2) = 790;
   runTimes.at(3) = 805;
   runTimes.at(4) = 808;

   /* Your solution goes here  */
   cout << runTimes.at(0) << endl;
   cout << runTimes.at(1) << endl;
   cout << runTimes.at(2) << endl;
   /* Your solution ends here  */

   return 0;
}
