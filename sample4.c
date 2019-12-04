//2次元配列の動的確保
#include <stdio.h>
#include <stdlib.h>

int main(void){

        //メモリ確保
        char **p;
        int number=0;
        printf("入力する行数を入力してください ");
        scanf("%d",&number);
        p = (char **)malloc(sizeof(char *) * number); 
        char **start = p;
        printf("確保したメモリのアドレス %p\n",*start);

        int i=0;
        int num = 256;
        for(i=0;i<number;i++){

                p[i] = (char *)malloc(sizeof(char) * num);
        }

        //入力
        for(i=0;i<number;i++){

                printf("文字列を入力してください ");
                scanf("%s",p[i]);

        }


        //出力
        printf("----------出力開始------------\n");
        for(i=0;i<number;i++){

                printf("%s\n",p[i]);

                if(i==number-1){
                        printf("-----------出力終了--------------\n");
                        break;

                }else{

                }
        }

        free(p);
        printf("最初に確保したメモリのアドレス %p\n",*start);



        return 0;
}
