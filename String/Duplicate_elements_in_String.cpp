//using hashing
#include<iostream>
#include<string.h>
using namespace std;
#define num_of_chars 256

//array count is filled with freq of each character 
void fillcharcount(char *str,int *count)
{
    for(int i=0;*(str+i);i++)
    count[*(str+i)]++;
}

void print_Dup(char *str)
{
    int *count=(int*)calloc(num_of_chars,sizeof(int));
    fillcharcount(str,count);
    for(int i=0;i<num_of_chars;i++)
    if(count[i]>1)
    printf("%c , count=%d \n",i,count[i]);

    free(count);
}
int main()
{
    char str[]="abcabcaabccccba";
    print_Dup(str);
    return 0;

}