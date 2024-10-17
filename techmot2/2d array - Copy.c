#include<stdio.h>
int main (){
{
int i,w;
int pet[2][3]={{10,20,30},{40,50,60}};
for(i=0;i<2;i++)
{
for(w=0;w<3;w++)

{
printf("[%d,%d]=%d\n",i,w,pet[i][w]);
}
}
}
return 0;
}



    