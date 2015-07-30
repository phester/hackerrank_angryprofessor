#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    <summary>Count # of students who arrived on time.</summary>
    <param name="n">Number of students</param>    
    <param name="a">Array of times</param>    
*/
int verify_class(int n, int *a)
{
    int t; 
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= 0)         
            t++;            
    }   
    
    return t;
}

/*
    <summary>Determine if class should be cancelled. Print YES if so, NO if not.</summary>
    <param name="g">Min number required to have the class.</param>    
    <param name="t">Total number on time.</param>    
*/
void print_results(int g, int t)
{   
    if(t >= g) 
        printf("NO\n"); 
    else 
        printf("YES\n");
}

int main() {        
    // I.   Get number of test cases.
    // II.  Handle the amount of cases defined.
    // II.  A.  Read first two decimals. First is student count, second is
    //          total number needed for course to commence.
    // II.  B.  Read student arrival times into array.
    // II.  C.  Count students that arrived on time.
    // II.  D.  Print results from count. Display YES if cancelled, NO if not.
    
    // I.
    int t;        
    scanf("%d", &t);
    
    
    // II.
    for(int i = 0; i < t; i++)
    {
        // II A.
        int n, g;
        scanf("%d %d", &n, &g);        
        
        // II B.
        int times[n];                
        for(int k = 0; k < n; k++)
        {
            scanf("%d", &times[k]);
        }
        
        // II C.
        int t = verify_class(n, times);                
        
        // II D.
        print_results(g, t);
    }
    
    return 0;
}
