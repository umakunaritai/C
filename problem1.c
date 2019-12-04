#include <stdio.h>

//main function
int main(void){

        //入力
        int log_count=0;//n
        scanf("%d",&log_count);

        int campaign_days=0;//k
        scanf("%d",&campaign_days);
        
        int visit_array[1000];//訪問者数の記録
        int i=0;
        for(i=0;i<log_count;i++){

                scanf("%d",&visit_array[i]);
        }

        /*
        //確認出力
        for(i=0;i<log_count;i++){

                printf("%d ",visit_array[i]);
        }
        printf("\n");
        */

        //アルゴリズム
        int sum_array[1000];
        int sum=0;
        int j=0;
        int k= campaign_days;//短くkと表現

        //sum[]に平均をいれてもいいがdouble型になるのでsumで代用
        for(i=0;i+k<=log_count;i++){

                for(j=i;j<k+i;j++){

                        //printf("i:%d,j:%d\n",i,j);
                        sum += visit_array[j];

                }                
                sum_array[i] = sum ;
                sum = 0;

        }


        /*
        //確認出力
        for(i=0;i+k<=log_count;i++){

                printf("%d ",sum_array[i]);
        }
        printf("\n");
        */

        //sumの要素のmaxを得る。sum[]とmaxを比べて一致したときその番地を出す
        //sum[]にmaxが複数ある場合は一番早い日付を出す

        //sum[]からmaxを得る
        int max=sum_array[0];
        int num=0;
        int count=1;
        for(i=0;i+k<=log_count;i++){

                if(max < sum_array[i]){

                        max = sum_array[i];
                        num = i;
                        count = 1;
                        //i= -1;
                        //sum_array[num] == max

                }else if(max == sum_array[i]){

                        if(i==0){

                        }else{
                                
                                count++;

                        }

                }else{

                }

        }

        //結果出力
        printf("%d %d",count,num+1);


        return 0;
}

