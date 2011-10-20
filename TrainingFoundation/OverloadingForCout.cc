#include <iostream>
#include <string.h>
using namespace std;

class OverloadingForCout
{
public:
  OverloadingForCout(const char* name, const int age);
  ~OverloadingForCout();

private:
  char* personName;
  int personAge;

  friend ostream& operator<<(ostream& stream, const OverloadingForCout& person);
};

OverloadingForCout::OverloadingForCout(const char* name, const int age)
{
  if (name) {
    personName = new char[strlen(name) + 1];
    strcpy(personName, name);
  }
  else {
    personName = new char[1];
    *personName = '\0';
  }

  personAge = age;
}

OverloadingForCout::~OverloadingForCout()
{
  delete [] personName;
}

ostream& operator<<(ostream& stream, const OverloadingForCout& person)
{
  stream << person.personName << " ---- " << person.personAge;
  return stream;
}

int main()
{
  OverloadingForCout person1("Anand", 99);
  OverloadingForCout person2("Jaju", 101);


  cout << "Person 1: "<<person1<<endl;
  cout << "Person 2: "<<person2<<endl;
}
