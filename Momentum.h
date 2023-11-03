#ifndef __MOMENTUM_H__
#define __MOMENTUM_H__

#include <TObject.h>

class Momentum : public TObject {
    public:
        Momentum();
        Momentum(Double_t px, Double_t py, Double_t pz);
        virtual ~Momentum();

        Double_t Magnitude();

    private:
        Double_t px;
        Double_t py;
        Double_t pz;


    ClassDef(Momentum, 1);
};

#endif // __MOMENTUM_H__