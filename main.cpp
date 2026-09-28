#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Homework 5 — Andrew Bennett
// CIS 5 Week 05 · Rule engine lite

int main() {
  int first_card = 0;
  int second_card = 0;

  cout << "What was the value of the first card drawn(1-11)?" << endl;
  cin >> first_card;
  cout << "What was the value of the second card drawn(1-11)?" << endl;
  cin >> second_card;
 
  // Total score of 13 wins, above or below fails. think blackjack but only with two card draws
  
  //| First Card | Second Card | Result |
  //|-----------:|------------:|--------|
  //| -3 | 11 | invalid score |
  //| 20 | 11 | invalid score |
  //|  3 | 10 | pass |
  //|  5 |  6 | fail — score too low |
  //| 10 | 11 | fail — score too high |
  //| 11 |  3 | edge test - fail — score too high |
  //| 11 |  1 | edge test - fail — score too low |
  //| 11 |  2 | edge test - pass |

  int score = first_card + second_card;
  bool first_is_valid = first_card >= 1 && first_card <= 11;
  bool second_is_valid = second_card >= 1 && second_card <= 11;

//edge tests: 11,1; 11,2; 11,3; 

  //used || here because if either of the inputs are invalid then the whole is invalid and must return an error
  if (!first_is_valid || !second_is_valid)  // out-of-range input gets its own message
  {
    cout << "The entered score is invalid, cards can only be in the range of 1-11." << endl;
  }
// used && here because not only do the inputs need to be validated but the score has to be checked for a victory as well
  else if (first_is_valid && second_is_valid && score == 13) // best outcome
  {
    cout << "You won! Congratulations!" << endl;
  }

  // used < instead of <= because a value equal to 13 would be a victory score
  else if (first_is_valid && second_is_valid && score < 13)
  {
    cout << "You lose, your score is too low!" << endl;
  }
  //final cases will cover for all instances of score > 13
  else 
  {
    cout << "You lose, your score is too high!" << endl;
  }

  return 0;
}
