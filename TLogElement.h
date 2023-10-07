#ifndef TLOGELEMENT_H
#define TLOGELEMENT_H

class TLogElement{};
class TNot : public TLogElement{};
class TLog2In : public TLogElement{};
class TAnd : public TLog2In{};
class TOr : public TLog2In{};
#endif