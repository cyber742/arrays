#include<stdio.h>
int main (){
{
int i,w,y;
int pet[2][2][3]={10,20,30,40,50,60,70,80,90,100,110,120};
for(i=0;i<2;i++)
{
for(w=0;w<2;w++)
{
for(y=0;y<3;y++)
{
printf("[%d,%d,%d]=%d\n",i,w,y,pet[i][w][y]);
}
}
}
}
return 0;
}



    