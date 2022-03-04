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
//  Noun: kid
//  action 1: the kid jumps
kid.jump();
//  action 2: the kid plays
kid.play();
//  action 3: the kid runs
kid.run();
//  2)
//  Noun: cat
//  action 1: the cat eats
cat.eat();
//  action 2: the cat scratches
cat.scratch();
//  action 3: the cat meows
cat.meow();
//  3)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog smells his food
dog.smellFood();
//  action 3: the dog sleeps
dog.sleep();
//  4)
//  Noun: bird
//  action 1: the bird sings
bird.sing();
//  action 2: the bird flies
bird.fly();
//  action 3: the bird migrates
bird.migrate();
//  5)
//  Noun: driver
//  action 1: the driver moves
driver.move();
//  action 2: the driver turns
driver.turn();
//  action 3: the driver brakes
driver.brake();
//  6)
//  Noun: fish
//  action 1: the fish swims
fish.swim();
//  action 2: the fish escapes
fish.escape();
//  action 3: the fish eats algae
fish.eatAlgae();
//  7)
//  Noun: pianist
//  action 1: the pianist plays Bach
pianist.playBach();
//  action 2: the pianist plays Mozart
pianist.playMozart();
//  action 3: the pianist plays Beethoven
pianist.playBeethoven();
//  8)
//  Noun: programmer
//  action 1: the programmer writes C++
programmer.writeCpp();
//  action 2: the programmer writes Java
programmer.writeJava();
//  action 3: the programmer writes Phython
programmer.writePhython();
//  9)
//  Noun: teacher
//  action 1: the teacher teaches Math
teacher.teachMath();
//  action 2: the teacher teaches English
teacher.teachEnglish();
//  action 3: the teacher teaches Music
teacher.teachMusic();
//  10)
//  Noun: violinist
//  action 1: the violinist plays intevals
violinist.playIntervals();
//  action 2: the violinist plays arpeggios
violinist.playArpeggios();
//  action 3: the violinist plays scales
violinist.playScales();


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
