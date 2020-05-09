//당신에게 맞는 프로그래밍 언어 찾기

#include <stdio.h>
//전처리기
#define FIVE 5
int first_question();
int second_question();
int third_question();
int fourth_question();
int fifth_question();


int main(void) {
    int choice =0;
    int answer[FIVE]={0};
    int amount[FIVE]={0};
    int max=0, min =0;
    int max_num=0, min_num=0;
    //문자열 초기화, 이중배열
    char lang[FIVE][20]={"C","JAVA","Python","go","Javascript"};

    printf("당신에게 맞는 언어를 찾아봅시다.\n");

    while(1){
        printf("문항에 따른 선택지를 골라주세요.\n");
        //함수 호출 및 리턴값 저장
        answer[0]=first_question();
        answer[1]=second_question();
        answer[2]=third_question();
        answer[3]=fourth_question();
        answer[4]=fifth_question();

        //리턴값을 각 언어 항목의 갯수에 저장
        for(int i=0;i<FIVE;i++){

            switch(answer[i]){
                case 1:
                    amount[0]++;
                    break;
                case 2:
                    amount[1]++;
                    break;
                case 3:
                    amount[2]++;
                    break;
                case 4:
                    amount[3]++;
                    break;
                case 5:
                    amount[4]++;
                    break;
            }
        }

        //최솟값을 첫번째 amount 값으로 초기화 시키기
        min = amount[0];
        min_num=0;

        //최댓값, 최솟값 구하기
        for(int j =0;j<FIVE;j++){
            if(max<amount[j]){
                max=amount[j];
                max_num = j;
            }
            if(min>amount[j]){
                min=amount[j];
                min_num=j;
            }
        }
        //최댓값과 최솟값이 같을 경우
        if(max_num==min_num){
            printf("당신에게 딱 맞는 언어는 못찾았습니다. 다 비슷하시군요.\n");
        }
        else{
            printf("당신에게 가장 맞는 언어는 %s입니다.\n",lang[max_num]);
            printf("당신에게 가장 안맞는 언어는 %s입니다.\n",lang[min_num]);
        }

        printf("계속 하시겠습니까? yes:1 no:2\n");
        scanf("%d",&choice);
        if(choice==2)break;
    }
    return 0;
}
//질문- 리턴값: 고른 문항 번호
int first_question(){
    int choice =0;
    printf("1.속도가 제일 빠른 언어가  낫다.\n");
    printf("2.수많은 개발자들과 레퍼런스가 있는 언어가 낫다.\n");
    printf("3.배우기 쉬운 언어가 낫다.\n");
    printf("4.쉽고 컴파일이 빠른 언어가 좋다.\n");
    printf("5.간편하면서 강력한 텍스트 표기법을 가진 언어가 좋다.\n");
    scanf("%d",&choice);
    return choice;
}
int second_question(){
    int choice =0;
    printf("1.'한국' 대학교 수업에서 고학점 받는게 제일 좋다.\n");
    printf("2.'한국' 내에서 신규 프로젝트 진행 원할하게 하는데 많은 관심이 있다.\n");
    printf("3.'외국' 에서 엄청나게 사용하는 추세의 언어가 좋다.\n");
    printf("4.'한국' 에서 희귀하지만 그만큼 메리트 있는 언어가 좋다.\n");
    printf("5.'구글엔진'으로 발전속도가 엄청 빨라지는 언어가 좋다.\n");
    scanf("%d",&choice);
    return choice;
}
int third_question(){
    int choice =0;
    printf("1.게임 프로그래밍에 관심이 깊다.\n");
    printf("2.어떤 컴퓨터든 잘 돌아가는 언어가 좋다.\n");
    printf("3.가장 개발속도가 빠른 언어가 낫다.\n");
    printf("4.문법이 간결하고 keyword도 적은 언어가 낫다.\n");
    printf("5.다른 라이브러리를 불러와서 긴 코드를 간결하게 짤 수 있는 언어가 좋다.\n");
    scanf("%d",&choice);
    return choice;
}
int fourth_question(){
    int choice =0;
    printf("1.하드웨어를 잘 다루고 싶다.\n");
    printf("2.높은 안정성의 언어가 좋다.\n");
    printf("3.모든 것을 만들 수 있는 만능 언어가 좋다.\n");
    printf("4.기능을 쉽게 구현할 수 있는 언어가 좋다.\n");
    printf("5.점점 성능이 발전해 게임 그 이상의 것도 개발가능한 언어가 좋다.\n");
    scanf("%d",&choice);
    return choice;
}
int fifth_question(){
    int choice =0;
    printf("1.사장될 가능성이 없는 안정적인 언어가 좋다.\n");
    printf("2.가독성이 높은 인간 친화적인 언어가 좋다.\n");
    printf("3.갈수록 점유율이 높아지는 언어가 좋다.\n");
    printf("4.가능성이 무궁무진한 언어가 좋다.\n");
    printf("5.능숙한 개발자가 가장 많은 확실한 언어가 좋다.\n");
    scanf("%d",&choice);
    return choice;
}
