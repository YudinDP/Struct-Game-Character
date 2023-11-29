#include "Game_Character_Struct.h" //������������ ���� � ������� � ��� ������������
#include <iostream>
using namespace std;

//����������� - �� ��������� ������ ���� ��������������� �������� 100 
Character::Character() {
	HP = MP = SP = 100;
}

//����������(�� ����� � ������ ������ �� ����������� new � ������ �������� �� �� ����)
Character::~Character() {
	//delete HP, SP, MP;
}
//������ HP
int Character::Get_HP() {
	return HP;
}

//������ SP
int Character::Get_SP() {
	return HP;
}

//������ MP
int Character::Get_MP() {
	return HP;
}

//���������� � HP �������� change
void Character::Add_HP(int change) {
	if (HP <= 0) {
		cout << "Enemy died" << endl;
		HP = 0;
		return;
	}
	if (HP + change > 100) {
		HP = 100;
		return;
	}

	HP = HP + change;

	if (HP <= 0) {  //�������� �� �� < 0
		cout << "Enemy died" << endl;
		HP = 0;
	}
}

//���������� � SP �������� change
void Character::Add_SP(int change) {
	if (SP <= 0) {
		SP = 0;
	}
	if (SP + change > 100) {
		SP = 100;
		return;
	}

	SP = SP + change;

	if (SP <= 0) {  //�������� �� ������� < 0
		cout << "Out of Stamina" << endl;
		SP = 0;
	}
}

//���������� � MP �������� change
void Character::Add_MP(int change) {
	if (MP <= 0) {
		MP = 0;
	}
	if (MP + change > 100) {
		MP = 100;
		return;
	}

	MP = MP + change;

	if (MP <= 0) {  //�������� �� ���� < 0
		cout << "Out of Mana" << endl;
		MP = 0;
	}
}

//������ ����� �������� - ����������� ���� HP �� 15
void Character::Drink_Health_Potion() {
	Add_HP(15);
}

//������ ����� ������� - ����������� ���� SP �� 25
void Character::Drink_Stamina_Potion() {
	Add_SP(25);
}

//������ ����� ���� - ����������� ���� MP �� 20
void Character::Drink_Mana_Potion() {
	Add_MP(20);
}

//����� ����� ������ Character
void Character::Character_Output() {
	cout << endl;
	cout << "     Character:  " << endl;
	cout << "     HP:  " << HP << endl;
	cout << "     SP:  " << SP << endl;
	cout << "     MP:  " << MP << endl;
	cout << endl;
}

//������� ����. ������������ �������� - ��������� ����(�� �� �������� ����������� ��� ������ ������� ��������� � ���������� �����)
void Character::Default_Punch(Character &Enemy) {
	Enemy.Add_HP(-5);
	SP = SP - 10; //��������� 10 ������������ �������
	if (Enemy.Get_HP() <= 0) {
		Enemy.~Character();
	}
}



//����������� ����� ����//
// 
//����������� ������ ����
Magician::Magician() {
	Magic_Stick_Damage = 10;
}

//����� ����� ������ Magician
void Magician::Magician_Output() {
	cout << endl;
	cout << "     Magician:  " << endl;
	cout << "     HP:  " << HP << endl;
	cout << "     SP:  " << SP << endl;
	cout << "     MP:  " << MP << endl;
	cout << "     Stick Damage:  " << Magic_Stick_Damage << endl;
	cout << endl;
}

//��������� ������������ �� ������������� ������� ������ ���������
void Magician::Small_Magic_Spell(Character &Enemy) {
	Enemy.Add_HP(-10 * (Magic_Stick_Damage/10));
	MP = MP - 10; //��������� 10 ������������ �������
	if (Enemy.Get_HP() <= 0) {
		Enemy.~Character();
		cout << "Enemy died" << endl;
	}
}


//����� �������//
// 
//����������� ������ �������
Swordsman::Swordsman() {
	Sword_Damage = 10;
};

//����� ����� ������ ������
void Swordsman::Swordsman_Output() {
	cout << endl;
	cout << "     Swordsman:  " << endl;
	cout << "     HP:  " << HP << endl;
	cout << "     SP:  " << SP << endl;
	cout << "     MP:  " << MP << endl;
	cout << "     Sword Damage:  " << Sword_Damage << endl;
	cout << endl;
};

//���� ����� �� ������������� ������� ������ ���������
void Swordsman::Sword_Hit(Character& Enemy) {
	Enemy.Add_HP(-10 * (Sword_Damage / 10));
	SP = SP - 10;
};