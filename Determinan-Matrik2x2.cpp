#include <iostream>
int main() {
    int matrik[2][2];
    //Pengisian nilai matrik
    for (int j=0;j<2;j++) {
        std::cout << "Isi nilai matriks baris " << j+1 << " kolom 1-2" << std::endl;
        for (int i=0;i<2;i++) {
            std::cout << "Kolom ke-" << i+1 << " : ";
            std::cin >> matrik[j][i];
        }
    }
    //Penghitungan determinan
    int det = (matrik[0][0]*matrik[1][1]) - (matrik[0][1]*matrik[1][0]);
    std::cout << "\nDeterminan matrik tersebut adalah " << det << std::endl;
    return 0;
}