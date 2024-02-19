#include "matrizes.hpp"

namespace corto
{

    void Matriz::inicializarYb(float Yb[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Yb[i][j] = 0;
            }
        }
    }

    void Matriz::llenadoYb(float Datos[3][3], float Yb[3][3])
    {
        for (int i = 0; i < 2; i++)
        {
            float Y = Datos[i][2];

            Yb[(int)Datos[i][0]][(int)Datos[i][1]] = Y * -1;
            Yb[(int)Datos[i][1]][(int)Datos[i][0]] = Y * -1;

            Yb[(int)Datos[i][0]][(int)Datos[i][0]] += Y;
            Yb[(int)Datos[i][1]][(int)Datos[i][1]] += Y;
        }
    }

    void Matriz::imprimirYb(float Yb[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << "I: " << i << " j: " << j << " YB: " << Yb[i][j] << std::endl;
            }
        }
    }
    void Matriz::prueba(std::string hola)
    {
        std::cout << hola << std::endl;
    }

} // namespace corto