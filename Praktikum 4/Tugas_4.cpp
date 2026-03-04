#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class kalibrasi {
    private:
        double nilai;

    public:
        kalibrasi(double input) { 
            nilai = input;
        }

        void kerjakan() {
            nilai = nilai * 1.1;
        }

        void tampilkan() {
            std::cout << nilai << std::endl;  
        }

        double getNilai() {
            return nilai; // Memberikan salinan nilai ke luar class
        }
};

int main() {
    std::vector<kalibrasi> sensor; 

    sensor.push_back(kalibrasi(100.5));
    sensor.push_back(kalibrasi(200.0));
    sensor.push_back(kalibrasi(150.5));

    for (int i = 0; i < sensor.size(); i++) {
        sensor[i].kerjakan();
        sensor[i].tampilkan();
    }

    std::ofstream filetulis("data_sensor.txt"); 
    if (filetulis.is_open()){
        for (int i = 0; i < sensor.size(); i++) {
            filetulis << sensor[i].getNilai() << "\n"; 
        }
        filetulis.close();
        std::cout << "=> Data tersimpan di 'data_sensor.txt'\n";
    } else {
        std::cout << "Gagal memuat file untuk menulis.\n";
    }

    std::ifstream filebaca("data_sensor.txt");
    std::string baris_teks;

    std::cout << "\n--- Membaca Isi File ---" << std::endl;
    if (filebaca.is_open()){
        while (std::getline(filebaca, baris_teks)) {
            std::cout << "Isi file: " << baris_teks << std::endl;
        }
        filebaca.close();
    } else {
        std::cout << "File tidak ditemukan!\n";
    }
    return 0;   
}