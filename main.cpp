#include <iostream>
#include "Ornitorrinco.h"
#include "Oviparo.h"
#include "Mamifero.h"
#include "Anfibio.h"
#include "Venenoso.h"

int main() {
    Ornitorrinco *perry = new Ornitorrinco();
    perry->respirarBranquial();
    perry->envenenar();
    std::cout << "He puesto: " << perry->ponerHuevos() <<" huevitos"<< std::endl;
    std::cout << "He puesto: " << perry->ponerHuevos() <<" huevitos"<< std::endl;

    return 0;
}