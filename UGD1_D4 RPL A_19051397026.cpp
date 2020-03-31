#include <iostream>
#include <string>
using namespace std;

void SalahMemasukkan()
{
    system("cls");
    cout << "Anda Salah Memasukkan Input\n\n" << endl << endl;
    system("pause");
}

void KeluarProgram()
{
    system("cls");
    cout << "Anda Keluar Program \n\n";
    system("pause");
}


int main()
{
	do
	{
        char kata[100000];
        system("cls");
        cout << "Program Membalikan Kata\n\n";
        system("pause");
        system("cls");
        unsigned short int pilihan;
        cout << "Apakah anda ingin melanjutkan ?\n\n1. Iya \n2. Tidak \n\nPilihan: ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            system("cls");
            cout << "Masukkan Kata: \n\n";
            cin.ignore();
            cin.getline(kata, 100000);
            cout << endl << endl;
            system("pause");
            system("cls");
            int panjang = strlen(kata);
            cout << "Jumlah Huruf: " << panjang << endl << endl;
            cout << "Kata Sebelum Dibalikkan: \n";
            char stacklama;
            char stackbaru;
            for (int x = 0; x < panjang; x++)
            {
                stacklama = kata[x];
                cout << kata[x];
            }
            cout << "\n\nKata Sesudah Dibalikkan: \n";
            for (int x = panjang; x >= 0; x--)
            {
                stackbaru = kata[x];
                cout << kata[x] << " ";
            }
            if (stacklama == stackbaru)
            {
                cout << "\n\nPalindrome";
            }
            else
            {
                cout << "\n\nBukan Palindrome";
            }
            cout << endl << endl;
            system("pause");
            system("cls");
        }
        else if (pilihan == 2)
        {
            KeluarProgram();
            return 0;
        }
        else
        {
            SalahMemasukkan();
            return 0;
        }
	} while (true);
}
