#include <iostream>
using namespace std;

int main() {
   enum AcceptedCoins {ADD_QUARTER, ADD_DIME, ADD_NICKEL, ADD_UNKNOWN};
   AcceptedCoins amountDeposited = ADD_UNKNOWN;

   int totalDeposit = 0;
   int usrInput = 0;

   cout << "Add coin: 0 (add 25), 1 (add 10), 2 (add 5).  ";
   cin >> usrInput;

   if (usrInput == ADD_QUARTER) {
      totalDeposit = totalDeposit + 25;
   }

   /* Your solution goes here  */
   else if (usrInput == ADD_DIME){
		totalDeposit = totalDeposit + 10;
	}

	else if (usrInput == ADD_NICKEL){
		totalDeposit = totalDeposit + 5;
}
   /* Your solution ends here  */

   else {
      cout << "Invalid coin selection." << endl;
   }

   cout << "totalDeposit: " << totalDeposit << endl;

   return 0;
}
