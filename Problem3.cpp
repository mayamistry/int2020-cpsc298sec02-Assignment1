/**
 * Employee pay program
 * @return - takes in an employee's salary rate and hours and calculates all of the expenses
 * that apply to the gross salary to reach a net salary
 */
#include <iostream>
using namespace std;

int main (int argc, char **args) {
  //all of the rates given in the problem
  const int RATE = 16;
  const float SOCIAL_TAX = 0.06;
  const float FED_TAX = 0.14;
  const float STATE_TAX = 0.05;
  const int FED_INSURANCE = 10;
  int hours;
  float salary;
  float totalSalary;

  //inputs the number of hours the employee worked
  cin >> hours;
  //if over 40 hours, calculate the over time rate
  if (hours > 40) {
    //overtime pay
    int extraHours = hours - 40;
    salary = (extraHours * (RATE*1.5)) + (hours * RATE);
  } else {
    salary = (hours * RATE);
  }

  //print gross pay and show all expenses/taxes that apply in the net pay
  cout << "Gross pay: " << salary << endl;
  cout << "Social Security tax: " << (salary * SOCIAL_TAX) << endl;
  totalSalary = salary - (salary * SOCIAL_TAX);
  cout << "Federal Income tax: " << (salary * FED_TAX) << endl;
  totalSalary = totalSalary - (salary * SOCIAL_TAX);
  cout << "State tax: " << (salary * STATE_TAX) << endl;
  totalSalary = totalSalary - (salary * SOCIAL_TAX);
  cout << "Medical insurance: " << FED_INSURANCE << endl;
  totalSalary = totalSalary - (salary - FED_INSURANCE);
  cout << "Net pay: " << totalSalary;

  return 0;
}
