#include <iostream>
using namespace std;

int main() {
   enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};

   GroceryItem userItem = GR_APPLES;

   /* Your solution goes here  */
   switch (userItem) {
		case 0:
		cout << "Fruit" << endl;
		break;

		case 1:
		cout << "Fruit" << endl;
		break;

		case 2:
		cout << "Drink" << endl;
		break;

		case 3:
		cout << "Drink" << endl;
		break;

		default:
		cout << "Unknown" << endl;
}
   /* Your solution ends here  */

   return 0;
}
