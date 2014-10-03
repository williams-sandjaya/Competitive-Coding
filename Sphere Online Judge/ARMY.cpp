#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    scanf("%d", &test);
    while (test--) {
        int NG, NM, i, j;
        scanf("%d %d", &NG, &NM);
        int MonstersNG[NG], MonstersNM[NM];
        for (i = 0; i < NG; i++)
            scanf("%d", &MonstersNG[i]);
        for (i = 0; i < NM; i++)
            scanf("%d", &MonstersNM[i]);
        sort(MonstersNG, MonstersNG + NG);
        sort(MonstersNM, MonstersNM + NM);
        i = 0, j = 0;
        while (1) {
            if (MonstersNG[i] == MonstersNM[j])
                j++;
            else {
                if (MonstersNG[i] < MonstersNM[j])
                    i++;
                else
                    j++;
            }
            if (i == NG)
                break;
            if (j == NM)
                break;
        }
        
        if (j == NM)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
}
