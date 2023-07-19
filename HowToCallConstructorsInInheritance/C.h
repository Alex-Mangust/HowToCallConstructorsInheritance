#pragma once
#include "A.h"
class C : public B
{
public:
	C()
	{
		cout << "Вызвался конструктор класса C" << endl;
	}
};

