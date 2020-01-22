//Given a string s , consisting of alphabets and digits, find the frequency of each digit in the given string.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT
    Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.
    Sample Input
    a11472o5t6
    Sample Output
    0 2 1 0 1 1 1 1 0 0 */
    int arr[10]={0};
    char s[1024];
    int i,j,k=48;
    /*printf("Enter a string which contains numbers in it so that wee can estimate the count of number present in the string\n");*/
    scanf("%s",s);
    for(i=0;i<10;i++)
    {
        for(j=0;j<=strlen(s);j++)
        {
            if(isdigit(s[j]))
            {
                if(k == s[j])
                arr[i]++;
            }
        }
        k++;
        printf("%d ",arr[i]);
    }
    return 0;
}
