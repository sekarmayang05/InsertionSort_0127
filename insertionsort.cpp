#include <iostream>
using namespace std;

int arr [20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{// Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
        cin >> n; // memanggil variable inputan n
    
if (n <= 20)
{ // Mmembuat Kondisi n tidak lebih dari 20
break;
}
else 
{
    cout << "\nArray yang anda masukkan maksimal 2o elemen.\n"; // Menampilkan pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program
cout << "===============" << endl; // Membuat tampilan susunan data elemen array
cout << "Masukkan Element Array" << endl;
cout << "==============" << endl;

for  (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
{
    cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau menginputkan nilai data n
    cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
}
}


void display()
{
    cout << endl; // Output baris kosong 
    cout << "====================" << endl; 
    cout << "Total Pass = " << n - 1 << endl; // count element movement
    cout << "===================" << endl; // Output ke layar
    cout << "Element Array yang telah tersusun" << endl; // Output ke layar
    cout << "===================" << endl; // Output ke layar

for (int j = 0; j < n; j++)
{ // Looping dengan j dimulai dari 0 hingga n-1
cout << arr[j] << endl; // Output ke laayr
}
cout << endl; // Output baris kosong
}

int main()
{
    input();
    insertionSort();
    display();
    system("Pause");
    return 0;
}