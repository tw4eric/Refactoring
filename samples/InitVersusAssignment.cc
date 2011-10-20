#include <iostream>
#include <string.h>

using namespace std;

class InitRequiredForConstOrReferenceMembers
{

public:
  InitRequiredForConstOrReferenceMembers(const char& c, int i);

private:
  char& color;
  int intensity;


};

  InitRequiredForConstOrReferenceMembers::InitRequiredForConstOrReferenceMembers(const char& c, int i)
  {
    color=c;
    intensity=i;
  }

int main()
{

  InitRequiredForConstOrReferenceMembers irfcorm('R',103);

}
