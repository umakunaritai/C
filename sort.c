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

                //����
                //h[k] h[i]�����ւ���
                //���Ȃ킿�Ah[k] h[number]�����ꂩ����
                h[number] = h[k];
                h[k] = min;


        }
        //�\��
        for(i=0;i<=4;i++){
                printf("%d ",h[i]);
        }
}
