/*
 * 長テーブルのうなぎ屋 (paizaランク B 相当)
 * https://paiza.jp/works/mondai/skillcheck_sample/long-table?language_uid=c
 * 見本問題のため、解法の公開は問題ない
 *
*/
#include <stdio.h>
//prototype declaration
int J_setter(int j_max,int zaseki_all);
void output_array(int *zaseki,int zaseki_all);


//main func
int main (void){

        //入力
        int zaseki_all;//座席数n
        scanf("%d",&zaseki_all);

        int group_all;//グループ数m
        scanf("%d",&group_all);

        int i=0;
        int ninzu[100];
        int number[100];
        for(i=0;i<group_all;i++){

                scanf("%d",&ninzu[i]);//グループの人数a_i
                scanf("%d",&number[i]);//座り開始番号b_i

        }
        //入力の終了

        //座席の作成
        int zaseki[100];//実際の座席
        for(i=0;i<zaseki_all;i++){

                zaseki[i] = 0;
        }



        //アルゴリズム
        //zaseki配列で処理していく
        int suwari_ninzu = 0;
        int sit_number = 0;
        int count=0;
        int j=0;
        //int j_max = sit_number + suwari_ninzu;
        int j_max=0;
        int mode=0;
        for(i=0;i<group_all;i++){

                //入力データを引っ張ってくる
                suwari_ninzu = ninzu[i];
                sit_number = number[i]-1;
                j_max = sit_number + suwari_ninzu;

                if(mode==0){

                        //席があいてるかどうかの確認
                        for(j=sit_number;j<j_max;j++){

                                //jがzaseki_allに達したら０からスタート
                                if(j==zaseki_all){
                                        j=-1;//継続条件が、、
                                        j_max = j_max - zaseki_all;
                                        //printf("reset j: j=%d,j_max:%d\n",j,j_max);
                                        continue;
                                        //ここが問題

                                }else{
                                        //nothing

                                }

                        
                                if(zaseki[j] == 0){
                                        //countが人数分たまれば座れる
                                        count++;
                                        //printf("count test:%d\n",count);
                                        if(count==suwari_ninzu){
                                                //printf("座れます\n");

                                                mode=1;
                                                i--;
                                                count=0;

                                        }else{
                                                //nothing

                                        }

                                }else{
                                        //zaseki[j]== 1

                                        //確定で座れない
                                        //printf("座れないので帰りました\n");
                                        count=0;
                                        break;

                                }

                        }//for j

                }else{
                        //mode==1
                        //1を人数分代入する
                        for(j=sit_number;j<j_max;j++){

                                //jがzaseki_allに達したら０からスタート
                                if(j==zaseki_all){
                                        j=-1;//継続条件が、、
                                        j_max = j_max - zaseki_all;
                                        //printf("reset j: j=%d,j_max:%d\n",j,j_max);
                                        continue;
                                        //ここが問題

                                }else{
                                        //nothing

                                }


                                zaseki[j] = 1;
                                //これをnothingのとこに移動したほうがいいかも？

                        }
                        mode=0;

                        /*
                        //代入ごとに確認出力
                        for(j=0;j<zaseki_all;j++){

                                printf("%d ",zaseki[j]);
                        }
                        printf("\n");
                        printf("-------------------------\n");
                        */

                }//if mode

                //iごとに点線いれる
                //printf("%d th end\n",i);
                //printf("-------------------------\n");

                /*
                //iごとに出力
                for(j=0;j<zaseki_all;j++){
                
                    printf("%d ",zaseki[j]);
                }
                printf("\n");
                printf("-------------------------\n");
                */

        }//for i

        /*
        //最終形だけ出力
        for(i=0;i<zaseki_all;i++){

                printf("%d ",zaseki[i]);
        }
        printf("\n");
        */

        //1の個数を出力すれば正解
        int s=0;
        int counter_1=0;
        for(s=0;s<zaseki_all;s++){

                if(zaseki[s]==1){
                        counter_1++;

                }else{

                }

        }
        printf("%d",counter_1);

        //return
        return 0;

}//main終了
