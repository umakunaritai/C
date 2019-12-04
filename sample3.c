#include <stdio.h>

//構造体宣言
struct SEISEKI{
	int no;
	char name[20];
	double heikin;
    struct SEISEKI *next;
};
typedef struct SEISEKI seiseki;

//プロトタイプ宣言
void printscreen(seiseki *point);

//main関数
int main (void){

        //代入
        seiseki person[3] = {

        { 1, "SAKURAI", 78.6,&person[1] },
		{ 2, "NAGANO", 57.3,&person[2] },
		{ 3, "TAKESHITA", 66.4,NULL },

        };

        //出力
        printscreen(&person[0]);

        return 0;
}

//printscreen関数
void printscreen(seiseki *point){

        printf("%d\n",point -> no);
        printf("%s\n",point -> name);
        printf("%f\n",point -> heikin);

        if(point -> next == NULL){

        }else{
                printscreen(point -> next);

        }

        return;
}

