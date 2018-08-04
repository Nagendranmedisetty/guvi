#include<stdio.h>
#include<conio.h>
#include<math.h>
int asciiToBinary(int input) {
        int result = 0, i = 1, remainder;
        /* convert decimal to binary format */
        while (input > 0) {
                remainder = input % 2;
                result = result + (i * remainder);
                input = input / 2;
                i = i * 10;
        }
        /* print the resultant binary value */
        return(result);
}
int rule150(int a, int b, int c) {
    int ruleset[10]={0,1,0,0,1,0,1,1,0,0};
    if      (a == 1 && b == 1 && c == 1) return ruleset[1];
    else if (a == 1 && b == 1 && c == 0) return ruleset[2];
    else if (a == 1 && b == 0 && c == 1) return ruleset[3];
    else if (a == 1 && b == 0 && c == 0) return ruleset[4];
    else if (a == 0 && b == 1 && c == 1) return ruleset[5];
    else if (a == 0 && b == 1 && c == 0) return ruleset[6];
    else if (a == 0 && b == 0 && c == 1) return ruleset[7];
    else if (a == 0 && b == 0 && c == 0) return ruleset[8];
    return 0;
}
int rule102(int a, int b, int c)
{
    int ruleset[10]={0,0,1,1,0,0,1,1,0,0};
    if      (a == 1 && b == 1 && c == 1) return ruleset[1];
    else if (a == 1 && b == 1 && c == 0) return ruleset[2];
    else if (a == 1 && b == 0 && c == 1) return ruleset[3];
    else if (a == 1 && b == 0 && c == 0) return ruleset[4];
    else if (a == 0 && b == 1 && c == 1) return ruleset[5];
    else if (a == 0 && b == 1 && c == 0) return ruleset[6];
    else if (a == 0 && b == 0 && c == 1) return ruleset[7];
    else if (a == 0 && b == 0 && c == 0) return ruleset[8];
    return 0;
}
void nextgen(int arr[],int next[])
{
    int i,pos=1;
    for(i=1;i<9;i++)
    {
        if(pos<5 && pos>0)
        {
            next[pos]=rule150(arr[pos-1],arr[pos],arr[pos+1]);
        }
        else if(pos<9 && pos>4)
        {
            next[pos]=rule102(arr[pos-1],arr[pos],arr[pos+1]);
        }
        pos++;
    }
    for(i=0;i<10;i++)
        arr[i]=next[i];
}
int main()
{
    char c;
    int count,ascii,i=0,j=0,n;
    int numberArray[10],nextgenr[10];
    nextgenr[0]=0;
    nextgenr[9]=0;
    printf("enter a character\n");
    scanf("%c", &c);
    ascii = c;
    int binary = asciiToBinary(ascii);
    printf("binary is %d\n",binary);
    count=8;
    n=binary;
    //converting number to array
    if(count!=0)
    {
      numberArray[0]=0;
      numberArray[9]=0;
      numberArray[1]=0;
      while (n != 0)
      {
        numberArray[count--] = n % 10;
        n /= 10;
      }
    }
     //change below 6 to 12 for a complete loop
     for(j=0;j<6;j++)
     {
        nextgen(numberArray,nextgenr);
     }
     for(i=1;i<9;i++)
        printf("%d",numberArray[i]);
     printf("\n");
     int sum=0;
     for(i=8;i>0;i--)
        sum += numberArray[i]*pow(2,(8-i));
     char q = sum;
     printf("%c",q);
     return 0;
}
