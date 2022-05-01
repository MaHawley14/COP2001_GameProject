#include <string>
#include "Stage.cpp"
using std::string;
using std::cout;
using std::cin;

class Story {
public:
void intro() {
    // Initialize variables
    string exitAnswer;
    string battleAnswer;

    // Begin story & Print setting
    Stage cs = Stage();
    cs.drawSetting();
    cout << "An abandon castle appears before you reflecting light from the stars.";
    cout << "\nThe stone worn from years of neglect, the air chilled with lives lost.";
    cout << "\nWill you keep moving forward? (y/n)";
    exitCheck(exitAnswer);

    // Describe the feeling from the setting
    cout << "\nAfter entering the castle you see stairs which lead to the second floor";
    cout << "\nand the closer you get the stronger an oppressive power weighs against you.";
    void clearScreen();

    // Describe the next scene
    cs.drawEnemy();
    cout << "\nAs you climb the stairs the oppressive feeling increasings and 3 enemies appear when you reach the top.";
    cout << "\nThe enemy in the middle appears to be a lich, whose eyes glow with oppressive magic.";
    cout << "\nThe other two are skeleton guardians, both equipped with armor";
    cout << "\none wields a claymore, the other a battleaxe.";
    cout << "\nThe twin guardians notice, charge and attack immediately.";
    cout << "\nWhat will you do? (Counter/Dodge)";

    if(battleAnswer[0] == 'C' || battleAnswer[0] == 'c') {
        cout << "\nWhile the battleaxe was countered, the claymore appears through your abdomen from the back.";
        cout << "\nYou cough blood, before, your eyes close forever.";
    }
    if(battleAnswer[0] == 'D' || battleAnswer[0] == 'd') {
        cout << "\nWhile both weapons where dodged, several ice spears are lodged in you chest and abdomen.";
        cout << "\nYou look up and see a spark from the liches glowing eyes and hand outstretched.";
        cout << "\nFinally, coughing up blood, your eyes close forever.";
    }
}

bool exitCheck(string exitAnswer) {
    // Based on the UI.cpp files from class lectures
    cin >> exitAnswer;
    if (exitAnswer[0] == 'N' || exitAnswer[0] == 'n') { return true; }
    return false;
}
};