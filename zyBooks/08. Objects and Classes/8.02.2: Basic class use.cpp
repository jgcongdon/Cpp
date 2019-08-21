#include <iostream>
using namespace std;

class PersonInfo {
   public:
      void   SetNumKids(int personsKids);
      void   IncNumKids();
      int    GetNumKids() const;
   private:
      int    numKids;
};

void PersonInfo::SetNumKids(int personsKids) {
   numKids = personsKids;
   return;
}

void PersonInfo::IncNumKids() {
   numKids = numKids + 1;
   return;
}

int PersonInfo::GetNumKids() const {
   return numKids;
}

int main() {
   PersonInfo person1;

   person1.SetNumKids(3);

   /* Your solution goes here  */
   
   cout << "Kids: " << person1.GetNumKids() << endl;
   person1.IncNumKids();
   cout << "New baby, kids now: " << person1.GetNumKids() << endl;
   
   /* Your solution ends here  */

   return 0;
}
