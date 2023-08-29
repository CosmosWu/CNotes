#include<stdio.h> //引入标准输入输出库
#include<math.h>  //引入数学函数库

/* 
@author:XXX
用途：求解一元二次方程
实现：通过scanf()收集用户输入的三个方程系数
     求出判别式的值     
     根据判别式的值分析解的情况
     利用求根公式得到解的值，由printf()打印到屏幕上
 */


int main(){

    //定义三个int型变量，存储方程的系数
    int a, b, c;
    //定义int型变量detla，存放判别式的值
    int detla;
    //定义两个double型变量，存放求根公式得到的解
    double x1 , x2;

    printf("请输入一元二次方程的三个系数:\n");
    //引导用户依次输入方程的三个系数
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    // 计算判别式的值
    detla = b*b - 4*a*c;

    if (detla > 0)
    {
        x1 = (-b + sqrt(detla)) / (2*a);
        x2 = (-b - sqrt(detla)) / (2*a);
        printf("该方程有两个不同解:x1 = %lf, x2 = %lf\n", x1 , x2);
    }
    else if (detla == 0)
    {
        x1 = x2 = (-b)/(2*a);
        printf("该方程有唯一解:x1 = x2 = %lf\n", x1 = x2);
    }
    else
    {
        printf("该方程在实数范围内没有解!\n");
    }

    return 0;
}