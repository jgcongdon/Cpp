#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {

   /* Your solution goes here  */
   for (int i = 0; i < sentenceText.length(); i++) {
      if (sentenceText.at(i) == '.') {
         sentenceText.at(i) = '!';
      }
   }
   /* Your solution ends here  */         

}

int main() {
   string testStr;

   testStr = "Hello. I'm Miley. Nice to meet you.";
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}
