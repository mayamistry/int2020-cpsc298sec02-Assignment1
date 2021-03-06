/**
 * Inflation program
 * @return - takes in the cost of item and the number of years of waiting before
 * it's purhcased to calculate an inflated price of the item
 */
#include <iostream>
using namespace std;

int main (int argc, char **args) {
  //takes of the cost of item at present time with the number of years
  float costOfItem;
  cout << "Enter the cost of an item today: $";
  cin >> costOfItem;
  int numYears;
  cout << "Enter the number of years: ";
  cin >>  numYears;
  float inflationRate;
  //take in the inflation rate in percent and conver to a decimal value
  cout << "Enter an inflation rate as a percentage value: ";
  cin >> inflationRate;
  inflationRate = inflationRate / 100;

  /**
   * For loop used to keep changing the price each year based off of the inflation rate
   * @param i - the year count
   */
  for (int i = 1; i <= numYears; ++i) {
    costOfItem = costOfItem + (costOfItem * inflationRate);
  }

  //Display final output of the estimated cost after the number of years of waiting
  cout << "Inflated price after " << numYears << " years: " << costOfItem << endl;

  return 0;
}
