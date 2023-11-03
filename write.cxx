#include "Momentum.h"

void write(){
    Momentum *p{nullptr};

    TFile f("tree_file.root","RECREATE");

    TTree *tree = new TTree("tree","momentum tree");
    
    tree->Branch("p",&p);

    Double_t px,py,pz;
    for (Int_t i{0}; i<10000; i++){
        px = gRandom->Gaus(0,.02);
        py = gRandom->Gaus(0,.02);
        pz = gRandom->Gaus(0,.02);

        p = new Momentum(px,py,pz);

        tree->Fill();

        delete p;
    }
    tree->AutoSave();
}