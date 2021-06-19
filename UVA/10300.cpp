#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int weith=40,height=40,gameover;
int x,y,fruitX,fruitY,score,flag;
int tailX[100],tailY[100];
int counttail=0;
void setup()
{
  labal1:
 gameover=0;
 x=weith/4;
 y=height/4;
 fruitX=rand()%40;
 if(fruitX==0)
 goto labal1;
 labal2:
 gameover=0;
 x=weith/4;
 y=height/4;
 fruitY=rand()%40;
 if(fruitY==0)
 goto labal2;


}
void drow()
{
 int i,j;
 system("cls");
 for(i=0;i<weith;i++)
    {
       for(j=0;j<height;j++)
        {
            if(i==0||i==height-1||j==0||j==weith-1)
            {
              printf("#");
 }

              else
            {
            int ch=0;
            if(i==x&&j==y)
            printf("O");
            else if(i==fruitX&&j==fruitY)
            printf("F");
            else
            {
              for(int k=0;k<counttail;k++) //define the K
 {
 if(i==tailX[k]&&j==tailY[k])
 {
   printf("o");
   ch=1;
     }
 }
 if(ch==0)                                           //define the K
              printf(" ");
 }
              }
            }
       printf("\n");
   }
   printf("SCORE=%d",score);
}
void input()
{
 if(kbhit())
 {
 switch(getch())
 {
 case'a'://aswz
       flag=1;
       break;
 case's':
 flag=2;
 break;
 case 'w':
 flag=3;
 break;
 case 'z':
 flag=4;
 break;

 case 'x':
 gameover=1;
 break;

 }
 }
}
void makelogic()
 {
  int i,j;
  int prevX=tailX[0];
  int prevY=tailY[0];
     int prev2X,prev2Y;
  tailX[0]=x;
  tailY[0]=y;
  //int prev2X,prev2Y;
  for(int i=1;i<counttail;i++)
  {
  prev2X=tailX[i];
  prev2Y=tailY[i];
  tailX[i]=prevX;
  tailY[i]=prevY;
  prevX=prev2X;
  prevY=prev2Y;
  }
  switch(flag)
  {
  case 1:
  y--;
  break;
  case 2:
  y++;
  break;
 case 3:
 x--;
 break;
 case 4:
  x++;
  break;
  default:
  break;
  }
  if(x<0||x>weith||y<0||y>height)
  gameover=1;
  for(i=0;i<counttail;i++)
  {
   if(x==tailX[i]&&y==tailY[i])
   gameover=1;
  }
  if(x==fruitX&&y==fruitY)
      {
        labal3:
// gameover=0;
// x=weith/2;
// y=height/2;
 fruitX=rand()%40;
    if(fruitX==0)
 goto labal3;
 labal4:
// gameover=0;
// x=weith/2;
// y=height/2;
 fruitY=rand()%40;
 if(fruitY==0)
 goto labal4;
 score+=10;
 counttail++;

   }
 }
int main()
{
int m,n;
   int c;
   lable5:
 setup();
 while(!gameover)
 {
   drow();
      input();
      makelogic();
      for(m=0;m<1000;m++)
        {
         for( n=0;n<10000;n++)
         {

 }
 }
 }
 printf("\n press  y to continue again:");
 scanf("%c",&c);
 if(c=='y'||c=='Y')
 {
 goto lable5;
 }
 return 0;
}
