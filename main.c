#include <stdio.h>

int main() {
    /// els}o feladat
    int one, two;
    printf("Kérem adjon meg két számot: ");
    scanf("%d %d", &one, &two);
    if(one > two) {
        printf("A %d és a %d kozul a nagyobb a %d\n", one, two , one);
        printf("A %d és a %d kozul a kissebb a %d\n", one, two , two);
    }
    else if (two > one){
        printf("A %d és a %d kozul a nagyobb a %d\n", one, two , two);
        printf("A %d és a %d kozul a kissebb a %d\n", one, two , one);
    }
    /// Masodik feladat
    /// ez egy geciség és lusta fasz vagyok most googlezni, hogy melyik znaknak melyik száma van KEKW

    /// HARMADIK FELADAT
    /// ewzeket le se baszo, megcsinálom az extra feladatokat mert azoik nincsenek meg neked, gondolom a zadaniek megvannak


    ///negyedik feladat

    double farenheit;
    double celsius;
    printf("Kérem adja meg az F-t: ");
    scanf("%f" , &farenheit);
    celsius = (farenheit -32)*5/9;
    printf("A homerseklet celsiusban: %.2f \n", celsius);
    if (celsius > 100) printf("Forráspont felett!\n");
    else if(celsius<=0) printf("Fagypont alatt!\n");

    
    return 0;

}
