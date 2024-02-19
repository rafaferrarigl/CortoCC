#pragma once
#include "headers.hpp"
namespace corto
{
    class Matriz{
    public:
        void inicializarYb(float Yb[3][3]);
        void llenadoYb(float Datos[2][3], float Yb[3][3]);
        void imprimirYb(float Yb[3][3]);

        void prueba(std::string hola);
    };
    
    
} // namespace corto

   