#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: van 
//  action 1: moves forwards
van.movesForward();
//  action 2: moves backwards
van.movesBackward();
//  action 3: idles
van.idle();

//  2)
//  Noun: person
//  action 1: looks up 
person.lookUp();
//  action 2: looks left
person.lookLeft();
//  action 3: looks right
person.lookRight();

//  3)
//  Noun: dog
//  action 1: barks
dog.bark();
//  action 2: sniffs
dog.sniff();
//  action 3: growls
dog.growl();

//  4)
//  Noun: ipod
//  action 1: plays song
ipod.playSong();
//  action 2: plays album
ipod.playAlbum();
//  action 3: pauses
ipod.pause();

//  5)
//  Noun: kettle
//  action 1: boils
kettle.boilWater();
//  action 2: explodes
kettle.explode(); // ..?
//  action 3: pours
kettle.pour();

//  6)
//  Noun: electricBassGuitar
//  action 1: plays open E
electricBassGuitar.soundOpenE();
//  action 2: plays chord 
electricBassGuitar.playChord();
//  action 3: electrocutes
electricBassGuitar.electrocutePlayer();

//  7)
//  Noun: fridge
//  action 1: cools
fridge.cool();
//  action 2: freezes
fridge.freeze();
//  action 3: makes sound
fridge.soundHum();

//  8)
//  Noun: phone
//  action 1: calls
phone.call();
//  action 2: texts
phone.text();
//  action 3: vibrates
phone.vibrate();

//  9)
//  Noun: kindle
//  action 1: charges
kindle.chargeBattery();
//  action 2: illuminate screen
kindle.illuminateScreen();
//  action 3: syncs latest book
kindle.syncLibrary();

//  10)
//  Noun: water
//  action 1: freezes
water.freeze();
//  action 2: spills
water.spill();
//  action 3: boils
water.boil();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
