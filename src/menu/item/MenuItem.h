/*
 *       ->parent
 *         |->previous
 *         |->CURRENT
 *         |  |->onwards
 *         |->next
 * 
 */

#if !defined(MENU_ITEM_H)
#define MENU_ITEM_H

#include "Arduino.h"

enum item_type{
    SUB_ITEM, END_ITEM
};

class MenuItem{
public:
    item_type type;
    String    name;
    MenuItem *previous;
    MenuItem *parrent;

    MenuItem *next;
    
    MenuItem *onwards;
    void *(f);

    MenuItem(item_type type, String name, MenuItem *previous = NULL, MenuItem *parrent = NULL){ 
        this->name     = name;
        this->type     = type;
        this->parrent  = parrent;
        this->previous = previous;    
    }
};

/*
class MenuSubItem: public IMenuItem{
public:

    MenuSubItem(String n, IMenuItem *p){ 
        this->name = n;
        this->parrent = p;    
    }
};

class MenuEndItem: public IMenuItem{
public:

    MenuEndItem(String n, IMenuItem *p){ 
        this->name = n;
        this->parrent = p;    
    }
};

*/


#endif // MENU_ITEM_H
