#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_upper(char character)
{  
    bool ismatched=false;
    if(character >= 65 && character <= 90)
    {
        ismatched=true;
    }
    return ismatched; 
}
bool is_lower(char small)
{  
    bool ismatched=false;
    if(small >= 97 && small <= 122)
    {
        ismatched=true;
    }
    return ismatched; 
}
bool check(char password[])
{
    bool ismatched=false;
    int uppercase=false,lowercase=false,digit=false;
    for(int i=0;password[i] !='\0';i++)
    {
        if(is_upper(password[i]))
        {
            uppercase=true;
        }
        else if(is_lower(password[i]))
        {
            lowercase=true;
        }
        else if(isdigit(password[i]))
        {
            digit=true;
        }
        if(uppercase && lowercase && digit)
        {
            ismatched=true;
            break;
        }
    }  
return ismatched;
}
int main() {
    int n;
	scanf("%d",&n);
	char password[n][100];
	for(int i=0;i<n;i++)
	{
	    scanf("%s",password[i]);
	}
    for(int j=0;j<n;j++)
    {
        
        bool n=check(password[j]);
        if(n)
        {
            printf("Yes\n"); 
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
    // printf("%d\n",is_upper('c'));
    // printf("%d\n",is_upper('C'));
    // printf("%d\n",is_upper('1'));
}
