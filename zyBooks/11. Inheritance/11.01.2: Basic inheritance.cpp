#include <iostream>
#include <string>
using namespace std;

class PersonData {
public:
   void SetName(string userName) {
      lastName  = userName;
   };
   void SetAge(int numYears) {
      ageYears = numYears;
   };
   // Other parts omitted

   void PrintAll() {
      cout << "Name: " << lastName;
      cout << ", Age: "  << ageYears;
   };

private:
   int    ageYears;
   string lastName;
};

class StudentData: public PersonData {
public:
   void SetID(int studentId) {
      idNum = studentId;
   };
   int GetID() {
      return idNum;
   };

private:
   int idNum;
};

int main() {
   StudentData courseStudent;

   /* Your solution goes here  */
   courseStudent.SetName("Smith");
   courseStudent.SetAge(20);
   courseStudent.SetID(9999);
   
   courseStudent.PrintAll();
   cout << ", ID: " << "9999" << endl;
   /* Your solution ends here  */
   
   return 0;
}
