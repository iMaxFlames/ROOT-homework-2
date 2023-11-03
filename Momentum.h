#ifndef __MOMENTUM_H__
#define __MOMENTUM_H__

#include <TObject.h>

class Momentum : public TObject {
    public:
        Momentum();
        Momentum(Int_t variable);
        virtual ~Momentum();

    private:
        Int_t variable;


    ClassDef(Momentum, 1);
};

#endif // __MOMENTUM_H__