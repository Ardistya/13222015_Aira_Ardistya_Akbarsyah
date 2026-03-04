#include <iostream>
#include <vector> // Pustaka Wajib

int main() {  
    // Deklarasi array dinamis bertipe integer  
    std::vector<int> kumpulan_angka;

    // Menyuntikkan data tanpa batasan awal  
    kumpulan_angka.push_back(10);  
    kumpulan_angka.push_back(25);  
    kumpulan_angka.push_back(50);

    // .size() akan otomatis bernilai 3  
    for(int i = 0; i < kumpulan_angka.size(); i++) {  
        std::cout << "Data ke-" << i << ": " << kumpulan_angka[i] << std::endl;  
    }  
      
    return 0;  
}