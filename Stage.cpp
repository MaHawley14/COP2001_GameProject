using std::cout;

class Stage {
public:
    void drawSetting() { void castle(); }

    void drawEnemy() { void mobs(); }

    void clearStage() { void clearScreen(); }
};

class Setting: Stage {
public:
    void castle() {
        // Prints the castle exterior. Based from web searches
        cout << "       *                                        ^           *       \n";
        cout << "                       / \\         *          / \\                 \n";
        cout << "            *         /   \\                  /                     \n";
        cout << "                     /_|_|_\\                /_|_|_\\       *       \n";
        cout << "                _   _  | |    _    ___    _    | |  _   _           \n";
        cout << "       *       | |_| |_| |_ _| |__|   |__| |__ | |_| |_| |          \n";
        cout << "               |                                         |          \n";
        cout << "               |       [ ]                     [ ]       |          \n";
        cout << "               |__  _                               __ __|          \n";
        cout << "                     |                             |                \n";
        cout << "                     |             /               |                \n";
        cout << "                     |            |   |            |                \n";
        cout << "                     |            |   |            |                \n";
        cout << "\n\n\n";
    }
};

class Enemy: Stage {
public:
    void mobs() {
        // Prints the 2nd floor mobs.
        cout << "                                @  (~)                              \n";
        cout << "                                |__/|\\                |            \n";
        cout << "         (-|-)                  |   | ~#               |            \n";
        cout << "           |  (@)               |  / \\               -|- (@)       \n";
        cout << "          {|}==|                                      {|}==|        \n";
        cout << "           |   |                                       *   |        \n";
        cout << "              / \\                                        / \\      \n";
        cout << "\n\n\n";
    }
};

class Clear: Stage {
    // Clears the stage
    void clearScreen() {
        for (int i = 0; i < 15; i++) {
            cout << "\n";
        }
        cout << std::endl; // force flush
    }
};