#include <iostream>

using namespace std;

class Base {
public:
  Base(int i):x(i){}
  int getX();
private:
  int x;
};

int Base::getX()
{
  return x;
}


class Derived: public Base {
public:
  Derived(int i): Base (i), y(i){}
  Derived& operator=(const Derived& rhs);
  int getY();

private:
  int y;
};


Derived& Derived::operator=(const Derived& rhs)
{
  if(this == &rhs) return *this;

  Base::operator=(rhs);
  y = rhs.y;

  return *this;
}

int Derived::getY()
{
  return y;
}


int main()
{

  Derived d1(10);
  Derived d2(20);

  cout << "d1 values are " << d1.getY() << " & " << d1.getX() << endl;
  cout << "d2 values are " << d2.getY() << " & " << d2.getX() << endl;

  d1 = d2;

  cout << "After assignment d1 values are " << d1.getY() << " & " << d1.getX() << endl;
  cout << "After assignment d2 values are " << d2.getY() << " & " << d2.getX() << endl;


}
