#if !defined(MENU_H)
#define MENU_H

#include "menu/item/MenuItem.h"

enum item_type{
    SUB_ITEM, END_ITEM
};

class Menu{
private:
    IMenuItem* first;
    IMenuItem* current;



public:
    Menu(String name);

    void create(item_type type, String name, void *(f)() = NULL);

    void up();
    void down();
    void push();
    void back(); 

};


#endif // MENU_H
