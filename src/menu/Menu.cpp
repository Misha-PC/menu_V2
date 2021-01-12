
#include "Arduino.h"
#include "menu/Menu.h"
#include "menu/item/MenuItem.h"



Menu::Menu(String name){
    first   = new MenuSubItem(name, NULL);
    current = first;
}


void Menu::up(){

}

void Menu::down(){

}

void Menu::push(){

}
