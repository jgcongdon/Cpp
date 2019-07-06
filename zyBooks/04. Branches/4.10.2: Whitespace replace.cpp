#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string passCode;

   passCode = "1 ";

   /* Your solution goes here  */
   if (isspace(passCode.at(0))){
    passCode.replace(0, 1, "_");
}
   if (isspace(passCode.at(1))){
    passCode.replace(1, 1, "_");
}
   /* Your solution ends here  */

   cout << passCode << endl;
   return 0;
}
