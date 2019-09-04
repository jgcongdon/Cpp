#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char movieTitle[100] = "The Lion King";
   char* movieResult = nullptr;

   /* Your solution goes here  */
   movieResult = strstr(movieTitle, "The");
   /* Your solution ends here  */

   cout << "Movie title contains The? ";
   if (movieResult != nullptr) {
      cout << "Yes." << endl;
   }
   else {
      cout << "No." << endl;
   }

   return 0;
}
