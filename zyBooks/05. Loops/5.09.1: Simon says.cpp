#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore = 0;
   int i = 0;

   userScore = 0;
   simonPattern = "RRGBRYYBGY";
   userPattern  = "RRGBBRYBGY";

   /* Your solution goes here  */
   for(i = 0; i <= simonPattern.size(); i++){
		if(userPattern.at(i) != simonPattern.at(i)){
			break;
		}
		else{
			userScore++;
		}
   }
   /* Your solution ends here  */

   cout << "userScore: " << userScore << endl;

   return 0;
}
