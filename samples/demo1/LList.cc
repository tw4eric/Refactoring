#include "list.h"


template <class Object>
class LList
{
public:
  LList( ) ;
  ~LList( ) ;

  LListItr<Object> find( const Object& x ) const;
  void remove( const Object& x ) ;

private:
  LListNode<Object> *header;
};
