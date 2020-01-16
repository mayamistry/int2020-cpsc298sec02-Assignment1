/**
 * Cereal program
 * @return - displays console output of the cereal weight converted to metric regulations
 * and the number of boxes needed to yield the metric ton
 */
#include <iostream>
using namespace std;

int main (int argc, char **args) {

  double packageWeight;
  double boxes = 0;
  cout << "Enter a package weight in ounces: ";
  cin >> packageWeight; //take in the input of how much the package of cereal weighs in ounces

  const double METRIC_TON = 35273.92;
  packageWeight = packageWeight / METRIC_TON; //convert ounces to metric tons
  boxes = METRIC_TON / packageWeight; //number of boxes that yield one metric ton (double check with Jessie)

  //display the weight converted in metric tons and how many boxes needed to yield that weight
  cout << "Cereal weight in metric tons: " << packageWeight << endl;
  cout << "Number of boxes to yield one metric ton: " << boxes << endl;

  return 0;
}
