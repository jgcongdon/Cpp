#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int SCORES_SIZE = 4;
   vector<int> lowerScores(SCORES_SIZE);
   int i;

   lowerScores.at(0) = 5;
   lowerScores.at(1) = 0;
   lowerScores.at(2) = 2;
   lowerScores.at(3) = -3;

   /* Your solution goes here  */
   for (i=0; i < SCORES_SIZE; i++) {
      if (lowerScores.at(i) > 0) {
         lowerScores.at(i) = lowerScores.at(i) - 1;
      }
      else if (lowerScores.at(i) < 0) {
         lowerScores.at(i) = 0;
      }
   }
   /* Your solution ends here  */

   for (i = 0; i < lowerScores.size(); ++i) {
      cout << lowerScores.at(i) << " ";
   }
   cout << endl;

   return 0;
}
