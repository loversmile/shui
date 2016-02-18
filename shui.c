/*************************************************************************
	> File Name: shui.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Feb 2016 06:12:20 PM PST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int salary, shebao, gongjijin;
    printf("Please input you salary: \n");
    scanf("%d", &salary);
    printf("Please input you shebao: \n");
    scanf("%d", &shebao);
    printf("Please input you gongjijin: \n");
    scanf("%d", &gongjijin);
    int need = 0;
    need = salary - (shebao + gongjijin) - 3500;

    printf("need = %d\n", need);
    int need_tmp = need;
    double shui = 0.0;
    while(need_tmp) 
    {
        if (need_tmp > 80000)
        {
            shui += (need_tmp - 80000 ) * 0.45;
            need_tmp = 80000;
        } 
        else if (need_tmp > 55000)
        {
            shui += (need_tmp - 55000 ) * 0.35;
            need_tmp = 55000;
        }
        else if (need_tmp > 35000)
        {
            shui += (need_tmp - 35000 ) * 0.30;
            need_tmp =  35000;
        }
        else if (need_tmp > 9000)
        {
            shui += (need_tmp - 9000 ) * 0.25;
            need_tmp =  9000;
        }
        else if (need_tmp > 4500)
        {
            shui += (need_tmp - 4500 ) * 0.20;
    printf("shui = %f\n", shui);
            need_tmp =  4500;
        }
        else if (need_tmp > 1500)
        {
            shui += (need_tmp - 1500 ) * 0.10;
    printf("shui = %f\n", shui);
            need_tmp =  1500;
        }
        else
        {
            shui += need_tmp * 0.03;
    printf("shui = %f\n", shui);
            need_tmp = 0;
        }
    }

    printf("shui = %f\n", shui);
    double real = salary - shebao - gongjijin - shui;
    printf("read = %f\n", real);
}
