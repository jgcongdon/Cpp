#include <iostream>
#include <cstring>
using namespace std;

void MakeSentenceExcited(char* sentenceText) {

   /* Your solution goes here  */
   int i = 0;
   
   while(sentenceText[i] != '\0') {
      if(sentenceText[i] == '.')
         sentenceText[i] = '!';
         ++i;
   }
   /* Your solution ends here  */
      


   
}

int main() {
   const int TEST_STR_SIZE = 50;
   char testStr[TEST_STR_SIZE];

   strcpy(testStr, "Hello. I'm Miley. Nice to meet you.");
   MakeSentenceExcited(testStr);
   cout << testStr << endl;

   return 0;
}
