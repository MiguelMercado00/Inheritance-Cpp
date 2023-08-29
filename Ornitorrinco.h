//
// Created by Miguel Mercado on 22/08/23.
//

#ifndef HERENCIA_MULTIPLE_ORNITORRINCO_H
#define HERENCIA_MULTIPLE_ORNITORRINCO_H
#include "Oviparo.h"
#include "Anfibio.h"
#include "Mamifero.h"
#include "Venenoso.h"

class Ornitorrinco: public Anfibio, public Mamifero, public Venenoso, public Oviparo {
protected:
    int huevos;
public:
    Ornitorrinco() {
        huevos = 1;
    }
    ~Ornitorrinco() {}
    void respirarBranquial() override;
    void respirarPulmonar() override;
    void amamantar() override;
    void envenenar() override;
    int ponerHuevos() override;

};


#endif //HERENCIA_MULTIPLE_ORNITORRINCO_H
