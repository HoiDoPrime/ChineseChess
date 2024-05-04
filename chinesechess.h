#pragma once
#include<iostream>
using namespace std;


class quanco{
    protected:
    int dong,cot;
    bool color; //1 la quan trang 0 la quan den
    public:
    virtual void xuatcachdi()=0;

};
class tuong : public quanco{
    public: 
    tuong(bool color,int dong,int cot){
    };
    void xuatcachdi() override{
        cout<<"Di tung o mot, di ngang hoac doc. Tuong luon luon phai o trong pham vi cung va khong duoc ra ngoai. Cung tuc la hinh vuong 2x2 duoc danh dau bang duong cheo hinh chu X.";

    }

};
class si : public quanco{
    public:
    si(bool color,int dong,int cot){

    };
    void xuatcachdi() override{
        cout<<"Di xeo 1 o moi nuoc. Si luon luon phai o trong cung nhu Tuong.";
    }

};
class tuongj : public quanco{
    public:
    tuongj(bool color,int dong,int cot){

    };
    void xuatcachdi() override{
        cout<<"Di cheo 2 o (ngang 2 va doc 2) cho moi nuoc di. Tuong chi duoc phep o mot ben cua ban co, khong duoc di chuyen sang nua ban co cua doi phuong. Nuoc di cua tuong se khong hop le khi co mot quan co nam chan giua duong di.";

    }

};
class ma: public quanco{
    public:
    ma(bool color,int dong,int cot){
    };
    
    void xuatcachdi() override{
        cout<<"Di ngang 2 o va doc 1 o (hay hoc 2 o va ngang 1 o) cho moi nuoc di. Neu co quan nam ngay ben canh ma va can duong ngang 2 (hay duong doc 2), ma bi can khong duoc di duong do.";
    }

};
class xe: public quanco{
    public:
    xe(bool color,int dong,int cot){


    };
    void xuatcachdi() override{
        cout<<"Di ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem den.";

    }

};
class phao: public quanco{
    public:
    phao(bool color,int dong,int cot){
        
    };
    void xuatcachdi() override{
        cout<<"Di ngang va doc giong nhu xe. Diem khac biet la neu phao muon an quan, phao phai nhay qua dung 1 quan nao do. Khi khong an quan, tet ca nhung diem tu cho di dencho den phai khong co quan can.";

    }

};
class tot: public quanco{
    public:
    tot(bool color,int dong,int cot){

    };
    void xuatcachdi() override{
        cout<<"Di mot o moi nuoc. Neu tot chua vuot qua song, no chi co the di thang tien. Khi da vuot song roi, tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi buoc.";
    }
};

class banco{
    protected:
    quanco *Banco[32];
    public:
    banco(){
        Banco[0]=new xe(1,1,1);
        Banco[1]=new xe(1,1,9);        
        Banco[2]=new xe(0,10,9);        
        Banco[3]=new xe(0,10,1);        
        Banco[4]=new tuong(1,1,5);        
        Banco[5]=new tuong(1,10,5);        
        Banco[6]=new si(1,1,4);        
        Banco[7]=new si(1,1,6);        
        Banco[8]=new si(0,10,4);        
        Banco[9]=new si(0,10,6);        
        Banco[10]=new tuongj(1,1,3);        
        Banco[11]=new tuongj(1,1,7);        
        Banco[12]=new tuongj(0,10,3);        
        Banco[13]=new tuongj(0,10,7);        
        Banco[14]=new ma(1,1,2);        
        Banco[15]=new ma(1,1,8);        
        Banco[16]=new ma(0,10,2);        
        Banco[17]=new ma(0,10,8);        
        Banco[18]=new phao(1,3,2);        
        Banco[19]=new phao(1,3,8);        
        Banco[20]=new phao(0,8,2);        
        Banco[21]=new phao(0,8,8);       
        Banco[22]=new tot(1,4,1);        
        Banco[23]=new tot(1,4,3);        
        Banco[24]=new tot(1,4,5);        
        Banco[25]=new tot(1,4,7);        
        Banco[26]=new tot(1,4,9);        
        Banco[27]=new tot(0,7,1);        
        Banco[28]=new tot(0,7,3);        
        Banco[29]=new tot(0,7,5);        
        Banco[30]=new tot(0,7,7);        
        Banco[31]=new tot(0,7,9);        
    };
    void xuatcachdi(quanco *c){
        c->xuatcachdi();
    }

};