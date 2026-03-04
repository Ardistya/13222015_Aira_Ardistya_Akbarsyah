#include <iostream>
#include <fstream> // Pustaka akses file
#include <string>  // Pustaka teks

int main() {  
    // --- 1. PROSES MENULIS FILE ---  
    std::ofstream fileTulis("data_sensor.txt"); 

    if (fileTulis.is_open()) {  
        fileTulis << "100.5\n"; // \n untuk pindah baris dalam file  
        fileTulis << "200.0\n";  
        fileTulis << "150.5\n";  
        fileTulis.close(); // Wajib ditutup setelah selesai digunakan!  
        std::cout << "=> Data tersimpan di 'data_sensor.txt'\n";  
    } else {  
        std::cout << "Gagal membuat file.\n";  
    }

    // --- 2. PROSES MEMBACA FILE ---  
    std::ifstream fileBaca("data_sensor.txt");  
    std::string baris_teks;  
      
    std::cout << "\n--- Membaca isi file ---" << std::endl;  
    if (fileBaca.is_open()) {  
        // Terus membaca selama masih ada baris baru di dalam file  
        while (std::getline(fileBaca, baris_teks)) {  
            std::cout << "Isi file: " << baris_teks << std::endl;  
        }  
        fileBaca.close();  
    } else {  
        std::cout << "File tidak ditemukan!\n";  
    }

    return 0;  
}