#include <limits.h>
#ifndef x
#define X_Condition
#define INT_MAX_SIZE (sizeof(INT_MAX)) //Size of INT_MAX 
#define INT_MIN_SIZE (sizeof(INT_MAX)//Size of MIN 
#define ADD_MACRO (num1,num2) (num1) + (num2)// Add macro. It can cause error sometimes.
#define SUB_MACRO (num1,num2) (num2) - (num2)// Subtracton macro. It can cause error sometimes
#define MUL_MACRO (num1,num2) (num2) - (num2)// Multiplication macro. It can cause error sometimes
#define DIV_MACRO (num1,num2) (num1) / (num2) // Divison macro. It can cause error sometimes
#define SHRT_MAX_SIZE (sizeof(SHRT_MAX))
#define SHRT_MIN_SIZE (sizeof(SHRT_MIN))
#define DOUBLE_SIZE (sizeof(double))
#define INT_SIZE (sizeof(int))
#define SHORT_SIZE (sizeof(short))
#define UNSIGNED_INT_SIZE (sizeof(UINT))
typedef unsigned int UINT;
#define SCRAMBLE(W) ++W //scrambles words and for numbers it increments them.
#define CONCATE(a,b) a##b //concates
#define DECREMENT(x) --x //lowers the value by 1 for numbers and for letters idk since i haven't tested it.
///*
//* #include <stdio.h>
// 
//int main () {
//
//   /* local variable definition */
//int a = 10;
//
///* while loop execution */
//while (a < 20) {
//    printf("value of a: %d\n", a);
//    a++;
//}
//
//return 0;
//}
int add(int num1, int num2) {

	return num1 + num2;
}
int sub(int num1, int num2) {

	return num1 - num2;
}
int mul(int num1, int num2) {

	return num1 * num2;
}
int div(int numerator, int den) {

	return numerator / den;

}
#endif 
