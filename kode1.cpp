#include <iostream>
using namespace std;

void cetakData(string nama,string nisn,string jurusan,int tinggibadan)
{
  cout << "nama anda" << nama << endl;
  cout << "nisn anda" << nisn << endl;
  cout << "jurusan anda" << jurusan << endl;
  cout << "tinggi badan anda" << tinggibadan << endl;

}

int main() {
    string nama = "Zahwa Aryafiah Nabila Hasna";
    string nisn = "000008582024";
    string jurusan = "PPLG";
    int tinggibadan = 156;

    cetakData(nama,nisn,jurusan,tinggibadan);

    return 0;

}