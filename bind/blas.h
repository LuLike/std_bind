#pragma once
#include<iostream>
#include<functional>

typedef std::function<void()> Functor;

class Blas
{
public:
	//注册回调函数
	void setCallBack(const Functor& cb)
	{
		functor = cb;
	};
	//调用回调函数
	void printFunctor()
	{
		functor();
	};
private:
	Functor functor;
};