#ifndef TLOGELEMENT_H
#define TLOGELEMENT_H

class TLogElement{
	private:
		bool FIn1, FIn2;
		TLogElement* FNextEl;
		int FNextIn;
	protected:
		bool FRes;
		virtual void calc() = 0;
		bool getIn2() { return FIn2; }
		void setIn2(bool newIn2);
	public:
		bool getIn1() { return FIn1; }
		void setIn1(bool newIn1);
		bool getRes() { return FRes; }
		TLogElement();
		void Link(TLogElement* nextElement, int nextIn = 1);
};
class TNot : public TLogElement{
	protected:
		void calc();
};
class TLog2In : public TLogElement{
	public:
		using TLogElement::setIn2; //без "using" ругаются
		using TLogElement::getIn2; //без "using" ругаются
};
class TAnd : public TLog2In{
	protected:
		void calc();
};
class TOr : public TLog2In{
	protected:
		void calc();
};
#endif