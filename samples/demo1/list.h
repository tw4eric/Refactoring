#include <iostream>
#include <cstddef>

template <class Object>
class LList; 

template <class Object>
class LListItr; 

template <class Object>
class LListNode
{
 LListNode( const Object& theElement = Object( ) , LListNode *n = NULL ) : element (theElement ) , next( n ) { }

 Object element;
 LListNode *next;

 friend class LList<Object>;
 friend class LListItr<Object>;
} ;
