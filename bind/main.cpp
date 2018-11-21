#include "blas.h"
#include "atlas.h"

#define USE_STATIC_CALLBACK_FUN 0  //0使用非静态成员函数，1使用静态成员函数

int main(int argc, char** argv)
{
	Blas blas;
	int x = 5;
	Atlas atlas(x);
#if USE_STATIC_CALLBACK_FUN
	blas.setCallBack(std::bind(&Atlas::addStatic, x, 2));
#else
	//使用当前类的非静态成员函数 
	blas.setCallBack(std::bind(&Atlas::add, atlas, x, 2));
#endif
	blas.printFunctor();
	system("pause");
	return 0;
}