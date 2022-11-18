#include <stdio.h>
#include <stdbool.h>

float addition(float Value1,float value2)
{
    float ret = 0.0;
    ret = Value1 + value2;
    return ret;
}
float subtraction(float value1,int value2)
{
    float ret = 0.0;
    ret = value1 - value2;
    return ret;
}
float multiplication(float value1,float value2)
{
    float ret = 0.0;
    ret = value1 * value2;
    return ret;
}
float division(float value1,float value2)
{   
    float ret = 0.0;
    ret = value1/value2;
    return ret;
}
float square(float value1,float value2)
{
    float ret = 0.0;
    ret = pow(value1,value2);
    return ret;
}

int main()
{
    int flag = true;
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    float fAns = 0.0;
    char cOperator ='\0';
    char cEqual = '\0';
    printf("calculation:\n");

    printf("___________________________\n");
    scanf("%f%c%f",&fValue1,&cOperator,&fValue2);
    printf("___________________________\n");

    switch(cOperator)
    {
        case '+':
        fAns = addition(fValue1,fValue2);
        break;

        case '-':
        fAns = subtraction(fValue1,fValue2);
        break;

        case '*':
        fAns = multiplication(fValue1,fValue2);
        break;

        case '/':
        fAns = division(fValue1,fValue2);
        break;

        case '^':
        fAns = square(fValue1,fValue2);
        break;

        default:
        flag = false;
        break;
        
    }

    if (flag == false)
    {
        printf("enter appropriate values...");
    }
    else
    {
        printf("%.3f%c%.3f = %.3f\n",fValue1,cOperator,fValue2,fAns);
        printf("___________________________\n");
    }
    
return 0;
}