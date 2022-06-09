#include<stdio.h>
int romanToInt(char *s){
    int i=0;int flag=0; int ni=1;
    int value=0;
while(s[i]!='\0')
{
    switch(s[i])
    {
        case 'I':
            if(s[ni]=='V'|| s[ni]=='X')
               flag=1;
            else
                value=value+1;
            break;
        case 'V':
            if (flag==1)
            {
                value=value+4;
                flag=0;
            }
            
            else
                value=value+5;
            break;
        case 'X':
            if(flag==1)
            {
                value=value+9;
                flag=0;
            }
            
            else
            {
                if(s[ni]=='L' || s[ni]=='C')
                    flag=2;
                else
                value=value+10;
            }
                
            break;
        case 'L':
            if(flag==2)
            {
                value=value+40;
                flag=0;
            }
            else
                value=value+50;
            
            break;
        case 'C':
            if(s[ni]=='D' ||s[ni]=='M')
            {
                flag=3;
            }
            else if(flag==2)
            {
                value=value+90;
                flag=0;
            }
            else
                value=value+100;             
            break;
        case 'D':
            if(flag==3)
            {
                value=value+400;
                flag=0;
            }
                
            else
                value=value+500;
            break;
        case 'M':
            if(flag==3)
            {
            value=value+900;    
                flag=0;
            }
            value=value+1000;
            break;
       }
    i++;ni++;
}
    return value;
}

