#include <bits/stdc++.h>
using namespace std;

class PhanSo{
    private:
        int TuSo, MauSo;
    public:
        void Nhap();
        string Xuat() const;
        void RutGon();
};


void PhanSo::Nhap(){
    cin >> this->MauSo >> this->TuSo;
}

void PhanSo::RutGon(){
    TuSo /= __gcd(TuSo, MauSo);
    MauSo /= __gcd(TuSo, MauSo);
}

string PhanSo::Xuat()const {
    int x = TuSo, y = MauSo;
    if (x/y == (double) x/y){
        return to_string( x/y);
    } else{
        return (x/y < 0 )? "-":"" + to_string(x) +"/"+ to_string(y);
    }
}