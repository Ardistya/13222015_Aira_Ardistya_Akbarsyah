#include <iostream>
#include <vector>

class TugasKalkulasi {  
private:  
    int id_tugas;  
    double nilai_A;  
    double nilai_B;  
    double hasil;

public:  
    // Constructor menginisialisasi angka yang akan dihitung  
    TugasKalkulasi(int id, double a, double b) {  
        id_tugas = id;  
        nilai_A = a;  
        nilai_B = b;  
        hasil = 0.0;  
    }

    // Method komputasi (Di sinilah proses paralel nantinya bekerja)  
    void kerjakan() {  
        hasil = nilai_A + nilai_B;
    }

    void tampilkanHasil() {  
        std::cout << "Tugas " << id_tugas << " | "   
                  << nilai_A << " + " << nilai_B   
                  << " = " << hasil << std::endl;  
    }  
};

int main() {  
    std::vector<TugasKalkulasi> antrean;

    // Memasukkan antrean tugas dengan data yang berbeda-beda  
    antrean.push_back(TugasKalkulasi(1, 10.5, 5.0));  
    antrean.push_back(TugasKalkulasi(2, 20.0, 7.5));  
    antrean.push_back(TugasKalkulasi(3, 50.2, 10.1));

    // Proses massal (Sangat aman untuk diparalelkan)  
    for(int i = 0; i < antrean.size(); i++) {  
        antrean[i].kerjakan();  
        antrean[i].tampilkanHasil();  
    }

    return 0;  
}