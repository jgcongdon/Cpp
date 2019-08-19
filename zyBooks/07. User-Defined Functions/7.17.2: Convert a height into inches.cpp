#include <iostream>
using namespace std;

double ConvertToInches(double numFeet) {
   return numFeet * 12.0;
}

/* Your solution goes here  */

double ConvertToInches(double numFeet, double numInches) {
   numInches = (numFeet * 12) + numInches;   
   return numInches;
}

/* Your solution ends here  */

int main() {
   double totInches = 0.0;

   totInches = ConvertToInches(4.0, 6.0);
   cout << "4.0, 6.0 yields " << totInches << endl;

   totInches = ConvertToInches(5.9);
   cout << "5.9 yields " << totInches << endl;
   return 0;
}
