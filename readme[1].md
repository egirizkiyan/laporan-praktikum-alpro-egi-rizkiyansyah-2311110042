# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Egi Rizkiyansyah</p>
<p align="center">2311110042</p>

## Dasar Teori

Tipe data berfungsi untuk mempresentasikan jenis dari sebuah nilai yang terdapat dalam program. Dalam bahasa C++, tipe data dibagi menjadi tiga bagian : 
- Tipe data primitif
- Tipe data abstrak
- Tipe data koleksi

## Tipe Data Primitif
Merupakan tipe data dasar yang langsung didukung oleh bahasa pemrograman. Tipe data ini memiliki ukuran yang tetap dan didefinisikan oleh bahasa pemrograman itu sendiri.Tipe data primitif dalam pemrograman biasanya dibagi menjadi beberapa kategori utama berdasarkan jenis nilai yang mereka simpan dan representasi mereka di dalam memori komputer. Berikut adalah pembagiannya:
- Bilangan Bulat
- Bilangan Pecahan
- Karakter 
- Boolean
- Tipe Data Khusus

## Tipe Data Abstrak
Tipe Data Abstrak (ADT) adalah tipe (atau kelas) untuk objek yang perilakunya ditentukan oleh sekumpulan nilai dan serangkaian operasi. Definisi ADT hanya menyebutkan operasi apa yang akan dilakukan tetapi tidak menyebutkan bagaimana operasi tersebut akan dilaksanakan. Itu tidak menentukan bagaimana data akan diatur dalam memori dan algoritma apa yang akan digunakan untuk mengimplementasikan operasi. Disebut “abstrak” karena memberikan pandangan yang tidak bergantung pada implementasi. 

## Tipe Data Koleksi
Selain tipe numerik, Boolean, dan karakter, C++ juga menawarkan tipe koleksi bawaan. Tipe data kumpulan adalah pengelompokan sejumlah item data lainnya (mungkin hanya nol atau satu) yang memiliki signifikansi bersama atau perlu dioperasikan bersama.

Array, vektor, string, set, dan tabel hash adalah beberapa tipe koleksi C++ yang berguna ini.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main program
main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cout << "masukkan operator:";
    cin >> op;
    // It allow user to enter the operands
    cout << "masukkan angka1 & 2";
    cin >> num1 >> num2;
    //switch statment begins
    switch(op)
    {
    // if user enter +
    case '+':
        cout << num1 + num2;
        break;
     //if user enter -
     case '-':
        cout << num1 - num2;
        break;
    //if user enter *
    case '*':
        cout << num1 * num2;
        break;
    //if user enter /
    case '/':
        cout << num1 / num2;
        break;
    //if the operator is other than +, -, * or /,
    //eror massage will display
    default:
        cout << "eror! operator is not correct";
    }// switch statement ends
    return 0;
}
```
Kode di atas adalah sebuah program C++ sederhana yang bertujuan untuk melakukan masukan angka yang beberapa dimaksud .

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>
//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};
int main()
{
    //menggunaka struct
    struct Mahasiswa mhs1, mhs2;
    mhs1.name = "dian";
    mhs1.address = "mataram";
    mhs1.age = 22;
    mhs2.name = "bambang";
    mhs2.address = "surabaya";
    mhs2.age = 23;
    // mencetak isi struct
    printf("## mahasiswa 1 ##\n");
    printf("nama: %s\n", mhs1.name);
    printf("alamat:%s\n", mhs1.address);
    printf("umur: %d\n", mhs1.age);
    printf("## mahasiswa 2 ##\n");
    printf("nama: %s\n", mhs2.name);
    printf("alamat:%s\n", mhs2.address);
    printf("umur: %d\n", mhs2.age);
    return 0;
}
```
Dalam pemrograman, penggunaan struktur (struct) sangat berguna untuk mengelompokkan data terkait ke dalam satu unit yang logis. Dengan struktur, kita dapat dengan mudah menyimpan dan mengakses informasi yang terkait satu sama lain. Dalam kasus ini, struktur digunakan untuk menyimpan informasi tentang mahasiswa, termasuk nama, alamat, dan umur.).

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;
int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
Dalam pemrograman, array adalah struktur data yang sangat berguna untuk menyimpan sejumlah data yang serupa dalam satu variabel. Dengan array, kita dapat dengan mudah mengakses dan memanipulasi setiap elemen data menggunakan indeksnya. Dalam contoh di atas, array digunakan untuk menyimpan nilai-nilai dan kemudian menampilkan setiap nilai tersebut ke layar.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi panjang
float calculate_area(float length, float width) {
    float area = length * width;
    return area;
}

// Fungsi untuk menghitung keliling persegi panjang
float calculate_perimeter(float length, float width) {
    float perimeter = 2 * (length + width);
    return perimeter;
}

int main() {
    float length, width;

    // Meminta pengguna memasukkan panjang dan lebar
    cout << "Masukkan panjang: ";
    cin >> length;
    cout << "Masukkan lebar: ";
    cin

```

#### Output:
![Screenshot 2024-03-11 143707](https://github.com/egirizkiyan/LAPRAK/assets/162097461/ec8ae993-044d-4958-b843-2539820e8ea1)



Penjelasan Program:

Program di atas memiliki dua fungsi, yaitu calculate_area() dan calculate_perimeter().
Fungsi calculate_area() mengambil dua parameter, yaitu length (panjang) dan width (lebar), kemudian menghitung luas persegi panjang dengan rumus luas = panjang * lebar.
Fungsi calculate_perimeter() juga mengambil dua parameter, yaitu length dan width, dan menghitung keliling persegi panjang dengan rumus keliling = 2 * (panjang + lebar).
Pengguna diminta untuk memasukkan nilai panjang dan lebar.
Nilai panjang dan lebar yang dimasukkan oleh pengguna kemudian digunakan sebagai argumen saat memanggil fungsi-fungsi calculate_area() dan calculate_perimeter().
Hasil perhitungan luas dan keliling persegi panjang kemudian dicetak ke layar.
Kesimpulan:

Tipe data primitif yang digunakan dalam program ini adalah bilangan floating-point (float) untuk merepresentasikan panjang dan lebar persegi panjang.
Program ini menunjukkan cara menggunakan tipe data primitif untuk melakukan perhitungan matematika sederhana dan interaksi dengan pengguna.
Penggunaan tipe data primitif memungkinkan kita untuk melakukan operasi matematika dan pemrosesan data dengan efisien.
Dalam pemrograman, pemilihan tipe data yang tepat penting untuk memastikan efisiensi dan keakuratan dalam penyimpanan dan pengolahan data.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!

#### - Class
```C++
#include <iostream>
#include <string>
using namespace std;

// Definisi class Mahasiswa
class Mahasiswa {
public:
    string nama;
    string jurusan;
    int umur;

    // Metode untuk menampilkan informasi mahasiswa
    void displayInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Jurusan: " << sains data << endl;
        cout << "Umur: " << umur << " tahun" << endl;
    }
};

int main() {
    // Membuat objek mahasiswa
    Mahasiswa mhs1;
    mhs1.nama = "egi rizkiyansyah";
    mhs1.jurusan = "Informatika";
    mhs1.umur = 20;

    // Memanggil metode untuk menampilkan informasi mahasiswa
    mhs1.displayInfo();

    return 0;
}

```

#### Output:
#include <iostream>
#include <string>
using namespace std;

// Definisi class Mahasiswa
class Mahasiswa {
public:
    string nama;
    string jurusan;
    int umur;

    // Metode untuk menampilkan informasi mahasiswa
    void displayInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Jurusan: " << sains data << endl;
        cout << "Umur: " << umur << " tahun" << endl;
    }
};

int main() {
    // Membuat objek mahasiswa
    Mahasiswa mhs1;
    mhs1.nama = "egi rizkiyansyah";
    mhs1.jurusan = "sains data";
    mhs1.umur = 20;

    // Memanggil metode untuk menampilkan informasi mahasiswa
    mhs1.displayInfo();

    return 0;
}

![Screenshot 2024-03-11 150953](https://github.com/egirizkiyan/LAPRAK/assets/162097461/8a368a1e-296b-4a87-805e-fd145ffe8c7c)

Kesimpulan:

Class dan struct sama-sama digunakan untuk menyatukan data dalam satu kesatuan.
Perbedaan utama antara keduanya adalah bahwa dalam class, anggota data dan fungsi memiliki hak akses default yang berbeda (private untuk class dan public untuk struct).
Class lebih fleksibel dan dapat digunakan untuk menerapkan konsep OOP, sementara struct lebih sederhana dan biasanya digunakan untuk data yang lebih sederhana

#### -Struct
```C++

```

#### Output:
![Screenshot 2024-03-11 144608](https://github.com/egirizkiyan/LAPRAK/assets/162097461/21b4582b-ead7-4da2-8768-47b5d9d9b9c6)


- Struct adalah tipe data yang memungkinkan Anda menggabungkan beberapa variabel dengan tipe data yang berbeda dalam satu kesatuan.
- Mirip dengan class, tetapi defaultnya semua anggotanya adalah public.
- Struktur data pada umumnya digunakan untuk menyimpan data dengan tipe data yang berbeda dalam satu variabel.
- Struct lebih sering digunakan dalam bahasa C untuk membuat struktur data sederhana, sementara dalam C++, struct juga dapat memiliki fungsi (dengan batasan tertentu) dan dapat digunakan untuk mendefinisikan objek.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```C++
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Mendefinisikan map untuk menyimpan pasangan nama dan usia
    map<string, int> usia;

    // Menambahkan pasangan nama dan usia ke dalam map
    usia["Egi"] = 19;
    usia["Naufal"] = 18;
    usia["Sudol"] = 12;

    // Menampilkan usia seseorang berdasarkan nama
    cout << "Usia Naufal: " << usia["naufal"] << " tahun" << endl;
    cout << "Usia sudol: " << usia["sudol"] << " tahun" << endl;

```
#### Output:
![Screenshot 2024-03-11 151557](https://github.com/egirizkiyan/LAPRAK/assets/162097461/2210928c-4091-47e6-95cc-a41a91553550)


## Penjelasan Program:

Program di atas menggunakan std::map untuk menyimpan pasangan nama dan usia.
Setiap nama berperan sebagai kunci (key), dan usia sebagai nilai (value).
Pertama-tama, kita mendefinisikan std::map<string, int> dengan nama usia.
Kemudian, kita menambahkan beberapa pasangan nama dan usia ke dalam map menggunakan operator indeks [].
Selanjutnya, kita menampilkan usia seseorang berdasarkan namanya dengan menggunakan operator indeks [].
Perbedaan antara Array dan Map:

## Penyimpanan Data:

Array adalah struktur data yang menyimpan elemen-elemen dengan indeks yang berurutan, dan elemen-elemen ini dapat diakses dengan menggunakan indeks mereka.
Map adalah struktur data yang menyimpan pasangan kunci-nilai (key-value), di mana setiap kunci unik memiliki nilai yang terkait dengannya.
Pengaksesan Data:

Dalam array, elemen-elemen diakses dengan menggunakan indeks numerik.
Dalam map, nilai-nilai diakses dengan menggunakan kunci yang sesuai.
Pengurutan Data:

Array menyimpan elemen-elemen berdasarkan urutan penambahan atau indeks yang diberikan.
Map secara internal menyimpan elemen-elemen secara terurut berdasarkan kunci, sehingga data dalam map selalu tersusun berdasarkan urutan kunci.
Kemampuan Penanganan Data:

Array lebih sederhana dan lebih cocok untuk koleksi data yang sederhana dan tanpa kunci.
Map lebih fleksibel dan efisien untuk menyimpan dan mengakses data dengan menggunakan kunci tertentu. Ini sangat berguna ketika Anda perlu mencari nilai berdasarkan kunci unik.
Dengan demikian, sementara array cocok untuk penggunaan umum saat Anda hanya perlu menyimpan dan mengakses koleksi data sederhana, map lebih sesuai ketika Anda perlu menghubungkan nilai-nilai dengan kunci tertentu untuk mengaksesnya.

## Kesimpulan
Dalam Codingan di atas menjelaskan sebuah data yang dimana kita simpulkan membahas sebuah data yang diamana menjelaskan beberapa hasil ayang kita peroleh dalam sampel tersebut agar dapa kita peroleh secara mudah dan cepat.

## Referensi
- <iostream>: Ini adalah header file yang menyediakan fungsi-fungsi standar untuk masukan dan keluaran di C++. Header file ini diperlukan untuk menggunakan objek cout dan cin yang digunakan untuk mencetak output ke layar dan mengambil input dari pengguna.

<map>: Ini adalah header file yang menyediakan struktur data map dan fungsi-fungsi yang terkait dengan operasi pada map. Di dalam program tersebut, <map> digunakan untuk mengaktifkan penggunaan struktur data std::map yang disediakan oleh STL C++.

<string>: Ini adalah header file yang menyediakan fungsi-fungsi untuk manipulasi string di C++. Dalam program tersebut, <string> digunakan karena kita menggunakan tipe data string untuk kunci dalam map std::map.