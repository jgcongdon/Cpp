#include <iostream>
using namespace std;

int main() {
   const int SCORES_SIZE = 4;
   int oldScores[SCORES_SIZE];
   int newScores[SCORES_SIZE];
   int i = 0;

   oldScores[0] = 10;
   oldScores[1] = 20;
   oldScores[2] = 30;
   oldScores[3] = 40;

   /* Your solution goes here  */
   
   for (i=0; i<SCORES_SIZE; i++){
      if (i<SCORES_SIZE-1){
         newScores[i] = oldScores[i+1];
      }
      else{
         newScores[i]=oldScores[0];
      }
   }
   
   /* Your solution ends here  */

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << newScores[i] << " ";
   }
   cout << endl;

   return 0;
}
