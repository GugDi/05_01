#include "TLogElement.h"
TLogElement::TLogElement() {
	//FNextEl = NULL;
	FNextEl = 0;
}
void TLogElement::setIn1(bool newIn1) {
	FIn2 = newIn2;
	calc();
	if (FNextEl)
		switch (FNextIn) {
		case 1: FNextEl->setIn1(getRes()); break;
		case 2: FNextEl->setIn2(getRes()); break;
		}
}
void TLogElement::setIn2(bool newIn2) {
	FIn2 = newIn2;
	calc();
	if (FNextEl)
		switch (FNextIn) {
		case 1: FNextEl->setIn1(getRes()); break;
		case 2: FNextEl->setIn2(getRes()); break;
		}
}
void TLogElement::Link(TLogElement* nextElement, int nextIn) {
	FNextEl = nextElement;
	FNextIn = nextIn;
}
void TNot::calc() {
	FRes = !getIn1();
}
void TAnd::calc() {
	FRes = getIn1() && getIn2();
}
void TOr::calc() {
	FRes = getIn1() || getIn2();
}