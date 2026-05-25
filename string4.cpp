#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[30];

int vol=0;   int con=0;

//fgets(str,sizeof(str),stdin);
gets(str);

for(int i=0;str[i]!='\0';i++){
if(toupper(str[i]=='A')||toupper(str[i]=='E')||toupper(str[i]=='I')||toupper(str[i]=='O')||toupper(str[i]=='U'))
//if(toupper(str[i]=='A'||toupper(str[i]=='E')))
//||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
    vol++;
else
    con++;

}
printf("the collection of the vowel characters:%d\n\n",vol);
printf("the collection of the consonent characters:%d",con);

/*gets(str);
strlwr(str);
strupr(str);
strlen(str);
printf("the string function is :%s\n\n",strlwr(str));
printf("the string function is:%s\n\n",strupr(str));
printf("the string function is:%s\n\n",strlen(str));
*/

    return 0;
}
