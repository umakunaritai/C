//2�����z��̓��I�m��
#include <stdio.h>
#include <stdlib.h>

int main(void){

        //�������m��
        char **p;
        int number=0;
        printf("���͂���s������͂��Ă������� ");
        scanf("%d",&number);
        p = (char **)malloc(sizeof(char *) * number); 
        char **start = p;
        printf("�m�ۂ����������̃A�h���X %p\n",*start);

        int i=0;
        int num = 256;
        for(i=0;i<number;i++){

                p[i] = (char *)malloc(sizeof(char) * num);
        }

        //����
        for(i=0;i<number;i++){

                printf("���������͂��Ă������� ");
                scanf("%s",p[i]);

        }


        //�o��
        printf("----------�o�͊J�n------------\n");
        for(i=0;i<number;i++){

                printf("%s\n",p[i]);

                if(i==number-1){
                        printf("-----------�o�͏I��--------------\n");
                        break;

                }else{

                }
        }

        free(p);
        printf("�ŏ��Ɋm�ۂ����������̃A�h���X %p\n",*start);



        return 0;
}
