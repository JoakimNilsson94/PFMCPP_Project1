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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: oven
//  action 1: the oven cooks food
oven.cookFood();
//  action 2: the oven consumes gas
oven.consumeGas();
//  action 3: the oven keeps heat
oven.keepHeat();
//  2)
//  Noun: table
//  action 1: the table holds plates
table.holdPlate();
//  action 2: the table stands
table.stand();
//  action 3: the table deteriorates
table.deteriorate();
//  3)
//  Noun: car
//  action 1: the car ignites engine
car.ingiteEngine();
//  action 2: the car transports 
car.transport();
//  action 3: the car recharges battery
car.rechargeBattery();
//  4)
//  Noun: dog
//  action 1: the dog waggles tail
dog.waggleTail();
//  action 2: the dog barks
dog.bark();
//  action 3: the dog bites
dog.bite();
//  5)
//  Noun: phone charger
//  action 1: the phone charger charges
phoneCharger.chargePhone();
//  action 2: the phone charger consumes electricity
phoneCharger.consumeElectricity();
//  action 3: the phone charger gets warm
phoneCharger.getWarm();
//  6)
//  Noun: fork
//  action 1: the fork penetrates food
fork.penetrateFood();
//  action 2: the fork holds food
fork.holdFood();
//  action 3: the fork drops food
fork.dropFood();
//  7)
//  Noun: towel
//  action 1: the towel absorbes water
towel.absorbWater();
//  action 2: the towel hangs
towel.hang();
//  action 3: the towel cleans
towel.clean();
//  8)
//  Noun: air conditioner
//  action 1: the air conditioner cools room
airConditioner.coolRoom();
//  action 2:the air conditioner blows air
airConditioner.blowAir();
//  action 3: the air conditoner rotates blade
airConditioner.rotateBlade();
//  9)
//  Noun: candle
//  action 1: the candle burns
candle.Burn();
//  action 2: the candle illuminates attic
candle.illuminateAttic();
//  action 3: the candle starts fire
candle.startFire();
//  10)
//  Noun: beer tap
//  action 1: the beer tap pours
beerTap.pour();
//  action 2: the beer tap chills
beerTap.chill();
//  action 3: the beer tap creates foam
beerTap.createFoam();


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
