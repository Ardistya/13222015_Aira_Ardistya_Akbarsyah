#include <iostream>
#include <string>

class RekeningBank {
    private:
        double saldo;
    public:
        RekeningBank(double nilai) {
            saldo = nilai;
        }
        double setor(double jumlah) {
            saldo += jumlah;
            cetak(saldo,0);
            return saldo;
        }
        double tarik(double jumlah) {
            if (saldo < jumlah) {
                std::cout << "Penarikan Gagal" << std::endl;
                return saldo;
            } else {
            saldo -= jumlah;
            cetak(saldo,1);
            return saldo;
            }
        }
        void cetak(double jumlah, int mode) {
            if (mode == 0) {
                std::cout << "Telah tersetor " << jumlah << std::endl;
            } else if (mode == 1) {
                std::cout << "Telah ditarik " << jumlah << std::endl;
            } else {
                std::cout << "Error!" << std::endl;
            }
        }
};

int main() {
    RekeningBank akun(1000);
    akun.setor(500);
    akun.tarik(2000);
    akun.tarik(1000);
    return 0;
}