#include <stdio.h>
#include <math.h>
#include "my_mat.h"


int main(){
char d;

while (d!='D')
{
 scanf("%c",&d);

    if(d=='A'){
    function1();
    }

 if(d=='B'){
 int i; int j;
 scanf("%d%d",&i,&j);
 function2(i,j);    
 }

    if(d=='C'){
        int i; int j;
        scanf("%d%d",&i,&j);
        function3(i,j);
    }

 }
return 0;
}
