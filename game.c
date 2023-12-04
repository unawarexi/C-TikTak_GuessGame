#include <stdio.h>

int main(){
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5; /*point6,point7,point8,point9,point10;*/
    int point01,point02,point03,point04,point05; /*point06,point07,point08,point09,point010;*/
    /*int total1,total2,total3;*/

    printf("  welcome to the game\n\n");
    printf(" > press 7 to begin\n");
    printf(" > press 0 to quit\n");

    scanf("%d", &i);

    if (i == 7){
        printf(" the game has begun\n");
    }else if (i == 0){
        printf("the gamae has ended");

    }else{
        printf("invalid response\n\n");
    }


    if (i == 7){
        printf("1) which is the first internet in the world\n\n");
        printf("1) google\n");
        printf("2) archive\n ");
        printf("3) wisle\n");
        printf("4) altavista\n");

        printf("Enter your ans: ");
        scanf("%d", &ans1);

        if (ans1 == 2){
            printf(" correct answer\n");
            point1 = 5;
            printf("you have scored %d point\n", point1);
        } else{
            printf(" wrong answer\n");
            point01 = 0;
            printf("you have scored %d point\n", point01);
        }


        printf("2) which is the fastest man in the world\n\n");
        printf("1) google\n");
        printf("2) lucas\n ");
        printf("3) federick\n");
        printf("4) usain bolt\n");

        printf("Enter your ans: ");
        scanf("%d", &ans2);

        if (ans2 == 4){
            printf(" correct answer\n");
            point2 = 5;
            printf("you have scored %d point\n", point2);
        } else{
            printf(" wrong answer\n");
            point02 = 0;
            printf("you have scored %d point\n", point02);
        }

        printf("3) who is the strongest man in the world\n\n");
        printf("1) john cena\n");
        printf("2) dean ambrose\n");
        printf("3) mohamed ali\n");
        printf("4) undertaker\n");

        printf("Enter your ans: ");
        scanf("%d", &ans3);

        if (ans3 == 3){
            printf(" correct answer\n");
            point3 = 5;
            printf("you have scored %d points\n", point3);
        } else {
            printf(" wrong answer\n");
            point03 = 0;
            printf(" you have scored %d points\n", point03);
        }



        printf("4) who is the ugliest man in the world\n\n");
        printf("1) fayose\n");
        printf("2) osinbanjo\n");
        printf("3) mohamed shakur\n");
        printf("4) tinubu\n");

        printf("Enter your ans: ");
        scanf("%d", &ans4);

        if (ans4 == 4){
            printf(" correct answer\n");
            point4 = 5;
            printf("you have scored %d points\n", point4);
        } else {
            printf(" wrong answer\n");
            point04 = 0;
            printf(" you have scored %d points\n", point04);
        }


        printf("5) who is the shortest man in the world\n\n");
        printf("1) aki\n");
        printf("2) pawpaw\n");
        printf("3) hasbulla\n");
        printf("4) nath\n");

        printf("Enter your ans: ");
        scanf("%d", &ans5);

        if (ans5 == 3){
            printf(" correct answer\n");
            point5 = 5;
            printf("you have scored %d points\n", point5);
        } else {
            printf(" wrong answer\n");
            point05 = 0;
            printf(" you have scored %d points\n", point05);
        }



    }
     return (0);
} 