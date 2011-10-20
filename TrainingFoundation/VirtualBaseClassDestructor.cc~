#include <iostream>

using namespace std;

class Tuber
{
public: 
  Tuber(const char* name);
  virtual ~Tuber();
  
private:
  const char* name;

};
  
Tuber::Tuber(const char* n):name(n)
{
  cout << "Constructing tuber with name="<<name<<endl;

}

Tuber::~Tuber()
{
  cout<<"Destroying a tuber...who? "<<name<<endl;
}

class Potato : public Tuber
{
public:
  Potato(const char* name);
  ~Potato();

private:
  const char* name;
};

Potato::Potato(const char* name):Tuber(name),name(name)
{
  cout << "Constructing Potato"<<endl;
  
}

Potato::~Potato()
{
  cout<<"Destroying a potato...burp!"<<endl;
}


class Yam : public Tuber
{
public:
  Yam(const char* name);
  ~Yam();
private:
  const char* name;
};

Yam::Yam(const char* name):  Tuber(name),name(name)
{
  cout << "Constructing Yam"<<endl;
}

Yam::~Yam()
{
  cout<<"Destroying a yam...burp!"<<endl;
}


Tuber* getATuber(int rand)
{
  switch(rand%2)
    {
    case 1:
      return new Potato("Potato1");
    default:
      return new Yam("Yam1");
    }
}


int main(int argc, char**argv)
{
  Tuber* potatoOrYam = getATuber(argc);

  delete potatoOrYam;

  return 0;

}
