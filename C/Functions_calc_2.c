#include<stdio.h>
#include<conio.h>
#include<math.h>

    float saida =0;
    float x =0;
    float k =0;
    float a =0;
    float b =0;
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

    printf("11) DERIVATE f'(x)=k\n");
    printf("12) DERIVATE f'(x)=x^k\n");
    printf("13) DERIVATE f'(x)=k^x\n");
    printf("14) DERIVATE f'(x)=ln(x)\n");
    printf("15) DERIVATE f'(x)=1/x\n");
    printf("16) DERIVATE f'(x)=sen(x)\n");
    printf("17) DERIVATE f'(x)=cos(x)\n");
    printf("18) DERIVATE f'(x)=tan(x)\n");

    printf("21) INTEGRAL I(a,b)=k\n");
    printf("22) INTEGRAL I(a,b)=x^k\n");
    printf("23) INTEGRAL I(a,b)=k^x\n");
    printf("24) INTEGRAL I(a,b)=ln(x)\n");
    printf("25) INTEGRAL I(a,b)=1/x\n");
    printf("26) INTEGRAL I(a,b)=sen(x)\n");
    printf("27) INTEGRAL I(a,b)=cos(x)\n");
    printf("28) INTEGRAL I(a,b)=tan(x)\n");






    printf("0) QUIT / EXIT\n");
    printf("SELECT YOUR OPTION:");
    scanf("%d", &mainvalue);

    switch (mainvalue){
        case 1: //Função f(x)=k
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            printf("ENTER YOUR k VALUE:");// Alterado da primeira versao
            scanf("%f", &k); // Alterado da primeira versao
            saida = k; // Alterado da primeira versao
            printf("\n f(x)=k -> f(%2.2f)=%2.2f\n\n",x ,saida );
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

        case 4: //Função f(x)=ln(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = log(x);
            printf("\n f(x)=ln(x) -> f(%2.2f)=ln(%2.2f) = %2.2f\n\n",x ,x ,saida);
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
            saida = sin(((x*(acos(-1)))/180)); //(acos(-1) replace Pi value Trans graus em radiano para o calculo
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
            saida = cos(((x*(acos(-1)))/180)); //(acos(-1) replace Pi value Trans graus em radiano para o calculo
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
            saida = tan(((x*(acos(-1)))/180)); //(acos(-1) replace Pi value Trans graus em radiano para o calculo
            printf("\n f(x)=tan(x) -> f(%2.2f)=tan(%2.2f) = %2.2f\n\n",x ,x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 11: //DERIVATE f(x)=k
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);
            saida = 0;
            printf("\n f'(x)=k -> f'(%2.2f)=%2.2f\n\n",x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 12: //DERIVATE f(x)=x^k
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);
            saida = k*(pow((x),(k-1)));
            printf("\n f'(x)=x^k -> f'(%2.2f)=%2.2f*%2.2f^%2.2f-1 -> f'(%2.2f)=%2.2f",x , k, x ,k , x, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 13: //DERIVATE f(x)=k^x
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);
            saida = x*(pow((k),(x-1)));
            printf("\n f'(x)=k^x -> f'(%2.2f)=%2.2f*%2.2f^%2.2f-1 -> f'(%2.2f)=%2.2f",x ,x, k, x, x, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 14: //DERIVATE f(x)=ln(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = 1/x;
            printf("\n f'(x)=ln(x) -> f'(%2.2f)=1/%2.2f -> f'(%2.2f)=%2.2f\n\n",x ,x, x ,saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 15: //DERIVATE f(x)=1/x
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = -(1/(pow((x),(2))));
            printf("\n f'(x)=1/x -> f'(%2.2f)=-(1/%2.2f^2) -> f'(%2.2f)=%2.2f\n\n", x, x, x, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 16: //DERIVATE f(x)=sen(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = cos((x*(acos(-1)))/180); //(acos(-1) replace Pi value Trans graus em radiano para o calculo
            printf("\n f'(x)=sen(x) -> f'(%2.2f)=cos(%2.2f) -> f'(%2.2f)=%2.2f\n\n",x, x, x, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 17: //DERIVATE f(x)=cos(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = -sin((x*(acos(-1)))/180); //(acos(-1) replace Pi value Trans graus em radiano para o calculo
            printf("\n f'(x)=cos(x) -> f'(%2.2f)=-sen(%2.2f) -> f'(%2.2f)=%2.2f\n\n",x, x, x, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 18: //DERIVATE f(x)=tan(x)
            printf("ENTER YOUR x VALUE:");
            scanf("%f", &x);
            saida = pow((1/cos((x*(acos(-1)))/180)),(2)); //1/cos(x)= secante / (acos(-1) replace Pi value
            printf("\n f'(x)=tan(x) -> f'(%2.2f)=sec^2(%2.2f) -> f'(%2.2f)=%2.2f\n\n",x, x, x, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;



        case 21: //INTEGRAL f(x)=k
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida =(k*b)-(k*a);
            printf("\n I(a,b)=k -> I(%2.2f,%2.2f)=%2.2f*%2.2f-%2.2f*%2.2f -> I(%2.2f%2.2f)=%2.2f\n\n",a, b, k, b, k, a, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 22: //INTEGRAL f(x)=x^k
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);// validar k diferente de -1
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida = ((pow((b),(k+1)))/(k+1))-((pow((a),(k+1)))/(k+1));
            printf("\n I(a,b)=x^k -> I(%2.2f,%2.2f)=((%2.2f^%2.2f+1)/(%2.2f+1))-((%2.2f^%2.2f+1)/(%2.2f+1)) -> I(%2.2f,%2.2f)=%2.2f\n\n", a, b, b, k, k, a, k, k, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 23: //INTEGRAL f(x)=k^x
            printf("ENTER YOUR k VALUE:");
            scanf("%f", &k);
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida = ((pow((k),(b)))/(log(k)))-((pow((k),(a)))/(log(k)));
            printf("\n I(a,b)=x^k -> I(%2.2f,%2.2f)=((%2.2f^%2.2f)/ln(%2.2f))-((%2.2f^%2.2f)/ln(%2.2f)) -> I(%2.2f,%2.2f)=%2.2f\n\n", a, b, k, b, k, k, a, k, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 24: //INTEGRAL f(x)=ln(x)
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida = (b*(log(b)-1))-(a*(log(a)-1));
            printf("\n I(a,b)=ln(x) -> I(%2.2f,%2.2f)=%2.2f*(ln(%2.2f)-1)-%2.2f*(ln(%2.2f)-1) -> I(%2.2f,%2.2f)=%2.2f\n\n", a, b, b, b, a, a, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 25: //INTEGRAL f(x)=1/x
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida = (log(fabs(b)))-(log(fabs(a))); //fabs quando usar ponto flutante ou abs se usar em inteiros
            printf("\n I(a,b)=1/x -> I(%2.2f,%2.2f)=ln(abs(%2.2f))-ln(abs(%2.2f)) -> I(%2.2f,%2.2f)=%2.2f\n\n", a, b, b, a, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 26: //INTEGRAL f(x)=sen(x)
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida = (-cos((b*(acos(-1)))/180))-(-cos((a*(acos(-1)))/180)); //(acos(-1) replace Pi value
            printf("\n I(a,b)=sen(x) -> I(%2.2f,%2.2f)=(-cos(%2.2f))-(-cos(%2.2f)) -> I(%2.2f,%2.2f)=%2.2f\n\n", a, b, b, a, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 27: //FUNCTION f(x)=cos(x)
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida = (sin((b*(acos(-1)))/180))-(sin((a*(acos(-1)))/180)); //(acos(-1) replace Pi value
            printf("\n I(a,b)=cos(x) -> I(%2.2f,%2.2f)=(sen(%2.2f))-(sen(%2.2f)) -> I(%2.2f,%2.2f)=%2.2f\n\n", a, b, b, a, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;

        case 28: //INTEGRAL f(x)=tan(x)
            printf("ENTER YOUR xa VALUE:");
            scanf("%f", &a);
            printf("ENTER YOUR xb VALUE:");
            scanf("%f", &b);
            saida = (-log(abs(cos(b))))-(-log(abs(cos(a)))); //(acos(-1) replace Pi value
            printf("\n I(a,b)=tan(x) -> I(%2.2f,%2.2f)=(-ln(abs(%2.2f)))-(-ln(abs(%2.2f))) -> I(%2.2f,%2.2f)=%2.2f\n\n",a, b, b, a, a, b, saida);
            system("pause"); // PAUSE EXECUTION
            system("cls"); // CLEAN WINDOWS
            fflush(stdin);
            mainvalue=0;
            goto MAINMENU; // RETURN TO MAIN MENU
            break;


        case 0: //END APPLICATION
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
