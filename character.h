#include <bits/stdc++.h>
using namespace std;
class character
{
  protected:
  
  //who is this person, and where are they from
  string title; //Superhero name, like Iron Man, Green Goblin, or Doctor Doom
  string identity; //Actual name, like Tony Stark, Norman Osborn, Harry Osborn, or Victor Von Doom
  string franchise; //This character's home franchise, like Iron Man, Spier-Man, Fantastic Four, Avengers, or X-Men
  string era; //The time this version of the character is from
  
  //what can this person do
  //abilities get some classes
  //status effects/buffs/debuffs get a class
  
  //Move to nemesis class
  //who does this person fight
  string nemesis_name; //for a specific version of a nemesis
  string nemesis_identity; //for all versions of a nemesis
  string nemesis_team; //for a group of nemeses
  
  public:
  void set_title (string name) {title=name;}
  void set_identity (sting name) {identity=name;}
  void set_franchise (string name) {franchise=name;}
};
