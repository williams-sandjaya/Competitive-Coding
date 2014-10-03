/*
                                   M-------- 1st generation 
                                   
                              /        \
                          M             F ------- 2nd generation
                        /    \       /   \
                      M      F      F     M
                                    |
                                   3rd child of 3rd generation

*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int iters;                                                      /* number of test cases */
    int gen;                                                        /* generation */
    long long int kid;                                              /* kid number */
    int dude;                                                       /* our answer */
    int tmp;
    
    scanf("%d", &iters);
    while (iters--)
    {
        scanf("%d %lld", &gen, &kid);
        
        long long int trace[gen];
        memset(trace, 0, sizeof(long long int)*gen); // initialises trace[] from trace[0] to trace[gen] TO 0 //* is multiplication
        
        tmp = gen;
        while (tmp--) { trace[tmp] = kid; kid = (kid+1)/2; }//send the trace back to Raj by going up the family tree
        //follows the numbering of the child in that particular generation
        
        // tmp ko ghata ke barhao fhir se
        dude = 1;
        while (tmp++ < gen-1)  /* 1st gen is a dude, now go down the family tree changing gender wherever necessary */
        {
            if (trace[tmp] == trace[tmp-1]*2) dude = !dude; // 5(F),3(F),2(F),1(M) // for gen =4,kid=5
        }
        
        printf(dude ? "Male\n" : "Female\n"); /* if dude == 1, its really a dude, otherwise a dudette */
    }
    return 0;
}
