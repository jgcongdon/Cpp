#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   string userInput = "Jan 12 1992";
   istringstream inSS(userInput);
   string userMonth;
   int userDate = 0;
   int userYear = 0;

   /* Your solution goes here  */
   inSS >> userMonth >> userDate >> userYear;
   /* Your solution ends here  */
   

   cout << "Month: " << userMonth << endl
        << "Date: " << userDate << endl
        << "Year: " << userYear << endl;

   return 0;
}
