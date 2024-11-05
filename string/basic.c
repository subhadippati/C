// we can write arr[i] in array and string in another form i[arr];*(arr+i);*(i+arr)

// null charchter '\0' whoese ascii value is 0 and it not used to print
//  two new in build function - put(str),get(str) with a string header file
#include <stdio.h>
#include <strings.h>

int main()
{
    int arr[] = {'h', 'e', 'l', 'l', 'l', 'o'}; // as like 1d array we can do this
    for (int i = 0; i <= 5; i++)
    {
        printf("%c", arr[i]);
    }

    //------------------------
    printf("\n");
    //------------------------


    char brr[] = "hello world\0";
    for (int i = 0; brr[i] != '\0'; i++)
    { // here we are using null charcter for printing at the end
        printf("%c", brr[i]);
    }

    //------------------------
    printf("\n");
    //------------------------

    char str[] = "hello world";
    for (int i = 0; brr[i] != '\0'; i++)
    { // compiler automatically put one null caracter if it is not there
        printf("%c", str[i]);
    }

    //we can print string without using loop by two ways one is %s and put;
    printf("%s ",str);
     puts(str); // it will print the string and automatically move to next line .

   
    
    str[1] = 65; 
    // as like array we can modify the value;
    str[0] = 'c';
    //-----------------------
   
    printf("%c ", str[1]);
    printf("%s", str[1]); //not printing;

    //------------------------
    printf("\n");
    //------------------------
   // similary ther get function get(str)--but it will show warning so intead of that we will use scanf in another format;
//we can take int put in two ways (next page basic2)

    return 0;
}
