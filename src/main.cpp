#include "libtcod.hpp"
#include "iostream"

using namespace std;

int main() {
 TCODConsole::initRoot(40,25,"Demo",false);
 while (!TCODConsole::isWindowClosed())
 {
   TCOD_key_t key;
   TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
   TCODConsole::root->clear();
   TCODConsole::setCustomFont("res/Untitled.png", 0, 100, 100);
   TCODConsole::root->putCharEx(20, 12, 2, TCODColor(255, 255, 255), TCODColor(0, 0, 0));
   TCODConsole::flush();
   if (TCODConsole::isKeyPressed(TCOD_keycode_t::TCODK_ESCAPE))
    return false;
 }
 return 0;
}