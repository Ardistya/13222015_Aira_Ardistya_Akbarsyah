#include <iostream>

// Class Induk (Base Class)  
class SensorDasar {  
protected:   
    // Menggunakan protected agar bisa diwariskan ke Anak  
    int id_sensor;  
    double nilai_bacaan;

public:  
    SensorDasar(int id) {  
        id_sensor = id;  
        nilai_bacaan = 0.0;  
    }  

    void rekam(double data) {   
        nilai_bacaan = data;   
    }  
};

// Class Anak (Derived Class) mewarisi SensorDasar  
class SensorSuhu : public SensorDasar {  
public:  
    // Constructor Anak meneruskan data ke Constructor Induk  
    SensorSuhu(int id) : SensorDasar(id) {}

    // Method khusus milik Anak  
    void kalibrasiDanCetak() {  
        // Anak BISA memanggil nilai_bacaan secara langsung berkat 'protected'  
        double kalibrasi = nilai_bacaan + 1.5;   
        std::cout << "Sensor Suhu ID " << id_sensor   
                  << " | Kalibrasi: " << kalibrasi << " C\n";  
    }  
};

int main() {  
    SensorSuhu s1(99);       // Membentuk objek dari Class Anak  
    s1.rekam(35.0);          // Memanggil fungsi warisan dari Induk  
    s1.kalibrasiDanCetak();  // Memanggil fungsi spesifik dari Anak  
      
    return 0;  
}