#include <iostream>



using namespace std;

void baliknama();



int main()

{

    baliknama();

}

void baliknama ()

{int i,j, count;

  char nama[30];

  cout << "Program Untuk Membalikkan Nama Anda";

  cout << "\n\nMasukkan nama Anda = "; cin.ignore (); cin.getline(nama,sizeof(nama));

  cout << endl;

  

  for (i=0; i<=nama[i];i++)

  {

  count = i+1;

  }

  cout << "NAMA TERBALIK = "; 

  for (j=count; j>=0;j--)

  {

  cout << nama[j];

  }

  cout <<endl;

}
