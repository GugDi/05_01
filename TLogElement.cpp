#include "TLogElement.h"
TLogElement::TLogElement()
{
	//FNextEl = NULL;
	FNextEl = 0;
}
void TLogElement::setIn1(bool newIn1){}
void TLogElement::setIn2(bool newIn2){}
void TLogElement::Link(TLogElement* nextElement, int nextIn){}
void TNot::calc(){}
void TAnd::calc(){}
void TOr::calc(){}