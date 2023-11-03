#include "Momentum.h"
#include <cmath>

ClassImp(Momentum)

Momentum::Momentum() :
px{0},
py{0},
pz{0}
{
}
Momentum::Momentum(Double_t px, Double_t py, Double_t pz) :
px{px},
py{py},
pz{pz}
{
}
Momentum::~Momentum(){

}
Double_t Momentum::Magnitude(){
    return sqrt(px*px + py*py + pz*pz);
}