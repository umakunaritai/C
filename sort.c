#include <stdio.h>

void main (void){

        int h[] = {10,20,17,19,100};
        int k=0;
        int i=0;
        int min=0;
        int number=0;


        for(k=0;k<=4;k++){
                min = h[k];
                number = k;

                for(i=k+1;i<=4;i++){
                        if(min>h[i]){

                                min = h[i];
                                number = i;
                        }else{

                        }


                }

                //交換
                //h[k] h[i]を入れ替える
                //すなわち、h[k] h[number]をいれかえる
                h[number] = h[k];
                h[k] = min;


        }
        //表示
        for(i=0;i<=4;i++){
                printf("%d ",h[i]);
        }
}
