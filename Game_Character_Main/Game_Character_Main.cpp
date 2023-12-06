#include "Game_Character_Struct.h"//заголовочный файл с классом и его наследниками
#include <iostream>//ввод-вывод
using namespace std;

int main()
{
    Magician Harry;
    Swordsman Zoro;

    

    Character* Man = &Harry;
    ((Swordsman*)Man)->Sword_Hit(Zoro);
    dynamic_cast<Magician*>(Man)->Small_Magic_Spell(Zoro); 
    static_cast<Magician*>(Man)->Small_Magic_Spell(Zoro);

    Zoro.Output();
}

