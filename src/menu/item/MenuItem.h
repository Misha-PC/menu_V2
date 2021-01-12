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

class IMenuItem{
public:
    String     name;
    IMenuItem *next;
    IMenuItem *previous;
    IMenuItem *parrent;

};

class MenuSubItem: public IMenuItem{
public:
    IMenuItem *onwards;

    MenuSubItem(String n, IMenuItem *p){ 
        this->name = n;
        this->parrent = p;    
    }
};

class MenuEndItem: public IMenuItem{
public:
    void *(f);

    MenuEndItem(String n, IMenuItem *p){ 
        this->name = n;
        this->parrent = p;    
    }
};




#endif // MENU_ITEM_H
