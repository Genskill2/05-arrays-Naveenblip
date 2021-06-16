/* Enter your solutions in this file */
#include <stdio.h>
int max(int num[], int size)
{
  int max= -999999;
  for(int i=0;i<size;i++)
  {
    if(num[i]>max)
    {
      max= num[i];
    }
  }
  return max;
}

int min(int num[], int s)
{
  int min= 999999;
  for(int i=0;i<s;i++)
  {
    if(num[i]<min)
    {
      min= num[i];
    }
  }
  return min;
}

float average(int num[], int s)
{
  float total = 0;
  for(int i=0;i< s;i++)
  {
    total +=num[i];
  }
  return (total/s);
}

int mode(int num[], int s)
{
  int c[s];
  int index =0;
  int max = -999999;
  
  for(int x=0;x<s;x++)
  {
    c[x]=0;
  }
  
  for(int i =0; i<s; i++)
  {
    for(int j=0; j< s; j++)
    {
      if (num[i] == num [j])
      {
        c[i]++;
      }
    }
  }
  
  for(int k= 0;k<s;k++)
  {
    if(c[k] > max)
    {
      index=k;
    }
  }
  return(num[index]);
}

int factors(int num, int prf[])
{
    int temp=num;
    int i=0;
    int pf[]={2,3,5,7,9,11,13,17,19};
    int prno=(int)(sizeof(pf)/sizeof(int));
    for(;temp!=1;i++)
    {
        for(int j=0;j<prno;j++)
        {
            if((temp%pf[j])==0)
            {
                prf[i]=pf[j];
                temp/=pf[j];
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return i;
} 
