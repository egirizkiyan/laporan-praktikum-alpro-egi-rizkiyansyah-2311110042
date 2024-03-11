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
Kode di atas adalah sebuah program C++ sederhana yang bertujuan untuk melakukan operasi aritmatika dasar (penambahan, pengurangan, perkalian, dan pembagian) antara dua bilangan yang dimasukkan oleh pengguna.

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
Kode di atas adalah program C++ yang menggunakan struktur (struct) untuk menyimpan informasi tentang mahasiswa. Program ini memiliki dua mahasiswa, mhs1 dan mhs2, yang masing-masing memiliki atribut nama (name), alamat (address), dan umur (age).

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
Kode di atas adalah sebuah program C++ yang mendemonstrasikan penggunaan array. Array digunakan untuk menyimpan sekumpulan data dengan tipe yang sama dalam satu variabel.

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
- Program ini meminta pengguna untuk memasukkan panjang sisi persegi.
- Kemudian, program menggunakan dua fungsi, `hitungLuasPersegi` dan `hitungKelilingPersegi`, untuk menghitung luas dan keliling persegi berdasarkan panjang sisi yang dimasukkan.
- Fungsi `hitungLuasPersegi` mengambil satu parameter, yaitu panjang sisi persegi, dan mengembalikan hasil perkalian sisi dengan sisi.
- Fungsi `hitungKelilingPersegi` juga mengambil satu parameter, yaitu panjang sisi persegi, dan mengembalikan hasil perkalian sisi dengan 4 (karena persegi memiliki 4 sisi).
- Hasil perhitungan luas dan keliling kemudian ditampilkan ke layar.

Kesimpulan:
- Program di atas menggunakan tipe data primitif `double` untuk menyimpan nilai panjang sisi, luas, dan keliling persegi. Tipe data `double` digunakan karena memungkinkan penggunaan bilangan desimal.
- Program juga menunjukkan penggunaan fungsi untuk mengelola logika perhitungan luas dan keliling persegi. Dengan fungsi, kita dapat membagi logika program menjadi bagian-bagian yang lebih kecil dan mudah dikelola.
- Program ini menunjukkan bagaimana tipe data primitif dapat digunakan untuk memodelkan masalah sederhana dan melakukan operasi matematika pada data tersebut. Tipe data primitif seperti `double` sangat berguna dalam pemrograman untuk menangani data numerik.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!

#### - Class
```C++
#include <iostream>
using namespace std;

// Definisi class
class Mahasiswa {
public:
    string nama;
    int umur;
    
    void display() {
        cout << "Nama: " << nama << ", Umur: " << umur << endl;
    }
};

int main() {
    // Membuat objek dari class Mahasiswa
    Mahasiswa mhs1;
    
    // Mengisi data ke dalam objek
    mhs1.nama = "Nargya";
    mhs1.umur = 18;
    
    // Memanggil metode display dari objek
    mhs1.display();
    
    return 0;
}
```

#### Output:
!
![image](https://github.com/egirizkiyan/LAPRAK/assets/162097461/4841ea8e-1980-4994-b6d4-938b5b1337a2)


- Class adalah struktur data yang digunakan untuk menyatukan data bersama dengan fungsi-fungsi yang beroperasi pada data tersebut.
- Class menggabungkan data (variabel) dan fungsi (metode) ke dalam satu kesatuan logis.
- Dalam class, data disebut sebagai atribut dan fungsi disebut sebagai metode.
- Class adalah dasar dari konsep pemrograman berorientasi objek (OOP).
- Dalam C++, anggota-anggota class defaultnya private, sehingga perlu modifier untuk mengaksesnya (public, private, protected).

#### -Struct
```C++
#include <iostream>
using namespace std;

// Definisi struct
struct Mahasiswa {
    string nama;
    int umur;
};

int main() {
    // Membuat objek dari struct Mahasiswa
    Mahasiswa mhs1;
    
    // Mengisi data ke dalam objek
    mhs1.nama = "Egi";
    mhs1.umur = 18;
    
    // Menampilkan data dari objek
    cout << "Nama: " << mhs1.nama << ", Umur: " << mhs1.umur << endl;
    
    return 0;
}
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
    // Mendeklarasikan map dengan key bertipe string dan value bertipe int (umur)
    map<string, int> dataMahasiswa;

    // Menambahkan data mahasiswa ke dalam map
    dataMahasiswa["Egi"] = 18;
    dataMahasiswa["Syamil"] = 18;
    dataMahasiswa["Bob Malik"] = 18;

    // Mengakses dan mencetak data mahasiswa
    cout << "Umur mahasiswa Egi: " << dataMahasiswa["Egi"] << " tahun" << endl;
    cout << "Umur mahasiswa Syamil: " << dataMahasiswa["Syamil"] << " tahun" << endl;
    cout << "Umur mahasiswa Bob Malik: " << dataMahasiswa["Bob Malik"] << " tahun" << endl;

    return 0;
}
```
#### Output:
![Screenshot 2024-03-11 144803](https://github.com/egirizkiyan/LAPRAK/assets/162097461/b18d1a14-5f66-4cec-8d6a-035ce401de2c)



### Penjelasan Program 
- Program di atas menggunakan map untuk menyimpan data umur mahasiswa, dimana key adalah nama mahasiswa (bertipe string) dan value adalah umur (bertipe int).
- Data mahasiswa ditambahkan ke dalam map menggunakan sintaks map[key] = value.
- Kemudian, program mencetak data umur masing-masing mahasiswa dengan mengakses map menggunakan key dan mencetak valuenya.

### Perbedaan Array dengan Map
### Array:

- Array adalah struktur data yang menyimpan kumpulan elemen data dengan tipe data yang sama.
- Elemen-elemen dalam array diakses menggunakan indeks, yang dimulai dari 0 hingga jumlah elemen dikurangi 
- Ukuran array biasanya tetap setelah dideklarasikan.

### Map:

- Map adalah struktur data yang menghubungkan key (kunci) dengan value (nilai).
- Dalam map, setiap key hanya dapat muncul sekali, dan setiap key memiliki nilai yang terkait.
- Data di dalam map tidak diurutkan berdasarkan indeks seperti array, melainkan berdasarkan key.

### Perbedaan Utama:

Array menggunakan indeks numerik untuk mengakses elemen, sementara map menggunakan key yang bisa berupa tipe data apapun.
Ukuran array biasanya tetap, sementara map bisa berubah-ubah seiring dengan penambahan atau penghapusan elemen.


## Kesimpulan
Dalam pemrograman, penggunaan tipe data sangat penting karena memungkinkan kompiler untuk memahami bagaimana data akan digunakan. Terdapat tiga jenis tipe data yang umum digunakan:

Tipe Data Primitif: Merupakan tipe data bawaan yang sudah ditentukan oleh sistem. Contohnya adalah int untuk bilangan bulat, float untuk bilangan desimal, char untuk karakter, dan boolean untuk nilai logika. Tipe data primitif ini memiliki alokasi memori yang sudah ditetapkan.

Tipe Data Abstrak: Merupakan tipe data yang dibentuk oleh programer sendiri. Salah satu contohnya adalah class dalam pemrograman berbasis objek (OOP). Class memungkinkan programer untuk membuat tipe data baru yang terdiri dari berbagai tipe data lainnya. Perbedaan antara struct dan class terletak pada aksesibilitas defaultnya, dimana struct bersifat public dan class bersifat private.

Tipe Data Koleksi: Merupakan tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Contoh tipe data koleksi meliputi array, vector, dan map. Array adalah struktur data statis dengan ukuran tetap, vector adalah struktur data dinamis yang menyediakan alokasi memori otomatis, dan map adalah struktur data yang menghubungkan key dengan value, diimplementasikan sebagai pohon merah-hitam khusus.

## Referensi
- https://staffnew.uny.ac.id/upload/131872515/pendidikan/Bab+II+Keg+Pemb+2_+Struktur.pdf
- https://dibimbing.id/blog/detail/seperti-apa-tipe-data-primitif
- https://www.geeksforgeeks.org/abstract-data-types/
