/*
 * CNodoSimple.h
 *
 *  Created on: 30/03/2014
 *      Author: arturo
 */

#ifndef NODOSIMPLE_H_
#define NODOSIMPLE_H_
/* ====================================================================================== */
/* ----------------------------------------- ST ----------------------------------------- */
/* ====================================================================================== */

template< typename TIPONODO > class ListSimple;

template< typename TIPONODO >

class NodoSimple
{
    friend class ListSimple < TIPONODO >;

public:
	NodoSimple(const TIPONODO&);
	virtual ~NodoSimple();

private:
	TIPONODO                 _Data;
	NodoSimple< TIPONODO >*  _NextPtr;
	void                    setDatos(TIPONODO&);
	void                    setNext(NodoSimple< TIPONODO >*);
	NodoSimple< TIPONODO >* getNext(void);
};

template< typename TIPONODO >
NodoSimple< TIPONODO >::NodoSimple (const TIPONODO& pDato) : _Data(pDato),
                                                             _NextPtr(0)
{ }


template< typename TIPONODO >
NodoSimple< TIPONODO >::~NodoSimple ( )
{ }


template< typename TIPONODO >
NodoSimple< TIPONODO >* NodoSimple< TIPONODO >::getNext (void)
{
    return this->_NextPtr;
}


template< typename TIPONODO >
void  NodoSimple< TIPONODO >::setDatos (TIPONODO& pDato)
{
    this->_Data = pDato;
    return ;
}


template< typename TIPONODO >
void  NodoSimple< TIPONODO >::setNext (NodoSimple< TIPONODO >* pNext)
{
    this->_NextPtr = pNext;
    return ;
}

/* ====================================================================================== */
/* ----------------------------------------- FN ----------------------------------------- */
/* ====================================================================================== */
#endif /* NODOSIMPLE_H_ */
