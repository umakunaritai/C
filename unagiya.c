/*
 * ���e�[�u���̂��Ȃ��� (paiza�����N B ����)
 * https://paiza.jp/works/mondai/skillcheck_sample/long-table?language_uid=c
 * ���{���̂��߁A��@�̌��J�͖��Ȃ�
 *
*/
#include <stdio.h>
//prototype declaration
int J_setter(int j_max,int zaseki_all);
void output_array(int *zaseki,int zaseki_all);


//main func
int main (void){

        //����
        int zaseki_all;//���Ȑ�n
        scanf("%d",&zaseki_all);

        int group_all;//�O���[�v��m
        scanf("%d",&group_all);

        int i=0;
        int ninzu[100];
        int number[100];
        for(i=0;i<group_all;i++){

                scanf("%d",&ninzu[i]);//�O���[�v�̐l��a_i
                scanf("%d",&number[i]);//����J�n�ԍ�b_i

        }
        //���͂̏I��

        //���Ȃ̍쐬
        int zaseki[100];//���ۂ̍���
        for(i=0;i<zaseki_all;i++){

                zaseki[i] = 0;
        }



        //�A���S���Y��
        //zaseki�z��ŏ������Ă���
        int suwari_ninzu = 0;
        int sit_number = 0;
        int count=0;
        int j=0;
        //int j_max = sit_number + suwari_ninzu;
        int j_max=0;
        int mode=0;
        for(i=0;i<group_all;i++){

                //���̓f�[�^�����������Ă���
                suwari_ninzu = ninzu[i];
                sit_number = number[i]-1;
                j_max = sit_number + suwari_ninzu;

                if(mode==0){

                        //�Ȃ������Ă邩�ǂ����̊m�F
                        for(j=sit_number;j<j_max;j++){

                                //j��zaseki_all�ɒB������O����X�^�[�g
                                if(j==zaseki_all){
                                        j=-1;//�p���������A�A
                                        j_max = j_max - zaseki_all;
                                        //printf("reset j: j=%d,j_max:%d\n",j,j_max);
                                        continue;
                                        //���������

                                }else{
                                        //nothing

                                }

                        
                                if(zaseki[j] == 0){
                                        //count���l�������܂�΍����
                                        count++;
                                        //printf("count test:%d\n",count);
                                        if(count==suwari_ninzu){
                                                //printf("����܂�\n");

                                                mode=1;
                                                i--;
                                                count=0;

                                        }else{
                                                //nothing

                                        }

                                }else{
                                        //zaseki[j]== 1

                                        //�m��ō���Ȃ�
                                        //printf("����Ȃ��̂ŋA��܂���\n");
                                        count=0;
                                        break;

                                }

                        }//for j

                }else{
                        //mode==1
                        //1��l�����������
                        for(j=sit_number;j<j_max;j++){

                                //j��zaseki_all�ɒB������O����X�^�[�g
                                if(j==zaseki_all){
                                        j=-1;//�p���������A�A
                                        j_max = j_max - zaseki_all;
                                        //printf("reset j: j=%d,j_max:%d\n",j,j_max);
                                        continue;
                                        //���������

                                }else{
                                        //nothing

                                }


                                zaseki[j] = 1;
                                //�����nothing�̂Ƃ��Ɉړ������ق������������H

                        }
                        mode=0;

                        /*
                        //������ƂɊm�F�o��
                        for(j=0;j<zaseki_all;j++){

                                printf("%d ",zaseki[j]);
                        }
                        printf("\n");
                        printf("-------------------------\n");
                        */

                }//if mode

                //i���Ƃɓ_�������
                //printf("%d th end\n",i);
                //printf("-------------------------\n");

                /*
                //i���Ƃɏo��
                for(j=0;j<zaseki_all;j++){
                
                    printf("%d ",zaseki[j]);
                }
                printf("\n");
                printf("-------------------------\n");
                */

        }//for i

        /*
        //�ŏI�`�����o��
        for(i=0;i<zaseki_all;i++){

                printf("%d ",zaseki[i]);
        }
        printf("\n");
        */

        //1�̌����o�͂���ΐ���
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

}//main�I��
