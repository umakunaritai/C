#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        //printscreen(start);
        
        //��������.����菜���ď������Ă�����
        char str[100];
        char *p2;
        for(i=0;i<count;i++){

                if(i==0){
                
                        p = start;

                }else{
                        p = p -> next;

                }
                strcpy(str,(p -> array));
                //printf("%s\n",str);

                p2 = strtok(str,".");
                printf("%s ",p2);

                while(p!=NULL){

                        p2 = strtok(NULL,".");

                        if(p2!=NULL){
                                printf("%s ",p2);

                        }else{
                                break;

                        }
                }
                printf("\n");

        }


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
