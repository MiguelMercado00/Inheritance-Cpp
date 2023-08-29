//
// Created by Miguel Mercado on 22/08/23.
//

#include "Ornitorrinco.h"
#include <iostream>



void Ornitorrinco::respirarBranquial() {
    std::cout << "Respirando por branquias" << std::endl;
}

void Ornitorrinco::respirarPulmonar() {
    std::cout << "Respirando por pulmones" << std::endl;
}

int Ornitorrinco::ponerHuevos() {
    huevos = huevos+=1;
    return huevos;
}

void Ornitorrinco::amamantar() {
    std::cout << "Amamantando" << std::endl;
}

void Ornitorrinco::envenenar() {
    std::cout << "Envenenando" << std::endl;
}
