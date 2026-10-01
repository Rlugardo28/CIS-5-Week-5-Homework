#include <iostream>

// Homework 5 — Raymundo Lugardo
// CIS 5 Week 05 · Rule engine lite
using namespace std;

int main() {
  int score = 0;
  int attendance = 0;
 // TODO: cout question, then cin, for score and for attendance
  cout << "Score 0-100?";
  cin >> score;
  cout << "Attendance percent?";
  cin >> attendance; 
  // Edge values: (list just-below / exactly-on / just-above for each threshold here)
  
  // TODO: invalid branch FIRST — out-of-range input gets its own message
  //   if (score < 0 || score > 100) { ... }
  if (score < 0 || score > 100 || attendance <0 || attendance > 100) {
      cout << "Result: invalid input - score and attendance must be 0 to 100\n";
  }
  // TODO: else if ( ... && ... ) { ... }   best outcome
  // TODO: else if ( ... ) { ... }          middle outcome
  // TODO: else { ... }                     the rest
  else if (score >=70 && attendance >= 80) {
    cout << "Result: pass\n";
  }
  
  else if (score >= 70 || attendance >=80) {
      cout << "Result: warn - one requirement met, but needs improvement\n";
  }

  else {
    cout << "Result: fail\n";
  }
  // TODO: two comments that explain a choice (why invalid first, why && not ||, why >= not >)

  return 0;
}
