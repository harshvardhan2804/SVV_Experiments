#include<stdio.h>
#include<math.h>

int z=-1;
int ans=0;



int check(int b)
{  
    if(b<0 || b>999999999)
    {
         printf("invalid input");
         return 0;
    }
    else
    {
        return 1;
    }

}

int factors(int g)
{    int count=1;
    for(int i=1;i<=g;i++)
    {  
        if(g%i==0)
        {
           count++;
        }
    }
    return count;
}

void max(int f, int e){
   if(z<e)
   {
    z=e;
   }
   if(z==e)
   {
    ans=f;
   }

}

void print(int y){
    printf("%d",y);
}

void triplets(int c){   
    
    int d=0;

    for(int i=0;i<3;i++)
    {   
        d=d+(c%10)*pow(10,2-i);
        c=c/10;
    }

    max(d,factors(d));
    
    if(c%10 > 0 || (c/10)%10 > 0 || (c/100)%10 > 0)
    {
      triplets(c);
    }
   
}

int main(){
int a;
printf("Testing the check function for input -1 \n");
print(check(-1));
printf("Testing the check function for input 0 \n");
printf("0");
printf("Testing the check function for input 999999999 \n");
triplets(999999999);
print(ans);
printf("Testing the check function for input 1000000000 \n");
print(check(1000000000));
printf("Enter a number between 0-999999999:");
scanf("%d",&a);
if(a!=0){
    if(check(a))
{  
    triplets(a);
    print(ans);
}

}
else
{
    printf("0");
}


return 0;
}


