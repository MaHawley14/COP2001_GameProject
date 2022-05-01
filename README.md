# Matthew Hawley
# COP2001_GameProject

1 - 3 points for overall project:

Solid Prototype (meets requirements): 1 pt
Good prototype (meets and shows extra work): 1 pt + 1 extra credit
Solid Prototype (GUI or Handles Keyboard Input): 1pt + 2 extra credit
ALL PROJECTS REQUIRE : (5 pts)

Inherited classes (at least 3) - don't have to be 3 from same parent (3 pts)
These can be standard inheritance or abstracted classes
Written in a: (.5 pts)
OOP style
Data Oriented Style
Event-Driven style
Or a combo of these 3
Meaning it should follow our standard style guide
Is commented (documented) where needed (.5 pts)
Accepts "commands" and provides output based on these commands (1 pt)
Commands can be simple cin/getline and cout/printf
Extra credit given for using key press events
 

Text-based adventure

Must have (2 pts - 1 each):
Battle of Player vs. Mob or Boss
Can have multiple
"Battle" can be "challenge"
You meet the Sphynx and it asks a simple riddle (Links to an external site.)
The T.a.r.d.i.s. Appears in front of you: How do you open it?
hint: see Item mechanic
 (Links to an external site.)This means you must at least have a Player Character Class and some type of enemy class
A background image and "moving" animation frame
This can be a single line animation but background should change when you change scenes
You can stay in the same area the whole game but change background because of "events"
Must have at least 1 of the following: (1pt)
Multiple rooms with map
I.e. you show the character moving on a map after each decision
This counts as animation so no animation bar needed if this done
Item mechanic (Treasure or other inventory)
A few simple images added to screen for the items is fine
Having a command "check inventory" is also fine
Should include description of item
Struct is good for this
Mechanic meaning - You must have a certain item to enter a room or leave
For instance: "You need the blue key to open the blue door"
Accepting full commands from user and determining an outcome
I.e. using windows.h or curses (mac/linux) for key press
Prints in different language
By this I mean use unicode to print out non-Latin characters
Doesn't have to be a fully built writing system or language
Battle mechanics
Personally I use Pathfinder's which are (assuming 1 swing attack - dual strikes add another 2d6):
avg(2d6) + stat modifier * avg(sum(other_modifiers)
So: A warrior with a strength of 22 (22/3 rounds to +3) who gets a dual-strike on axes and is facing a bard (which he gets a +2 on) and has Rage skill going for +5 = (assuming rolled a 3, 4, 2, 6)
((3+4)/2) + (2+6)/2) + 3) * ((2 + 5)/2)) = (3.5 + 4 + 3) * (3.5) = 26 damage
