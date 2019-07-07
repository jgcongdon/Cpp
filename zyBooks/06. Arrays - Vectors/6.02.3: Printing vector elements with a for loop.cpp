#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> courseGrades(NUM_VALS);
   int i = 0;

   courseGrades.at(0) = 7;
   courseGrades.at(1) = 9;
   courseGrades.at(2) = 11;
   courseGrades.at(3) = 10;

   /* Your solution goes here  */
   for(i = 0; i < NUM_VALS; i++){
		cout << courseGrades.at(i) << " ";
	}
	cout << endl;

	for(i = NUM_VALS-1; i >= 0; i--){
		cout << courseGrades.at(i) << " ";
	}
cout << endl;
   /* Your solution ends here  */

   return 0;
}
