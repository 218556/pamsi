#ifndef IQueue_HH
#define IQueue_HH

/*!
* \file
* \brief Definicja interfejsu IQueue
*
* Plik zawiera definicję interfejsu IQueue, który
* dziedziczy po IContainer.
*/

#include "icontainer.hh"


/*!
* \brief Modeluje pojęcie kolejki.
*/
class IQueue : IContainer
{
public:
	virtual void Add(int element) = 0;
	virtual int Find(int *element) = 0;
	virtual void* Get(int element) = 0;
	virtual int Size() = 0;
	
	virtual void End() = 0;
	virtual void Push() = 0;
	virtual void Pop() = 0;
};


#endif
