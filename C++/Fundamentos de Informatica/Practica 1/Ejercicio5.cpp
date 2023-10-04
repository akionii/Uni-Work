#include <iostream>

using namespace std;

const int T = 1024;  // Constante para la conversión

void convertirBytes(long bytes, int& megabytes, int& kilobytes, int& remainderBytes) {
    megabytes = bytes / (T * T);
    int remainingBytes = bytes - (megabytes * T * T);
    kilobytes = remainingBytes / T;
    remainderBytes = remainingBytes % T;
}

int main() {
    long numBytes = 0;
	
	cout << "Introduce el numero que desees convertir: ";
	cin >> numBytes;
	
    int megabytes, kilobytes, remainderBytes;

    convertirBytes(numBytes, megabytes, kilobytes, remainderBytes);

    std::cout << "Resultado: " << megabytes << "MB, " << kilobytes << "KB y " << remainderBytes << "B." << std::endl;

    return 0;
}
