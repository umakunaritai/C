#include <stdio.h>
#include <stdlib.h>

//�\���̐錾
struct ADDRESS{

        char array[100];
        struct ADDRESS* next;
};
typedef struct ADDRESS address;

//�v���g�^�C�v�錾
void printscreen(address *point);

//main�֐�
int main(void){

        //����
        int count;
        scanf("%d",&count);

        /*
        address *p = (address *)malloc(sizeof(ADDRESS) * count);
        address *start = p;
        */

        int i=0;
        address *p;
        address *start;
        for(i=0;i<count;i++){

                if(i==0){
                        p = (address *)malloc(sizeof(address));
                        start = p;

                }else{
                        p -> next = (address *)malloc(sizeof(address));
                        p = p -> next;
                        

                }
                printf("���������m�ۂ��܂���%p\n",p);

                scanf("%s",p -> array);
                p -> next = NULL;

                //p++;
        }

        //�m�F�o��
        printscreen(start);

}

void printscreen(address *point){

        printf("-----------�o�͊J�n-------------\n");
        printf("%s\n",point -> array);
        printf("%p\n",point -> next);

        if(point -> next == NULL){

        }else{

                printscreen(point -> next);
        }

        return ;
}
