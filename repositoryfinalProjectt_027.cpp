#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
public:
	void inputpresensi() {
		cout << "Masukkan nilai Presensi : ";
		cin >> presensi;
	}

	void inputdata() {
		cout << "Masukkan nilai Presensi : 90";
		cin >> presensi;
		cout << "Masukkan nilai Activity : 80";
		cin >> activity;
		cout << "Masukkan nilai Exercise : 60";
		cin >> exercise;
		cout << "Masukkan nilai Tugas Akhir 65: ";
		cin >> tugasAkhir
	};
	void inputdata() {
		cout << "Masukkan nilai Presensi : 90";
		cin >> presensi;
		cout << "Masukkan nilai Activity : 80";
		cin >> activity;
		cout << "Masukkan nilai Exercise : 60";
		cin >> exercise;
		cout << "Masukkan nilai Tugas Akhir 75: ";
		cin >> tugasAkhir

			void tampilnilaiAkhir() {
			cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir 75 : " << n
				NilaiAkhir << endl;
		}

	}
};

class Pemrograman : public MataKuliah {
	public:
		void hitungNilaiAkhir();
		NilaiAkhir = [nilaiPresensi+nilaiActivity+nilaiExercie+nilaitugasAkhir]

};

	}
	int main() {
		setP nilaiPresensi = [presensi / 10	];
		setA nilaiActivity = [activity / 20 ];
		setU nilaiExersice = [exercise / 30 ];
		setAE nilaitugasAkhir = [tugasAkhir / 40 ];
	};
};