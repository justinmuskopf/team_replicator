/*
 *  This header files defines the filenames of all icon image names
*/

#ifndef ICONS_H
#define ICONS_H

#include <QDebug>
#include <QString>
#include <QDir>
#include "menu.h"

const QString IMG_DIR = "icon/";                                            //Image directory
const QString BACKGROUND = IMG_DIR + "space.jpg";                           //Main page background
const QString SETTINGS_ICON = IMG_DIR + "settings.ico";                     //Settings Icon
const QString LOGO = IMG_DIR + "logo.png";                                  //Star-trek logo
const QString DESSERT_ICON = IMG_DIR + CATEGORIES[DESSERTS] + ".ico";       //Dessert Icon
const QString ENTREE_ICON = IMG_DIR + CATEGORIES[ENTREES] + ".ico";         //Entree Icon
const QString DRINK_ICON = IMG_DIR + CATEGORIES[DRINKS] + ".ico";           //Drink Icon
const QString SIDE_ICON = IMG_DIR + CATEGORIES[SIDES] + ".ico";             //Sides Icon
const QString APPETIZER_ICON = IMG_DIR + CATEGORIES[APPETIZERS] + ".ico";   //Appetizer Icon
const QString NOT_AVAILABLE_ICON = IMG_DIR + "not_available.jpg";           //"Image Not Available" icon
const QString KIDS_ICON = IMG_DIR + CATEGORIES[KIDS] + ".ico";              //Kid's menu Icon
const QString LOADING_GIF = IMG_DIR + "loading.gif";                        //Loading GIF for payments
const QString MERCH_ICON = IMG_DIR + CATEGORIES[MERCHANDISE] + ".ico";      //Merchandise Icon
const QString APPROVED_ICON = IMG_DIR + "approved.png";
const QString TABLE_ICON = IMG_DIR + "table.png";                           //Table icons

#endif // ICONS_H
