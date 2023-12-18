#pragma once
#include "Worker.h"
class Keeper
{
public:
	Keeper();
	~Keeper();
	Keeper(Worker* obj);
	void Sort();//Функция сортировки по алфавитному порядку
	void Push();//добавление объекта
	void Pop();//удаление объекта
	void Show();//вывод на экран
	void Edit(const int& change);//редактирование объекта
	void BestExperience(int exp);
private:
	Worker* object;
	int size;
};
