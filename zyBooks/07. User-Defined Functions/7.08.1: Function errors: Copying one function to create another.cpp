#include <iostream>
using namespace std;

double CelsiusToKelvin(double valueCelsius) {
   double valueKelvin = 0.0;

   valueKelvin = valueCelsius + 273.15;

   return valueKelvin;
}

/* Your solution goes here  */
double KelvinToCelsius(double valueKelvin) {
   double valueCelsius = 0.0;
   
   valueCelsius = valueKelvin - 273.15;
   
   return valueCelsius;
}
/* Your solution ends here  */

int main() {
   double valueC = 0.0;
   double valueK = 0.0;

   valueC = 10.0;
   cout << valueC << " C is " << CelsiusToKelvin(valueC) << " K" << endl;

   valueK = 283.15;
   cout << valueK << "  is " << KelvinToCelsius(valueK) << " C" << endl;

   return 0;
}
