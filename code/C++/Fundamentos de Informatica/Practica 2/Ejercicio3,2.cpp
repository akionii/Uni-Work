#include <iostream>

int main()
{
    double examen_practico, cuestionarios, actividades_clase;

    std::cout << "Ingrese la nota del examen practico (0-10): ";
    std::cin >> examen_practico;

    std::cout << "Ingrese la nota de los cuestionarios (0-10): ";
    std::cin >> cuestionarios;

    std::cout << "Ingrese la nota de las actividades de clase (0-10): ";
    std::cin >> actividades_clase;

    if (examen_practico < 5 || cuestionarios < 5 || actividades_clase < 5)
    {
        std::cout << "No hace media, por lo tanto esta suspenso" << std::endl;
    }
    else
    {
        double nota_final = examen_practico * 0.4 + cuestionarios * 0.1 + actividades_clase * 0.5;

        std::cout << "Nota final: " << nota_final << std::endl;

        if (nota_final >= 9)
        {
            std::cout << "Calificacion: Sobresaliente" << std::endl;
        }
        else if (nota_final >= 7)
        {
            std::cout << "Calificacion: Notable" << std::endl;
        }
        else
        {
            std::cout << "Calificacion: Aprobado" << std::endl;
        }
    }

    return 0;
}
