/**
 * Fire capacity program
 * @return - displays console output of whether or not a meeting can held based off
 * of how many people attending it and whether or not it complies with fire regulations.
 */
#include <iostream>
using namespace std;

int main (int argc, char **args) {

  //initializes maximum capicity of the room and # of people attending meeting
  int maxCap = 0;
  int peopleAttending = 0;

  //take in input from the user for these two values and find out how many spots are leftover
  cin >> maxCap;
  cin >> peopleAttending;
  int leftover = maxCap - peopleAttending;

  //if it's perfectly filled or there are leftover spaces, then it's legal to hold the meeting. Otherwise, it can't
  if (leftover >= 0) {
    cout << "Legal to hold meeting. " << leftover << " additional people allowed." << endl;
  } else {
    cout << "Meeting cannot be held due to fire regulations." << endl;
  }

  return 0;
}
