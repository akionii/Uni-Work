#include <iostream>
using namespace std;

struct t
{
  int segundos;
  int minutos;
  int horas;
};

void diffTiempo(struct t, struct t, struct t *);

int main()
{
    struct t t1, t2, diff;

    cout << "Introduzca la hora inicial en horas, minutos y segundos (En ese orden): " << endl;
    cin >> t1.horas >> t1.minutos >> t1.segundos;

    cout << "Introduzca la hora final en horas, minutos y segundos (En ese orden):" << endl;
    cin >> t2.horas >> t2.minutos >> t2.segundos;

    diffTiempo(t1, t2, &diff);

    cout << endl << "t diff: " << t1.horas << ":" << t1.minutos << ":" << t1.segundos;
    cout << " - " << t2.horas << ":" << t2.minutos << ":" << t2.segundos;
    cout << " = " << diff.horas << ":" << diff.minutos << ":" << diff.segundos;
    return 0;
}
void diffTiempo(struct t t1, struct t t2, struct t *diff){
    
    if(t2.segundos > t1.segundos)
    {
        --t1.minutos;
        t1.segundos += 60;
    }

    diff->segundos = t1.segundos - t2.segundos;
    if(t2.minutos > t1.minutos)
    {
        --t1.horas;
        t1.minutos += 60;
    }
    diff->minutos = t1.minutos-t2.minutos;
    diff->horas = t1.horas-t2.horas;
}