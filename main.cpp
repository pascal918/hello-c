#include <iostream>

using namespace std;
// my first main


class Country{
  const int surface = 12;
  const float degree = 26.326;
};

int main()
{
  string prononciation = "Hello World first country !";
  Country france = new Country();
  cout << prononciation + france.surface << endl;
  return 0;
}

