#include <iostream>
using namespace std;

/* Your solution goes here  */

int NumberOfPennies(int dollars, int pennies = 0)
{
    int totalPennies = 0;
    totalPennies = (dollars * 100) + pennies;
    return totalPennies;
}

/* Your solution ends here  */

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}
