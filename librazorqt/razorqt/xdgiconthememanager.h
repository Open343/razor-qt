#ifndef XDGICONTHEMEMANAGER_H
#define XDGICONTHEMEMANAGER_H


/**
 * @file xdgiconthememanager.h
 * @brief Declares the class Xdgiconthememanager
 * @date 9.9.2010 (DDMMYYYY)
 * @author Christopher "VdoP" Regali
  */

#include "defs.h"
#include "xdgiconthemefile.h"
#include "xdgenv.h"


/**
 * @brief shall manage the icon-themes and select the active one
 * @todo this class is a stub now.. needs some work
 */
class XdgIconThemeManager
{
public:
    XdgIconThemeManager(QString _filename,XdgEnv* _env);
    ~XdgIconThemeManager();
    XdgIconThemeFile* get_activeTheme();
    QIcon getIconNG(QString _iconname);
    QString getIconpath(QString _iconfield, QString _desktopfilepath, QString _category="Applications");
    QMap<QString, QString> legacyMap;
private:
    QString theme;
    QString themePath;
    QString legacydir;
    QStringList foundThemes;
    XdgIconThemeFile* activeTheme;
    XdgIconThemeFile* fallbackTheme;
    XdgEnv* iconEnv;

};



#endif