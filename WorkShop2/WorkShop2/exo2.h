#ifndef EXO2_H

#include <iostream>

class C1 {
public:
    void AffichageC1(void);
};

class C2 {
public:
    void AffichageC2(void);                        
};

class C3 {
public:
    void AffichageC3(void);
};

class gpcs1 {
private:
    C1 O1;
    C2 O2;
    C3 O3;

public:
    void gpcs1S1(void);
    void gpcs1S2(void);
};

class gpcs2 {
private:
    C1 O1;
    C3 O3;

public:
    void gpcs2S1(void);
};

#endif