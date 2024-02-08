#include <iostream>
#include <string>

using namespace std;

class Transporte {
private:
    int Color;
    int velocidad;

public:
    Transporte(int color, int velocidad) {
        Color = color;
        this->velocidad = velocidad;
    }

    int tipo() {
     return 0;
    }

    int tamaño() {
        
    return 0;
    }
};

int main() {
    return 0;
}
