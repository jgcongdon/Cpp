#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;

   userInput = "That darn cat.";

   /* Your solution goes here  */
   string  explicitWord= "darn";
   
   int explicitFound = -1;
   explicitFound = userInput.find(explicitWord);
   
   if (explicitFound >= 0) {
      cout << "Censored" << endl;
   }
      else{
      cout << userInput << endl;
   }
   /* Your solution ends here  */

   return 0;
}
