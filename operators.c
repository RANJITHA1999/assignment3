1)#include <stdio.h>


int main() 			1==5==5
{
                            	  0==5
 printf("%d\n",1==5==5);//0	    0
}

2)#include<stdio.h>              

int main()
{     In post increment the value is first used in the expression and then value is  incremented 
int i =0;
   
printf("%d %d",i,i++);
//1 0 (value of i++=0 and then it incremented and stores i=o)
}

3)#include<stdio.h>
int main()

{
    


int x=5;
   presendence of increment operation is from right to left
 printf("%d %d %d\n",x++,x++,x++); //7 6 5   
}
4)#include<stdio.h>

int main()

{
  int x=2;
  
 printf("%d",++x++);
  //error: lvalue required as increment operand
 printf("%d\n",x++); 
 


}

5)#include<stdio.h>

int main()

{
  int k=1;
   
printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE"); //1==1 is True
}

6)#include<stdio.h>
 
int main()

{
  
int i=5;
   
i=i++ - --i + ++i;        i=(5)-(4)+(5)

printf("%d",i);
//6
}

7)#include<stdio.h>

int main()
{
    this is assignment opertaor example,the operation should be done from right to left
int a=7;
                a=a-6=>7-6=1
a+=a+=a-=6;
             a+=a=>1+1=2
 printf("%d\n",a);
//4 	a+=a=>2+2=4
}

8)#include<stdio.h>

int main()
{
           	
int x=10,y=5,p,q;
  
 p=x>9;
                 10>9(yes its true)
 q=p||(x=5,y=10);
   	   q=1||10=>1
 printf("%d %d %d\n",q,x,y);
//1 10 5
}
9)#include<stdio.h>

int main()

{
  
int x=2,y=1;
 presedence of bitwise operator is more than assignment operator
  y+=x<<=2;
  x<<=2= x<<2=> 2<<2 here performing 2 times left shifting of x=8
 printf("%d %d\n",x,y);
//8 9
}

10)#include<stdio.h>

int main()
{          
int x=2,y=4,z;
  increment operator gets more presendence than multiply and bitwise
  z=y++*x++|y--;       4*2|5   
 printf("%d\n",z);
//13
}

11)#include<stdio.h>

int main()
{

int a=5,b=6,c=7,d;
  bitwise is more presedence than logical operator
  d=a&=b&=c&&a;
   
 printf("%d\n",d);//0
}
12)#include<stdio.h>

int main()
{

int i=10;
   
 i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
 
   printf("%d\n",i);//4  here 10<10 is false so it is printed as four if we have condition that all 3 are true then we get 1 as o/p
}
13)	#include<stdio.h>
int main()
{
	int a=10,b=20;
    a=(a>5||b<=6?40:50);
    printf("%d\n",a);//40
}
14)	#include<stdio.h>
int main()
{
	printf("%x\n",-1>>4);//ffffffff
	printf("%x\n",-1<<4);//fffffff0
}
15)#include<stdio.h>

int main()
{

int x=7;      modulus operator have more presendence than bitwise operator
x=(x<<=x%2);
   x=x<<x%2=>7<<7%2 
 printf("%d\n",x);
//14
}
16)#include<stdio.h>

int main()

{

int a=2,b=5,c=1;
   5>=2>=1=>1 its true
   printf("%d\n",(b>=a>=c?1:0));//1

}
17)#include<stdio.h>

int main()

{

int a=5;
   
 a=a-~a +1;
  
  printf("%d\n",a);
//12
}
18)#include<stdio.h>

int main()

{
   
 int a,b,c,x;
a=b=c=1;
   
 x=--a||++b*(3-1)/2&&b*(--c/3);
  1||1*(2)/2&&1*(1/3)
  printf("%d\n",x);
//0
}
19)#include<stdio.h>

int main()

{
    
 int a,b,c;
   
 a=10;
    
b = -5;
   
 c = 2.5;
   
 printf("%d %d",sizeof(a) + sizeof((++b) *c, b)); //8 606905640
}
20)#include<stdio.h>

int main()

{
   
  int i=5;
  
  i=i++-i;
   i=4-5
 printf("%d",i);//-1


}
