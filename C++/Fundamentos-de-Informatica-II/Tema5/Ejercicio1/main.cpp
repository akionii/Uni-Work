#include "CampoVectorial.h"
#include "CampoElectrico.h"
#include "CampoElectricoEsferaConductora.h"

int main()
{
     float punto[2] = {3.0, 4.0};

     CampoElectrico campoElectrico(1.0, punto, "CampoElectrico1");
     cout << "==================== Campo Electrico ====================" << endl;
     cout << campoElectrico.toString() << endl;
     cout << "=========================================================" << endl;

     cout << "Intensidad del Campo Electrico en el punto (" << punto[0] << ", " << punto[1] << "): "
          << campoElectrico.calcularIntensidad(punto) << " N/C" << endl;

     float *direccion = campoElectrico.calcularDireccion(punto);
     cout << "Direccion del Campo Electrico en el punto (" << punto[0] << ", " << punto[1] << "): ("
          << direccion[0] << ", " << direccion[1] << ")" << endl;

     float posicion_esfera[2] = {0.0, 0.0};
     CampoElectricoEsferaConductora esferaConductora(2.0, 1.0, posicion_esfera, "EsferaConductora1");
     cout << "\n================= Esfera Conductora =====================" << endl;
     cout << esferaConductora.toString() << endl;
     cout << "=========================================================" << endl;

     cout << "Intensidad de la Esfera Conductora en el punto (" << punto[0] << ", " << punto[1] << "): "
          << esferaConductora.calcularIntensidad(punto) << " N/C" << endl;

     float *campo = esferaConductora.calcularCampo(punto);
     cout << "Campo de la Esfera Conductora en el punto (" << punto[0] << ", " << punto[1] << "): ("
          << campo[0] << ", " << campo[1] << ")" << endl;

     return 0;
}
