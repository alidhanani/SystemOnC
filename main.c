#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int science();
int circle();
int line();

int main(int avgc, char** avgv)
{
     fflush(stdin);
    int num3, secondvalue, factorial2 = 1;
    float num, num1;
    char choice, menu, choice2;
    char ch='\0';
    do{
            system("cls");
    printf("******************************* Main Menu **************************************\n");
    printf("Please Enter your choice:\n");
    printf("s = Scientific Calculator.      i = Instruction.\nc = Circle Calculator.          e = Exit.\nl = Line Calculator.\n");
    scanf(" %c",&choice2);
    switch(choice2)
    {
    case 's':
            science();
            break;
    case 'i':
            do{
                system("cls");
                printf("*******************************Instruction**************************************\n");
                printf("\nThis Calculator is a combination of scientific, circle and line calculator.\nTo work with addition, subtraction, multiplication or Division u are required to end each expression with +0 or -0.\nIf working with square root, please enter # and the number. Example #5.\nfor the Power Function, Enter a number ^ other number. eg 2^2.\nFor the Factorial function, enter ! and the number eg !3.\nTo work with Circle or line, there are n't no basic choices so, it could only be used in area, volume, gradient, y-intercept and etc. \n");
                printf("Are u done with the Instruction y/n?\n");
                scanf("%c",&menu);
              }while(menu != 'y');
              break;
    case 'c':
            circle();
            break;
    case 'l':
            line();
            break;
    case 'e':
            return 0;
    default:
        do{
            system("cls");
            printf("***********************************ERROR****************************************\n");
            printf("You have entered the wrong operation.\nPlease Enter the correct operation from s, i, or e.\n");
            printf("Are u satisfied with the above instructions? y/n\n");
            scanf("%c",&menu);
              }while(menu != 'y');
              break;
    }
        printf("Do u want to see the Main Menu menu y/n? \n");
        scanf(" %c",&menu);
    }while(menu == 'y');

    return 0;
}

int line()
{
   fflush(stdin);
    char menu; int choice, choice2; float x1, x2, y1, y2, m1, m2, c;
    do
    {
            system("cls");
            printf("**********************************LINE*******************************************");
            printf("******************************CALCULATOR***************************************\n");
            printf("Enter your choice:\n1 = Gradient of line.                    2 = Y intercept of line.\n3 = Equation Of the line.                4 = Return.\n");
            scanf("%d",&choice);

    if(choice == 1)
    {
        do
        {
            system("cls");
            printf("*********************************Gradient***************************************\n");
        printf("Enter the choice of gradient:\n1 = Simple gradient.\n2 = Perpendicular gradient: \n");
        scanf("%d",&choice2);

        if(choice2 == 1)
        {
            do
            {
                system("cls");
                printf("******************************SIMPLE GRADIENT***********************************\n");
                printf("you have chosen Simple gradient.\n");
                printf("Enter the value of X1, X2, Y1, Y2\n");
                scanf("%f %f %f %f",&x1,&x2,&y1,&y2);

                m1 = (y2 - y1)/(x2 - x1);
                printf("The gradient is %.2f",m1);

                printf("\nDo u want to continue with Simple gradient y/n? \n");
                scanf(" %c",&menu);

            }while(menu == 'y');
        }
         if(choice2 == 2)
        {
            do
            {
                system("cls");
                printf("***********************PERPENDICULAR GRADEINT***********************************\n");
                printf("you have chosen Simple gradient.\n");
                printf("Enter the value of X1, X2, Y1, Y2\n");
                scanf("%f %f %f %f",&x1,&x2,&y1,&y2);

                m1 = (y2 - y1)/(x2 - x1);
                m2 = (-1/m1);
                printf("The gradient is %.2f\n",m2);

                printf("\nDo u want to continue with Simple gradient y/n? \n");
                scanf(" %c",&menu);

            }while(menu == 'y');
        }

        printf("\nDo u want to continue with Gradient y/n? \n");
        scanf(" %c",&menu);

     }while(menu == 'y');
    }
    if(choice == 2)
    {
        do
        {
            system("cls");
            printf("********************************Y INTERCEPT*************************************\n");
        printf("You have chosen the y intercept.\n");
        printf("Please enter the Y, X, M");

        scanf("%f %f %f",&y1,&x1,&m1);
        c = y1 - (m1 * x1);

        printf("the y intercept is %.2f",c);

        printf("Do u want to continue with Circumference y/n? \n");
        scanf(" %c",&menu);

        }while(menu == 'y');
    }
    if(choice == 3)
    {
        do
        {
            system("cls");
            printf("***********************************EQUATION*************************************\n");
        printf("You have chosen equation\n");
        printf("enter the value of M and C\n");
        scanf("%f %f",&m1,&c);
        printf("The equation is Y = %.2fX + (%.2f)",m1,c);

        printf("\nDo u want to continue with equation y/n? \n");
        scanf(" %c",&menu);

        }while(menu == 'y');
    }
    if(choice == 4)
        return 0;
    if((choice < 1) || (choice > 4))
        {
            printf("Please enter the correct choice.\n");
            return 1;
        }

        printf("Do u want to see to the Circle Calculator menu y/n? \n");
        scanf(" %c",&menu);

     }while(menu == 'y');

    system("CLS");


    return 0;
}

int circle()
{
    fflush(stdin);
    char menu; int choice; float firstnumber, secondvalue, area, cir;
    do
    {
            system("cls");
                    printf("*********************************CIRLCE******************************************");
                    printf("******************************CALCULATOR***************************************\n");
            printf("Enter your choice:\n1 = Area of Circle.             2 = Circumference  of Circle.\n3 = Volume of Cylinder.         4 = Surface Area of Circle.\n5 = Return.\n");
            scanf("%d",&choice);

    if(choice == 1)
    {
        do
        {
            system("cls");
                    printf("***********************************AREA****************************************\n");
    printf("Enter the value for Radius value: ");
    scanf("%f", &firstnumber);
    area = 3.141 * (firstnumber * firstnumber);

    printf("\nFor the radius %.2f the area is %.2f",firstnumber,area);

        printf("\nDo u want to continue with Area of Circle y/n? \n");
        scanf(" %c",&menu);

     }while(menu == 'y');
    }
    if(choice == 2)
    {
        do
        {
            system("cls");
            printf("********************************CIRCUMFERENCE***********************************\n");
        printf("Enter the Value for radius: \n");
        scanf("%f",&firstnumber);

        cir = 2 * 3.141 * firstnumber;
        printf("For the radius %.2f the circumference is %.2f",firstnumber,cir);

        printf("Do u want to continue with Circumference y/n? \n");
        scanf(" %c",&menu);

        }while(menu == 'y');
    }
    if(choice == 3)
    {
        do
        {
            system("cls");
            printf("***********************************CYLINDER*************************************\n");
        printf("Enter the value for radius: \n");
        scanf("%f",&firstnumber);

        printf("Enter the value for height: \n");
        scanf("%f",&secondvalue);

        cir = 3.141 * (firstnumber * firstnumber) * secondvalue;
        printf("For the radius %.2f and height %.2f the circumference is %.2f",firstnumber,secondvalue,cir);

        printf("\nDo u want to continue with Area of Cylinder y/n? \n");
        scanf(" %c",&menu);

        }while(menu == 'y');
    }
    if(choice == 4)
    {
        do
        {
            system("cls");
            printf("******************************SURFACE AREA**************************************\n");
        printf("Enter the value of radius: \n");
        scanf("%f",&firstnumber);

        printf("Enter the value of height: \n");
        scanf("%f",&secondvalue);

        area = (3.141 * (firstnumber * firstnumber)) + (2 * 3.141 * firstnumber * secondvalue);
        printf("For the radius %.2f and height %.2f the circumference is %.2f",firstnumber,secondvalue,area);

        printf("\nDo u want to continue with Simple Factorial y/n? \n");
        scanf(" %c",&menu);

        }while(menu == 'y');
    }
    if(choice == 5)
        return 0;
    if((choice < 1) || (choice > 5))
        {
            printf("Please enter the correct choice.\n");
        }

        printf("Do u want to see to the Circle Calculator menu y/n? \n");
        scanf(" %c",&menu);

     }while(menu == 'y');

    system("CLS");


    return 0;
}

int science()
{
        int num3, secondvalue, factorial2 = 1;
        float num, num1;
        char choice, menu, choice2;
        char ch='\0';
            system("cls");
            printf("*************************** Scientific Calculator ******************************\n");
            printf("+ Add    - Sub    * Mult       / Div      \n^ Pow    # Sqrt   ! Factorial  @ 1/x\ns Sin    c Cos    t tan        o 10^x\na Sin-1  v Cos-1  y Tan-1 \nd Sinh   x Cosh   r Tanh \nf Sinh-1 b Cosh-1 u Tanh-1 \nl Log    e Exp    g Log10 \n");
            do{
                    printf("Enter the expression: ");
                    scanf("\n%f",&num);
                    scanf("\n%c",&choice);
                    switch(choice)
                    {
                    case '+':
                        num1 = 0;
                        do{
                        num1 = num1 + num;
                        scanf("%f",&num);
                        }while(num != 0);
                        printf("\t= %.2f",num1);
                        break;
                    case '-':
                        num1 = 0;
                        do{
                        num1 = num - num1;
                        scanf("%f",&num);
                        }while(num != 0);
                        printf("\t= %.2f",-num1);
                        break;
                    case '*':
                        num1 = 1;
                        do{
                            num1 = num1 * num;
                            ch = getchar();
                            if(ch == 0 || ch == '\n')
                            {
                                break;
                            }
                            if(isdigit(ch))
                            {
                                num = atof(&ch);
                                if(num == 0)
                                    break;
                            }
                            else
                            {
                                num = 1;
                            }
                        }while(1);
                        printf("\t= %.2f",num1);
                        break;
                    case '/':
                        num1 = 1;
                        do{
                            num1 = num / num1;
                            ch = getchar();
                            if(ch == 0 || ch == '\n')
                            {
                                break;
                            }
                            if(isdigit(ch))
                            {
                                num = atof(&ch);
                                if(num == 0)
                                    break;
                            }
                            else
                            {
                                num = 1;
                            }
                        }while(1);
                        printf("\t= %.2f",num1);
                        break;
                    case '#':
                        scanf("%f",&num1);
                        printf("sqrt(%.f) = %.2f",num1,sqrt(num1));
                        break;
                    case '^':
                        scanf("\n%f",&num1);
                        printf("\t= %.2f",pow(num,num1));
                        break;
                    case '@':
                        scanf("\n%f",&num1);
                        printf("\t= %.2f",1/num1);
                        break;
                    case '!':
                        scanf("\n%d",&secondvalue);
                        factorial2 = 1;
                        for(num3 = 1; num3 <= secondvalue; num3++)
                            factorial2 = factorial2 * num3;
                        printf("\t= %d",factorial2);
                        break;
                    case 'e':
                        scanf("\n%f",&num1);
                        printf("\e(%.1f) = %.2f",num1, exp(num1));
                        break;
                    case 'l':
                        scanf("\n%f",&num1);
                        printf("\tLOG(%.1f) = %.2f",num1, log(num1));
                        break;
                    case 'g':
                        scanf("\n%f",&num1);
                        printf("\tLOG10(%.1f) = %.2f",num1, log(num1));
                        break;
                    case 's':
                        scanf("\n%f",&num1);
                        printf("\tSin(%.1f) = %.2f",num1, sin(num1));
                        break;
                    case 'c':
                        scanf("\n%f",&num1);
                        printf("\tCos(%.1f) = %.2f",num1, cos(num1));
                        break;
                    case 't':
                        scanf("\n%f",&num1);
                        printf("\tTan(%.1f) = %.2f",num1, tan(num1));
                        break;
                    case 'a':
                        scanf("\n%f",&num1);
                        printf("\tSin-1(%.1f) = %.2f",num1, asin(num1));
                        break;
                    case 'v':
                        scanf("\n%f",&num1);
                        printf("\tCos-1(%.1f) = %.2f",num1, acos(num1));
                        break;
                    case 'y':
                        scanf("\n%f",&num1);
                        printf("\tTan-1(%.1f) = %.2f",num1, atan(num1));
                        break;
                    case 'd':
                        scanf("\n%f",&num1);
                        printf("\tSinh(%.1f) = %.2f",num1, sinh(num1));
                        break;
                    case 'x':
                        scanf("\n%f",&num1);
                        printf("\tCosh(%.1f) = %.2f",num1, cosh(num1));
                        break;
                    case 'r':
                        scanf("\n%f",&num1);
                        printf("\tTanh(%.1f) = %.2f",num1, tanh(num1));
                        break;
                    case 'f':
                        scanf("\n%f",&num1);
                        printf("\tSinh-1(%.1f) = %.2f",num1, asinh(num1));
                        break;
                    case 'b':
                        scanf("\n%f",&num1);
                        printf("\tCosh-1(%.1f) = %.2f",num1, acosh(num1));
                        break;
                    case 'u':
                        scanf("\n%f",&num1);
                        printf("\tTanh-1(%.1f) = %.2f",num1, atanh(num1));
                        break;
                    case 'o':
                        scanf("\n%f",&num1);
                        printf("\t= %.2f",pow(10.0,num1));
                        break;
                    default:
                        printf("Check the operator");
                    }
                        printf("\n\nDo u want to continue? y/n\n");
                        scanf(" %c",&menu);
              }while(menu == 'y');

              return 0;
}
