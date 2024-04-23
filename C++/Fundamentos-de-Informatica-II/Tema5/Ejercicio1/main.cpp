#include <iostream>
#include "CampoElectrico.h"
#include "CampoElectricoEsferaConductora.h"

using namespace std;

int main()
{
     float punto[2] = {3.0, 4.0};

     CampoElectrico campoElectrico(1.0, punto, "CampoElectrico1");
     cout << campoElectrico.toString() << endl;

     float intensidad = campoElectrico.calcularIntensidad(punto);
     cout << "Intensidad del Campo Electrico en el punto (" << punto[0] << ", " << punto[1] << "): "
          << intensidad << " N/C" << endl;
     cout << "\n";

     float *direccion = campoElectrico.calcularDireccion(punto);
     cout << "Direccion del Campo Electrico en el punto (" << punto[0] << ", " << punto[1] << "): ("
          << direccion[0] << ", " << direccion[1] << ")" << endl;

     cout << "\n";
     float posicion_esfera[2] = {0.0, 0.0};
     CampoElectricoEsferaConductora esferaConductora(2.0, 1.0, posicion_esfera, "EsferaConductora1");
     cout << esferaConductora.toString() << endl;

     cout << "\n";
     intensidad = esferaConductora.calcularIntensidad(punto);
     cout << "Intensidad de la Esfera Conductora en el punto (" << punto[0] << ", " << punto[1] << "): "
          << intensidad << " N/C" << endl;

     cout << "\n";
     float *campo = esferaConductora.calcularCampo(punto);
     cout << "Campo de la Esfera Conductora en el punto (" << punto[0] << ", " << punto[1] << "): ("
          << campo[0] << ", " << campo[1] << ")" << endl;

     return 0;
     cout << "\n";
}

/*#include "CampoVectorial.h"
#include "CampoElectrico.h"
#include "CampoElectricoEsferaConductora.h"

int main()
{
     float punto[2] = {3.0, 4.0};

     CampoElectrico campoElectrico(1.0, punto, "CampoElectrico1");
     cout << "\n";
     cout << "==================== Campo Electrico ====================" << endl;
          cout << "\n";

     cout << campoElectrico.toString() << endl;
          cout << "\n";

     cout << "=========================================================" << endl;
     cout << "\n";
     cout << "\n";

     cout << "Intensidad del Campo Electrico en el punto (" << punto[0] << ", " << punto[1] << "): "
          << campoElectrico.calcularIntensidad(punto) << " N/C" << endl;
     cout << "\n";

     float *direccion = campoElectrico.calcularDireccion(punto);
     cout << "Direccion del Campo Electrico en el punto (" << punto[0] << ", " << punto[1] << "): ("
          << direccion[0] << ", " << direccion[1] << ")" << endl;
     cout << "\n";

     float posicion_esfera[2] = {0.0, 0.0};
     CampoElectricoEsferaConductora esferaConductora(2.0, 1.0, posicion_esfera, "EsferaConductora1");
     cout << "\n================= Esfera Conductora =====================" << endl;
          cout << "\n";
     cout << esferaConductora.toString() << endl;
          cout << "\n";

     cout << "=========================================================" << endl;
     cout << "\n";

     cout << "Intensidad de la Esfera Conductora en el punto (" << punto[0] << ", " << punto[1] << "): "
          << esferaConductora.calcularIntensidad(punto) << " N/C" << endl;
     cout << "\n";

     float *campo = esferaConductora.calcularCampo(punto);
     cout << "Campo de la Esfera Conductora en el punto (" << punto[0] << ", " << punto[1] << "): ("
          << campo[0] << ", " << campo[1] << ")" << endl;
     cout << "\n";

     return 0;
}
*/