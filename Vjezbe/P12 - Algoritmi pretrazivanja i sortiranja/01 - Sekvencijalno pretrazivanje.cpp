/* ---Pseudo kod--- */
/*
Po�etak

U�itavanje polja (npr. niza)
na�en = false
U�itavanje tra�enog klju�a: broj

ponavaljanje(int i = 0; i < n; i++)
    if(kljuc == niz[i])
        na�en = true
        kraj ponavaljanja

if(na�en == true)
    ispi�i: Broj je na�en
else if(na�en == false)
    ispi�i: Broj nije na�en

Kraj
*/


#include <iostream>

template<typename TipKontejner, typename TipKljuc>
int VratiPoziciju(TipKontejner * Pocetak, TipKontejner * Kraj , const TipKljuc kljuc)
{
    int i = 0;
    while (Pocetak != Kraj)
        if (*Pocetak == kljuc)
            return i;
        else
            Pocetak++, i++;
    return -1;
}

int main()
{
    // ----------------------------------------------------------------------------------------------- //
    
    int niz[10] = { 3, 4, 12, 8, 1, 6, 15, 7, 0, 2 };
    std::cout << VratiPoziciju(niz, niz + 10, 13) << std::endl;

    // ----------------------------------------------------------------------------------------------- //
    
    char nizChar[10] = "aBbAjTt+1";
    std::cout << VratiPoziciju(nizChar, nizChar + 10, 'A') << std::endl;

    // ----------------------------------------------------------------------------------------------- //

    char ** mjesec = new char*[12];
    mjesec[0] = "Januar"; mjesec[1] = "Februar"; mjesec[2] = "Mart"; mjesec[3] = "April";
    mjesec[4] = "Maj"; mjesec[5] = "Juni"; mjesec[6] = "Juli"; mjesec[7] = "August";
    mjesec[8] = "Septembar"; mjesec[9] = "Oktobar"; mjesec[10] = "Novembar"; mjesec[11] = "Decembar";

    std::cout << VratiPoziciju(mjesec, mjesec + 12, "Juli") + 1 << std::endl;
    delete[] mjesec;

    // ----------------------------------------------------------------------------------------------- //

    system("pause>0");
    return 0;
}