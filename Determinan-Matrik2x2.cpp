#include <iostream>
#include <limits>
int main() {
    int matrik[2][2];
    //Pengisian nilai matrik
    for (int j=0;j<2;j++) {
        std::cout << "Isi nilai matriks baris " << j+1 << " kolom 1-2" << std::endl;
        for (int i=0;i<2;i++) {
ulang:    
            std::cout << "Kolom ke-" << i+1 << " : ";
            std::cin >> matrik[j][i]; 
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nHanya masukkan nilai integer!" << std::endl;
                goto ulang;
            }
        }
    }
    //Penghitungan determinan
    int det = (matrik[0][0]*matrik[1][1]) - (matrik[0][1]*matrik[1][0]);
    std::cout << "\nDeterminan matrik tersebut adalah " << det << std::endl;
    return 0;
}
