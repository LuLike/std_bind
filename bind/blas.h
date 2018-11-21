#pragma once
#include<iostream>
#include<functional>

typedef std::function<void()> Functor;

class Blas
{
public:
	//ע��ص�����
	void setCallBack(const Functor& cb)
	{
		functor = cb;
	};
	//���ûص�����
	void printFunctor()
	{
		functor();
	};
private:
	Functor functor;
};