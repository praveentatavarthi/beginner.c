#include <stdio.h>

int main()
{
    int f;
char a;
scanf("%c",&a);
f=a;
if(f>96&&f<123)
{
 if(f==97||f==101||f==105||f==111||f==117)
 {
     printf("Vowel");
 }
 else
 {
     printf("Consonant");
}
}
else
{
    printf("invalid");
}

}
