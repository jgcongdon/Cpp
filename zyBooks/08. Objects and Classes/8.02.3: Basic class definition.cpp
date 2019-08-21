#include <iostream>
using namespace std;

class DogLicense{
   public:
      void   SetYear(int yearRegistered);
      void   CreateLicenseNum(int customID);
      int    GetLicenseNum() const;
   private:
      int    licenseYear;
      int    licenseNum;
};

void DogLicense::SetYear(int yearRegistered) {
   licenseYear = yearRegistered;
   return;
}

// FIXME: Write CreateLicenseNum()

/* Your solution goes here  */
void DogLicense::CreateLicenseNum(int customID) {
   licenseNum = (100000 * customID) + licenseYear;
}
/* Your solution ends here  */

int DogLicense::GetLicenseNum() const {
   return licenseNum;
}

int main() {
   DogLicense dog1;

   dog1.SetYear(2014);
   dog1.CreateLicenseNum(777);
   cout << "Dog license: " << dog1.GetLicenseNum() << endl;

   return 0;
}
