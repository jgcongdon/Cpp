#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int SCORES_SIZE = 4;
   vector<int> bonusScores(SCORES_SIZE);
   int i = 0;

   bonusScores.at(0) = 10;
   bonusScores.at(1) = 20;
   bonusScores.at(2) = 30;
   bonusScores.at(3) = 40;

   /* Your solution goes here  */
   for (i=0;i<SCORES_SIZE;++i) {
      if (i<SCORES_SIZE-1) {
         bonusScores.at(i) = bonusScores.at(i) + bonusScores.at(i+1);
      }
         }

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << bonusScores.at(i) << " ";
   }
   cout << endl;

   return 0;
}
