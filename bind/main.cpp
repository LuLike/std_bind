#include "blas.h"
#include "atlas.h"

#define USE_STATIC_CALLBACK_FUN 0  //0ʹ�÷Ǿ�̬��Ա������1ʹ�þ�̬��Ա����

int main(int argc, char** argv)
{
	Blas blas;
	int x = 5;
	Atlas atlas(x);
#if USE_STATIC_CALLBACK_FUN
	blas.setCallBack(std::bind(&Atlas::addStatic, x, 2));
#else
	//ʹ�õ�ǰ��ķǾ�̬��Ա���� 
	blas.setCallBack(std::bind(&Atlas::add, atlas, x, 2));
#endif
	blas.printFunctor();
	system("pause");
	return 0;
}