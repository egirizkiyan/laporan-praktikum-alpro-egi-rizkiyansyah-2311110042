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