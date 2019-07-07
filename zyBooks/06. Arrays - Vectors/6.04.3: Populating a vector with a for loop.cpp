#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_GUESSES = 3;
   vector<int> userGuesses(NUM_GUESSES);
   int i = 0;

   /* Your solution goes here  */
   for (i = 0; i < userGuesses.size(); i++) {
      cin >> userGuesses.at(i);
   }
   /* Your solution ends here  */

   for (i = 0; i < NUM_GUESSES; ++i) {
      cout << userGuesses.at(i) << " ";
   }

   return 0;
}
