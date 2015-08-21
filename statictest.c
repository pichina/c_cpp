/*
 * =====================================================================================
 *
 *       Filename:  statictest.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年08月21日 14时34分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int g_a;
static int g_b;
static void test_func_a()
{
    g_a = 0;
    g_a = 0;
}
void test_func_b()
{
    g_a  = 0;
    g_b  = 0;
}
int main(int argc,char *argv)
{
   int a;
   printf("a:%p\n",&a);
   printf("g_a:%p\n",&g_a);
   printf("g_b:%p\n",&g_b);
   printf("test_func_a:%p\n",&test_func_a);
   printf("test_func_b:%p\n",&test_func_b);
   printf("main:%p\n",main);

   test_func_a();
   test_func_b();
   return 0;
}
