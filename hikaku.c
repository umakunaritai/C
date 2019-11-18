#include <stdio.h>

void main (void){

        char c[] = {'A','A','A','B','B','B','B','D','F','F','G','X'};
        int t[] = {65,55,6,1,36,6,6,86,10,30,20};

        int k=0;
        int sum=0;
        int amount=0;
        for(k=0;k<=11;k++){

                sum += t[k];
                if(c[k]==c[k+1]){
                        printf("コード%c    %d\n",c[k],t[k]);

                }else{

                        if(c[k]!='X'){
                                printf("コード%c    %d\n",c[k],t[k]);
                                printf("    小計   %d\n",sum);
                                amount += sum;
                                sum=0;
                        }else{

                                printf("  総合計   %d",amount);
                                break;
                        }

                }
        }
}
