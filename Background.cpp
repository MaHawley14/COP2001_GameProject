#include <string>

using std::string;
using std::cout;

class Background {
protected:
    string castleDesign = "";

public:
    void drawBackground() {
        cout << castleDesign;
    }

    void drawBoss() {

    }
};

class Castle: public Background {
    Castle() {
        cout << "   *                                        ^           *       \n";
        cout << "                   / \\         *          / \\                 \n";
        cout << "        *         /   \\                  /                     \n";
        cout << "                 /_|_|_\\                /_|_|_\\       *       \n";
        cout << "            _   _  | |    _    ___    _    | |  _   _           \n";
        cout << "   *       | |_| |_| |_ _| |__|   |__| |__ | |_| |_| |          \n";
        cout << "           |                                         |          \n";
        cout << "           |       [ ]                     [ ]       |          \n";
        cout << "           |__  _                               __ __|          \n";
        cout << "                 |                             |                \n";
        cout << "                 |             /               |                \n";
        cout << "                 |            |   |            |                \n";
        cout << "                 |            |   |            |                \n";
    }
};

class Enemy: public Background {
private:
    string bossDesign = "";

    Boss(string bossDesign) {
        bossDesign = "  (_)  " +
                     " --|-- " +
                     "   |   " +
                     "  / \  ";
    }
};