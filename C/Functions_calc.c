#include<stdio.h>
#include<conio.h>
#include<math.h>

    float saida =0;
    float x =0;
    float k =0;
    int mainvalue=0;
void main(){
    MAINMENU:
    printf("SOFTWARE TO SOLVE SOME MATH PROBLEMS\n");
    printf("1) FUNCTION f(x)=k\n");
    printf("2) FUNCTION f(x)=x^k\n");
    printf("3) FUNCTION f(x)=k^x\n");
    printf("4) FUNCTION f(x)=ln(x)\n");
    printf("5) FUNCTION f(x)=1/x\n");
    printf("6) FUNCTION f(x)=sen(x)\n");
    printf("7) FUNCTION f(x)=cos(x)\n");
    printf("8) FUNCTION f(x)=tan(x)\n");
    printf("9) QUIT / EXIT\n");
    printf("SELECT YOUR OPTION:");
    scanf("%d", &mainvalue);

    switch (mainvalue){
        case 1: //Função f(x)=k
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = x;
            printf("\n f(x)=k -> f(%2.2f)=%2.2f\n\n",x ,x );
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 2: //Função f(x)=x^k
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);
            saida = pow((x),(k));
            printf("\n f(x)=x^k -> f(%2.2f)=%2.2f^%2.2f = %2.2f\n\n",x ,x ,k ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 3: //Função f(x)=k^x
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);
            saida = pow((k),(x));
            printf("\n f(x)=k^x -> f(%2.2f)=%2.2f^%2.2f = %2.2f\n\n",x ,k ,x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 4: //Função f(x)=ln(x) NÃO REALIZADA
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 5: //Função f(x)=1/x
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = 1.00/x;
            printf("\n f(x)=1/x -> f(%2.2f)=1/%2.2f = %2.2f\n\n",x ,x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 6: //Função f(x)=sen(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = sin(((x*(acos(-1)))/180)); //(acos(-1) replace Pi value
            printf("\n f(x)=sen(x) -> f(%2.2f)=sen(%2.2f) = %2.2f\n\n",x ,x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 7: //Função f(x)=cos(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = cos(((x*(acos(-1)))/180)); //(acos(-1) replace Pi value
            printf("\n f(x)=cos(x) -> f(%2.2f)=cos(%2.2f) = %2.2f\n\n",x ,x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 8: //Função f(x)=tan(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = tan(((x*(acos(-1)))/180)); //(acos(-1) replace Pi value
            printf("\n f(x)=tan(x) -> f(%2.2f)=tan(%2.2f) = %2.2f\n\n",x ,x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 9: //END APPLICATION
            break;

        default: //ERROR MESSAGE
            printf ("\n INVALID VALUE!\n");
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin); // CLEAN KEYBOAR INPUT
            mainvalue=0; // RETURN MAINVALUE TO VALUE 0
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

    }

}



















