#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int SCORES_SIZE = 4;
   vector<int> oldScores(SCORES_SIZE);
   vector<int> newScores(SCORES_SIZE);
   int i = 0;

   oldScores.at(0) = 10;
   oldScores.at(1) = 20;
   oldScores.at(2) = 30;
   oldScores.at(3) = 40;

   /* Your solution goes here  */
   for(i = 0; i < SCORES_SIZE; i++){
		if(i > 0){
			newScores.at(i-1) = oldScores.at(i);
		}
		else{
			newScores.at(SCORES_SIZE - 1) = oldScores.at(i);
		}
}
   /* Your solution ends here  */

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << newScores.at(i) << " ";
   }
   cout << endl;

   return 0;
}
