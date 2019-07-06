#include <iostream>
#include <string>
using namespace std;

int main() {
   string secondVerse;
   string userName;

   secondVerse = "Banana-fana fo-f(Name)!";
   userName = "Katie";

   // Remove first character from userName
   userName = userName.substr(1, userName.length() - 1);

   /* Your solution goes here  */
   secondVerse.replace(16, 6, userName);
   /* Your solution ends here  */

   cout << secondVerse << endl;

   return 0;
}
