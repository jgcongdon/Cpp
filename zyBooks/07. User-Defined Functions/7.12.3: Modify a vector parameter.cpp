#include <iostream>
#include <vector>
using namespace std;

/* Your solution goes here  */
void SwapVectorEnds(vector<int>& sortVector){
	int i = 0;
	int tempVal = sortVector.at(0);
	
	tempVal = sortVector.at(i);
	sortVector.at(i) = sortVector.at(sortVector.size() - 1);
	sortVector.at(sortVector.size() - 1) = tempVal;
	}
/* Your solution ends here  */
   

int main() {
   vector<int> sortVector(4);
   int i = 0;

   sortVector.at(0) = 10;
   sortVector.at(1) = 20;
   sortVector.at(2) = 30;
   sortVector.at(3) = 40;

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}
