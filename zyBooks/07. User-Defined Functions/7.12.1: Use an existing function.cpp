#include <iostream>
#include <string>
using namespace std;

void GetUserInfo(int& userAge, string& userName) {
   cout << "Enter your age: " << endl;
   cin >> userAge;
   cout << "Enter your name: " << endl;
   cin >> userName;
   return;
}

int main() {
   int userAge = 0;
   string userName = "";

   /* Your solution goes here  */
   GetUserInfo(userAge, userName);
   /* Your solution ends here  */

   cout << userName << " is " << userAge << " years old." << endl;

   return 0;
}
