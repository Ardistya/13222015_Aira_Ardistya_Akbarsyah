#include <iostream>
#include <string>

// Mendefinisikan Class
class Mobil {  
public: // Sementara menggunakan public agar mudah diakses
    std::string merk;  
    std::string warna;  
    int tahun;

    // Perilaku (Method)  
    void nyalakanMesin() {  
        std::cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << std::endl;  
    }  
};

int main() {  
    // Membuat Object 1 dari cetak biru Mobil  
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    // Membuat Object 2 dari cetak biru yang sama  
    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    // Memanggil perilaku dari masing-masing object
    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();

    return 0;  
}