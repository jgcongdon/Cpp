#include <iostream>
using namespace std;

class CarCounter {
   public:
      CarCounter();
      ~CarCounter();
   private:
      int carCount;
};

CarCounter::CarCounter() {
   carCount = 0;
   return;
}

/* Your solution goes here  */
CarCounter::~CarCounter() {
   cout << "Destroying CarCounter" << endl;
}
/* Your solution ends here  */

int main() {
   CarCounter* parkingLot = new CarCounter();
   delete parkingLot;

   return 0;
}
