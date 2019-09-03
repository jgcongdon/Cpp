#include <iostream>
#include <vector>
using namespace std;

void PrintVectors(vector<int> numsList) {
   int i;
   for (i = 0; i < numsList.size(); ++i) {
      cout << numsList.at(i) << " ";
   }
   cout << endl;
}

int main() {
   vector<int> numsList;

   numsList.push_back(101);
   numsList.push_back(200);
   numsList.push_back(103);

   /* Your solution goes here  */
   numsList.erase(numsList.begin()+1);
   numsList.insert(numsList.begin()+0, 100);
   numsList.insert(numsList.begin()+2, 102);
   /* Your solution ends here  */

   PrintVectors(numsList);

   return 0;
}
