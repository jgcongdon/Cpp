#include <iostream>
#include <cstdlib>   // Enables use of rand()
using namespace std;

int main() {
   char keepGoing = '-';
   int nextBid = 0;

   srand(5);
   while (/* Your solution goes here  */ keepGoing != 'n' /* Your solution ends here  */) {
      nextBid = nextBid + (rand()%10 + 1);
      cout << "I'll bid $" << nextBid << "!" << endl;
      cout << "Continue bidding? (y/n) ";
      cin >> keepGoing;
   }
   cout << endl;

   return 0;
}
