#include <iostream>
#include <string>
using namespace std;

void PrintSalutation(string personName) {
   cout << "Hello, " << personName << endl;
   return;
}

// Define void  PrintSalutation(string personName, string customSalutation)...

/* Your solution goes here  */

void PrintSalutation(string personName, string customSalutation) {
   cout << customSalutation << ", " << personName << endl;
   return;
}

/* Your solution ends here  */

int main() {
   PrintSalutation("Holly", "Welcome");
   PrintSalutation("Sanjiv");

   return 0;
}
