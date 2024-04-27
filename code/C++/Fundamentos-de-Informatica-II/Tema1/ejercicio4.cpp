#include <iostream>
#include <vector>

using namespace std;

void sumaYMedia(const vector<int>& vec, int& suma, double& media) {
    suma = 0;
    for (int num : vec) {
        suma += num;
    }
    media = static_cast<double>(suma) / vec.size();
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int suma;
    double media;
    sumaYMedia(vec, suma, media);
    cout << "Suma: " << suma << ", Media: " << media << endl;
    return 0;
}

