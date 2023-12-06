#pragma once
#include <string>
using namespace std;
//����� �������� ���������
class Character{
	protected:
		int HP, SP, MP; //����: HP - Health Points - �������� ���������(�� ��������� 100)
						//      SP - Stamina Points - ������������ ���������(�� ��������� 100)
						//      MP - Magic Points - ���� ���������(�� ��������� 100)
						//      ��� �������� �������������

	public:
		//����������� - �� ��������� ������ ���� ��������������� �������� 100 
		Character();

		//����������(����������� ��� � ������, ����� HP ������� <= 0)
		~Character();

		//������ HP
		int Get_HP();

		//������ SP
		int Get_SP();

		//������ MP
		int Get_MP();

		//���������� � HP �������� change(�� ����� ���� < 0 � > 100)
		void Add_HP(int change);

		//���������� � SP �������� change(�� ����� ���� < 0 � > 100)
		void Add_SP(int change);

		//���������� � MP �������� change(�� ����� ���� < 0 � > 100)
		void Add_MP(int change);

		//������ ����� �������� - ����������� ���� HP �� 15
		void Drink_Health_Potion();

		//������ ����� cnfvbys - ����������� ���� HP �� 25
		void Drink_Stamina_Potion();

		//������ ����� ���� - ����������� ���� MP �� 20
		void Drink_Mana_Potion();

		//����������� ����� ����� ������ Character, �������� � ����������� �������
		virtual void Output() const;

		//������� ����. ������������ �������� - ��������� ����(�� �� �������� ����������� ��� ������ ������� ��������� � ���������� �����)
		void Default_Punch(Character &Enemy);

		
};


//����� ����, ���������� �� ������ ���������
class Magician : public Character{
	private:
		//���� - ���� ������ ����
		int Magic_Stick_Damage;
	public:

		//using Character::Character;
		// 
		//����������� ������ ����
		Magician();

		//����� ����� ������ Character
		void Output() const override;

		//��������� ����������
		void Small_Magic_Spell(Character &Enemy);

};


//����� ������� ���������� �� ������ ���������
class Swordsman : public Character {
	private:
		//���� - ���� ����
		int Sword_Damage;
	public:

		//����������� ������ �������
		Swordsman();

		//����� ����� ������ ������
		void Output() const override;

		//���� ����� �� ������������� ������� ������ ���������
		void Sword_Hit(Character& Enemy);

};