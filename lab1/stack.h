#ifndef STACK_H
#define STACK_H


#define NULL_PTR_ERR  -1
#define RANGE_ERR     -2 
#define OVERFLOW      -3
#define EMPTY_ERR     -4


typedef struct STACK{
	int *elems;
	int max;
	int pos;
}STACK;


//初始化p指向的栈：最多m个元素
void initSTACK(STACK *const p, int m);

//用栈s初始化p指向的栈
void initSTACK( STACK *const p, const STACK &s);

//返回p指向的栈的最大元素个数max
int size( const STACK *const p);

//返回p指向的栈的实际元素个数pos
int howMany( const STACK *const p );

//取下标x处的栈元素
int getelem( const STACK *const p, int x);

//将e入栈，返回p
STACK *const push(STACK *const p, int e);

//出栈到e，返回p
STACK *const pop(STACK *const p, int &e);

//赋s给p指向的栈，并返回p
STACK *const assign(STACK *const p, const STACK &s);

//打印p指向的栈
void print( const STACK *const p);

//销毁p指向的栈
void destroySTACK( STACK *const p );



#endif 

