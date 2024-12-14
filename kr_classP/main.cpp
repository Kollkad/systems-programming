#include "IPriut.h"
#include "Awaiting.h"
#include "AnimalMember.h"
#include "Food.h"
#include "Material.h"
#include <iostream>
using namespace std;

int main()
{
	//IPriut p1; абстрактный нельзя
	//IAnimal p2;
	//IResources p3;

	Awaiting* t1 = new Awaiting;
	Members* t2 = new Members;
	AnimalMember* t3 = new AnimalMember;
	Food* t4 = new Food;
	Material* t5 = new Material;
	//общие методы
	IPriut** a = new IPriut * [5] {t1, t2, t3, t4, t5};
	for (int i = 0; i < 5; i++)
	{
		a[i]->display();
		cout << "--------------------\n";
	}
	/* долго вводить, но работает
	for (int i = 0; i < 5; i++)
	{
		a[i]->enter();
		cout << "--------------------\n";
	}
	*/
	//методы классов
	t1->nullall();
	t3->nullall();
	t4->nullvolume();
	t5->nullvolume();

	return 0;
}