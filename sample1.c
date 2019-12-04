#include <stdio.h>
#include <stdlib.h>

//構造体宣言
struct ADDRESS{

        char array[100];
        struct ADDRESS* next;
};
typedef struct ADDRESS address;

//プロトタイプ宣言
void printscreen(address *point);

//main関数
int main(void){

        //入力
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
                printf("メモリを確保しました%p\n",p);

                scanf("%s",p -> array);
                p -> next = NULL;

                //p++;
        }

        //確認出力
        printscreen(start);

}

void printscreen(address *point){

        printf("-----------出力開始-------------\n");
        printf("%s\n",point -> array);
        printf("%p\n",point -> next);

        if(point -> next == NULL){

        }else{

                printscreen(point -> next);
        }

        return ;
}
