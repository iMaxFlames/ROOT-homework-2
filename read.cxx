#include "Momentum.h"

void read(){
    Momentum *p{nullptr};

    auto file = TFile::Open("tree_file.root");

    TTree *tree = static_cast<TTree*>(file->Get("tree"));

    tree->SetBranchAddress("p",&p);
    Int_t N = tree->GetEntries();

    TH2F *h2 = new TH2F("h2", "my hist; px; py",100,0,.02,100,0,.02);

    for (Int_t i{0}; i<N; i++){
        tree->GetEntry(i);
        h2->Fill(p->get_px(), p->get_py());
    }
    h2->Draw();

    TCanvas* c1 = new TCanvas("c1", "Scatter Plot of px*py vs pz", 800, 600);

    TString condition = "p->Magnitude() > 0"; // Must be a non-zero vector

    tree->Draw("px * py : pz", condition);

    c1->Draw();
}