#pragma once
#include "Worker.h"
class Keeper
{
public:
	Keeper();
	~Keeper();
	Keeper(Worker* obj);
	void Sort();//������� ���������� �� ����������� �������
	void Push();//���������� �������
	void Pop();//�������� �������
	void Show();//����� �� �����
	void Edit(const int& change);//�������������� �������
	void BestExperience(int exp);
private:
	Worker* object;
	int size;
};
