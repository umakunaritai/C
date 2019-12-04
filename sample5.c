#include <stdio.h>
#include <stdlib.h>

//構造体宣言
struct SEISEKI{

        int kokugo;
        int math;
        int English;
        struct SEISEKI *next;

};
typedef struct SEISEKI seiseki;

//プロトタイプ宣言
int input_line(void);
seiseki* input_data(int num);
void data_output(seiseki *start,int num);

//main関数
int main(void){

        //何人分かnumに記録
        int num=0;
        num = input_line();
        printf("num test:%d\n",num);

        /*
        //入力されたnumの分だけ構造体を確保
        seiseki *p;
        p = malloc(sizeof(seiseki) * num);
        seiseki *start;
        start = p;
        */

        //numの分だけデータ入力
        int i=0;
        seiseki *start;
        start = input_data(num);
        printf("start test:%p\n",start);

        //データ出力
        data_output(start,num);

        return 0;

}

//input_line関数　入力を受け取る
int input_line(){

        int num=0;
        printf("何人分の成績を記録しますか？");
        scanf("%d",&num);
        return num;
}

seiseki* input_data(int num){

        seiseki *p;
        seiseki *start;

        int i=0;
        for(i=0;i<num;i++){

                if(i==0){

                        //seiseki *p;
                        p = (seiseki *)malloc(sizeof(seiseki));
                        //seiseki *start;
                        start = p;
                        printf("pointer test:%p\n",start);

                }else{
                        p -> next = (seiseki *)malloc(sizeof(seiseki));
                        p = p -> next;
                        printf("pointer test:%p\n",p);



                }

                printf("enter the data of Japanese..");
                scanf("%d",&(p -> kokugo));

                printf("enter the data of math..");
                scanf("%d",&(p -> math));

                printf("enter the data of English..");
                scanf("%d",&(p -> English));

                p -> next = NULL;

                printf("---------input end ---------------\n");
        }

        return start;


}

void data_output(seiseki *start,int num){

        printf("output the all data\n");
        int i=0;
        seiseki *p;
        p = start;
        for(i=0;i<num;i++){

                printf("%dth data\n",i+1);
                printf("japanese:%d",p -> kokugo);
                printf("math:%d",p -> math);
                printf("English:%d\n",p -> English);
                printf("%dth data end\n",i+1);

                if(p -> next == NULL){
                
                        break;
                }else{
                        p = p -> next;

                }
        }


}
