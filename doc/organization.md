# The Coding Dojo Toolkit
![](https://github.com/alebaffa/coding-dojo-toolkit/blob/master/img/Dojo.jpg)

This _toolkit_ contains tips and tricks coming from our (mine, and other contributors) personal experience in the organization of coding dojos in various contexts (companies, meetups, etc).

1. [What is a coding dojo?](#what-is-a-coding-dojo)
2. [Organization](#organization)
    - [Choose a date](#choose-a-date-and-stick-with-it)
    - [Time Schedule](#time-schedule)
    - [Session duration](#session-duration)
    - [How many people](#how-many-people)
    - [Location](#locationmeeting-rooms)
    - [Technical requirements](#technical-requirements)
        - [Free environment](#free-environment)
        - [Common development environment](#common-development-environment)
3. [Facilitate a coding dojo](#facilitate-a-coding-dojo)
    - [Is it your first coding dojo?](#is-it-your-first-coding-dojo)
    - [Your role as facilitator](#your-role-as-facilitator)
    - [Preparation](#preparation)
    - [Types of coding dojo](#types-of-coding-dojo)
        - [Randori](#randori)
        - [Mob programming](#mob-programming)
        - [Pair programming](#pair-programming)
        - [Prepared kata](#prepared-kata)
    - [Types of code katas](#types-of-code-katas)
        - [Algorithm](#algorithm)
        - [Refactoring](#refactoring)

## What is a coding dojo?
> A Dojo (道場) is a Japanese term which literally means "place of the way". [...] In the Western World, the term dōjō primarily refers to a training place specifically for Japanese martial arts such as aikido, judo, karate, or samurai [_Wikipedia_](https://en.wikipedia.org/wiki/Dojo)

In the Software World, a coding dojo is an event where a group of passionate coders get together in order to improve their coding skills, have fun and learn in a safe environment, away from deadlines and production issues.

***

## Organization
### Choose a date (and stick with it)
This can be seen as a general suggestion for all kind of events, but once you have chosen a date...stick with it. People come and go and nobody made them sign a contract to join your event (even though they have RSVP _yes_). If one person can't join you this time, he/she'll make it for another session.  

Also, if you want to make your coding dojo become a recurrent event, try to keep a fixed schedule so that people know in advance that on _this_ date in the future there will be a coding dojo. A fixed schedule can help you with the following:

* **the promotion**: it's easier to promote an event with fixed dates instead of trying to reach a lot of people each time you organize an event;
* **to grow your community**: people know in advance that, say, every 1st and 3rd Thursday of the month there is a coding dojo: they will organize their timetable accordingly well in advance.

### Time schedule
The options are: _morning_, _lunch_ or _evening_.

**If you're a Meetup** the only choice is in the **evening** (but if your mates are morning people, then _kudos_ :+1: ).

**If you're in a company** the choice is between lunch and after work. We've tried both. _Lunch doesn't really work_: it's too short and your thoughts are always on that production issue you were trying to fix in the morning. _Niet_. **After work is OK**.

:8ball: **Trick**: start the event just before 6PM. If you start at 5:30PM people don't feel they're doing too late, but neither they're taking time from their job.
### Session duration
In our experience the right duration is **~2h/2h30**. Less than this people feel they don't have enough time to deeply understand the requirements, or doing some pleasing code. It's more fulfilling to end a coding session with some cool stuff done/learned.
### How many people
In general, too many people can be difficult to manage. A good number can be **~10 people** for one facilitator. More than 10 people you may need an additional facilitator.

**Remember**: your role as facilitator is to to see what the participants are doing and try to help them (giving some hints or suggestions, not writing code for them). So, if there are too many people you may need a second facilitator.
### Location/Meeting rooms
You can organize a coding dojo in any place.

**In a pub**:
* make sure that they have **tables big enough** where several people can stay together and with enough space for their laptops (which can possibly stay one in front of another);
* make sure they have **power plugs** near the tables (this one is not strictly necessary if the battery last for 2 hours);
* make sure that the day of your event is not also a particularly crowded day in the pub (e.g.: **a sport event**! Unless you don't mind having an overcrowded pub during a coding session).

**Hosted by a local company:**
* try to ask some **companies nearby** (e.g. small ones like startups) if they would like to host your event. They could offer you an office and maybe some free food/drinks in exchange of promotions and exposure to a group of passionate software people. If your meetup/community is big enough, try to see if some of the members work in one of these local companies;
* the room should be big enough for everyone, equipped with **power plugs** and, even better, **a projector**.
* if you managed to be hosted by a **big local company**, make sure that their **security constraints** are not too strict for your event (e.g.: if you have to leave before 8PM, or if everyone needs a visitor badge, etc). Do not forget to ask these kind of things in advance because you may need to do some stuff some days before the event.

### Technical requirements
#### Free environment
Depending on the type of coding dojo you want to organize, you can let people code using their favorite programming language/development environment. In general, during a pair programming session it's up to people to talk with their peers and organize themselves.
#### Common development environment
If you want to have all the participants using the same development environment (e.g. for randori sessions), we have prepared [this Vagrant image](https://github.com/alebaffa/coding-dojo-toolkit/wiki/Linux-development-environment-in-Vagrant) ready to use. It contains all the necessary libraries for Python, C++, Java and Go (Scala and SBT coming soon).

***

## Facilitate a coding dojo
### Is it your first coding dojo?
If you have already participated to other coding dojos, go ahead and have fun!

On the contrary, if it is the very first time you participate _AND_ organize one...well, the best option would be to ask someone who has some experience with this kind of activities in order to help you with the facilitation. There are things that you may not know regarding how to approach a group of people that it's better to learn from someone who knows how to do it.

If you really don't find anybody to help, don't worry. You can always DYI and read [some books](https://leanpub.com/codingdojohandbook) or see [some videos on YouTube](https://www.youtube.com/watch?v=gav9fLVkZQc). It's not rocket science, you can do it :yum: .
### Your role as facilitator
### Preparation
Things that have to be prepared before the event:
* **define the code kata** you want to propose during the Coding Dojo.
* **define the format** of the event itself: pair programming, mob programming, prepared kata, etc... This can depend also on the number of participants and on their level of experience with this kind of activities.
:8ball: **Trick**: in my experience it's better to do the first session as a prepared kata so that people can see what it means working in TDD and the dynamic of the _driver-navigator_.
* **take care of food/drink**: it's always nice to offer something to eat and drink to the participants. It shows care and it also helps to make them more relaxed (of course something light, you don't want to have people sleeping after 15 minutes :smile:).

### Types of coding dojo
#### Randori
#### Mob programming
#### Pair programming
#### Prepared kata
### Types of code katas
#### Algorithm
#### Refactoring
