#include "list.h" 


template <class Object>
 class LListItr
 {
 public:
 LListItr( ) : current( NULL ) { }

 bool isValid() const
 {  }

 void advance ()
 { if( isValid()) current = current->next; }

 const Object& retrieve( ) const
 { return current->element; }

 private:
 LListNode<Object> *current; 

 LListItr( LListNode<Object> *theNode )
 : current ( theNode ) { }

 friend class LList<Object>; 
 };
