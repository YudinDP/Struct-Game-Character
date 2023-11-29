#include "Game_Character_Struct.h"//заголовочный файл с классом и его наследниками
#include <iostream>//ввод-вывод
using namespace std;

int main()
{
    Magician Harry;
    Swordsman Zoro;

    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro); //тест на работу убийства персонажа
    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro);
    Harry.Small_Magic_Spell(Zoro);

    Zoro.Swordsman_Output();


}

