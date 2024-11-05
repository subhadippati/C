#include<stdio.h>
int main() {
    
char str []="college wallah ";
// char* ptr = &str[0];// as we know it will store the the adress of str in pointer ptr;
char* ptr = str; // it will point to the whole str but which is str[0]; so the both will same
printf("%p \n",ptr );//it will the print a adress of C
printf("%p \n",str);//simillary , it will the print the adress of str which will be the  first element; & - is no needed but we can also use ;

//we can print college wallah using  loop and pointer fetching processs
int i = 0;
while(*ptr!='\0'){
    printf("%c",*ptr); //basically *ptr fecting the value 
    i++;
    ptr ++;
}
printf("\n");
//now ;
char* po = "physics wallah";
printf("%s \n",po);//it will print the string "physics wallah " , so in pointer we are using string 
//but we canot update this using ptr[0] or ptr[1]='s'..if we try to do this it will show error
//but we can update the whole string which is not possible in normal '
po ="nan";
printf("%s\n",po);

//now let do some expirement 
char mtr[] = "coding";
char* rtr = mtr;
rtr = "nocode";
printf ("%s ",mtr);
//so in this case mtr will be coding as because it will point first after that when we will put new value pointer will shift but the 
//mtr will be same 
char xtr[] = "coding";
char* utr = xtr;
*utr = 'n';
printf ("\n%s ",xtr); /// it will print noding means it is changing because it will work for single charcter as it going to the adress and feteching where it find c as in 
//first adress there is c so will convert or modified into  n and then it will print.



//now copy--shallow and Deep copy
char s1 []="phsics";
char* s2 = s1;
s1[0]='m';
printf("\n%s",s2); // there will be change in char normal to  pointer copy 
//because it will tracked basics of adress and it is known as shallow copy.

//shallow copy refers that what ever chages  will do in the original it will reflects to the copy.

char c1 []="chemistry";
char c2[] = "chemistry";
c1[0]='m';
printf("\n%s",c1);
printf("\n%s",c2);
//deep copy - where we can see both string element is same but boths adress are different as both have different variable so changing of first one will not make change in second one.

//important points - if we dp c1=c2 it will give an error even we decalre the size but in case of pointer char* =s1 ; char*2 =s2 it will work in copy but we cant modify as it is read only behaviour. 

// we can perform this task usin function of string - str(s1,s2) which is a deep copy as new string forms;

return 0;
}


