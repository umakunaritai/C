#include <stdio.h>

//main function
int main(void){

        //����
        int log_count=0;//n
        scanf("%d",&log_count);

        int campaign_days=0;//k
        scanf("%d",&campaign_days);
        
        int visit_array[1000];//�K��Ґ��̋L�^
        int i=0;
        for(i=0;i<log_count;i++){

                scanf("%d",&visit_array[i]);
        }

        /*
        //�m�F�o��
        for(i=0;i<log_count;i++){

                printf("%d ",visit_array[i]);
        }
        printf("\n");
        */

        //�A���S���Y��
        int sum_array[1000];
        int sum=0;
        int j=0;
        int k= campaign_days;//�Z��k�ƕ\��

        //sum[]�ɕ��ς�����Ă�������double�^�ɂȂ�̂�sum�ő�p
        for(i=0;i+k<=log_count;i++){

                for(j=i;j<k+i;j++){

                        //printf("i:%d,j:%d\n",i,j);
                        sum += visit_array[j];

                }                
                sum_array[i] = sum ;
                sum = 0;

        }


        /*
        //�m�F�o��
        for(i=0;i+k<=log_count;i++){

                printf("%d ",sum_array[i]);
        }
        printf("\n");
        */

        //sum�̗v�f��max�𓾂�Bsum[]��max���ׂĈ�v�����Ƃ����̔Ԓn���o��
        //sum[]��max����������ꍇ�͈�ԑ������t���o��

        //sum[]����max�𓾂�
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

        //���ʏo��
        printf("%d %d",count,num+1);


        return 0;
}

