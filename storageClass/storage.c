#include <stdio.h>
/* 1,自动存储类是所有本地变量的默认存储类
 * 2,寄存器存储类用于定义应存储在寄存器中而不是RAM中的局部变量。
 * 这意味着变量的最大大小等于寄存器大小（通常为一个字），
 * 并且不能将一元“＆”运算符应用于它（因为它没有内存位置）。
 * 3,静态存储类指示编译器在程序的生命周期中保持局部变量存在，
 * 而不是在每次进入和退出范围时创建和销毁它。
 * 因此，使局部变量静态允许它们在函数调用之间维持它们的值。
 * 4,extern存储类用于提供对所有程序文件可见的全局变量的引用
 * 当使用'extern'时，变量不能被初始化，但它将变量名指向以前定义的存储位置。
 * 当你有多个文件，你定义一个全局变量或函数，它也将用于其他文件
 * 然后extern将在另一个文件中使用，以提供定义的变量或函数的引用。
 * 为了理解，extern用于在另一个文件中声明一个全局变量或函数。
 * 当有两个或更多文件共享相同的全局变量或函数时，extern修饰符是最常用的，
 * 如下所述。
 * in main.c file
 * int count;
 * extern void write_extern();
 * main(){
 * count = 5;
 * write_extern();
 * }
 *
 * in support.c
 * extern int count;
 * void write_extern(void){
 * printf("count is %d\n", count);
 * }
 * */

/*function declaration*/
void func(void);

static int count = 5;/*global variable*/

int main(){
    while(count){
        func();
    }

    return 0;
}
/*function definition */
void func(void){
    static int i = 5;/*local static variable*/
    i++;
    printf("i is %d and count is %d\n", i, count);
}
