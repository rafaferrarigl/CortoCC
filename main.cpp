#include "matrizes.hpp"

int main()
{
    float Datos[2][3] = {
        {0, 2, 0.1},
        {1, 2, 0.1}

    };
    float Yb[3][3];
    corto::Matriz app{};
    try
    {
        app.inicializarYb(Yb);
        app.llenadoYb(Datos, Yb);
        app.imprimirYb(Yb);
        app.prueba("asdasdasdasdasda");

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}