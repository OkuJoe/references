
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "nyakaka";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";
  return 0;
} // is an alias for an exsiting variable
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";       // food variable
  string &meal = food;         // reference to food

  meal = "Burger";             // change the reference

  cout << food << "\n";        // Outputs Burger
  cout << meal << "\n";        // Outputs Burger
  return 0;
}
