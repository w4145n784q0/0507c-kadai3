//�w�b�_���C���N���[�h
#include <iostream>
#include "CircleClass.h"
//�~�̔��a���擾����֐�
void CircleClass::Input()
{
	std::cout << "���a�́H";
	std::cin >> r;
}
//�~�̖ʐς��v�Z����֐�
void CircleClass::Calc()
{
	area = r * r * 3.14f;
}
//�~�̖ʐς��o�͂���֐�
void CircleClass::Disp()
{
	std::cout << "�~�̖ʐρ�" << area << "\n";
}