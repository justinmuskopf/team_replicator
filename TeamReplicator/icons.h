#ifndef ICONS_H
#define ICONS_H

#include <QDebug>
#include <QString>
#include <QDir>
#include "menu.h"

const QString IMG_DIR = "icon/";
const QString BACKGROUND = IMG_DIR + "space.jpg";
const QString SETTINGS_ICON = IMG_DIR + "settings.ico";
const QString LOGO = IMG_DIR + "logo.png";
const QString DESSERT_ICON = IMG_DIR + CATEGORIES[DESSERTS] + ".ico";
const QString ENTREE_ICON = IMG_DIR + CATEGORIES[ENTREES] + ".ico";
const QString DRINK_ICON = IMG_DIR + CATEGORIES[DRINKS] + ".ico";
const QString SIDE_ICON = IMG_DIR + CATEGORIES[SIDES] + ".ico";
const QString APPETIZER_ICON = IMG_DIR + CATEGORIES[APPETIZERS] + ".ico";
const QString NOT_AVAILABLE_ICON = IMG_DIR + "not_available.jpg";
#endif // ICONS_H
