#if !defined(MENU_H)
#define MENU_H

#include "menu/item/MenuItem.h"



class Menu{
private:
    MenuItem* first;
    MenuItem* current;
    MenuItem* parent;



public:
    Menu(String name);

    void create(item_type type, String name, void *(f)() = NULL);

    void up();
    void down();
    void push();
    void back(); 

};


#endif // MENU_H
