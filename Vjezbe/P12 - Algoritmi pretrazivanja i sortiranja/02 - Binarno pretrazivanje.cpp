/* ---Pseudo kod--- */
/*
Po�etak

    U�itavanje polja
    Prepicivanje polja: a[0] = A[1], a[1] = A[2],..., a[n-1] = A[n]
    Sortiranje prepisanog polja
    prvi = 1, zadnji = n + 1, na�en = false
    U�itavanje tra�enog klju�a: broj

    ponavaljanje sve dok je(na�en == false && prvi <= zadnji)
        srednji = (prvi + zadnji)/2
        if(broj < clan[srednji]) // ispituje se prva polovica
            zadnji = srednji - 1
        if(broj == clan[srednji]) // klju� je na�en
            na�en = true
        if(broj > clan[srednji]) // ispituje se druga polovica
            prvi = srednji + 1
    kraj ponavaljanja

    if(na�en == true)
        ispi�i: Broj je na�en
    else if(na�en == false)
        ispi�i: Broj nije na�en
Kraj
*/

#include <iostream>

template<typename TipKontejnera, typename TipKljuc>
int VratiPoziciju(const TipKontejnera * niz, const int duzina, const TipKljuc kljuc)
{
    int prvi = 1, zadnji = duzina;
    int srednji = 0;
    while (prvi <= zadnji)
    {
        srednji = (prvi + zadnji) / 2;

        if (kljuc < niz[srednji])
            zadnji = srednji - 1;
        else if (kljuc > niz[srednji])
            prvi = srednji + 1;
        else
            return srednji;
    }

    return 0;
}

int main()
{
    // ----------------------------------------------------------------------------------------------- //

    int niz[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int noviNiz[11];
    for (int i = 0; i < 10; i++)
        noviNiz[i + 1] = niz[i];

    std::cout << VratiPoziciju(noviNiz, 11, 5) -1 << std::endl;
    std::cout << VratiPoziciju(noviNiz, 11, 12) - 1 << std::endl;

    // ----------------------------------------------------------------------------------------------- //
    
    char nizChar[10] = "abcdefghi";

    int noviNizChar[11];
    for (int i = 0; i < 10; i++)
        noviNizChar[i + 1] = nizChar[i];

    std::cout << VratiPoziciju(noviNizChar, 11, 'e') - 1 << std::endl;
    std::cout << VratiPoziciju(noviNizChar, 11, 'j') - 1 << std::endl;

    // ----------------------------------------------------------------------------------------------- //
    
    
    system("pause>0");
    return 0;
}