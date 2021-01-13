
#include "Arduino.h"
#include "menu/Menu.h"
#include "menu/item/MenuItem.h"



Menu::Menu(String name){
    first   = new MenuItem(SUB_ITEM, name);
    current = first;
}

void Menu::create(item_type type, String name, void *(f)() = NULL){
    current->next = new MenuItem(type, name, current);
    current = current->next;
}


void Menu::up(){
    if(current->previous != NULL){
        current = current->previous;
    }
}

void Menu::down(){
    if(current->next != NULL){
        current = current->next;
    }
}

void Menu::push(){
    if(current->type == SUB_ITEM){
        if(current->onwards != NULL){
            current = current->onwards;
        }
    }
    else{
        if(current->f != NULL){
            current->f;
        }        
    }
}
