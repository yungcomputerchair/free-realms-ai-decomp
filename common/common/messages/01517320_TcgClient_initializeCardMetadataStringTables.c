// addr: 0x01517320
// name: TcgClient_initializeCardMetadataStringTables
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TcgClient_initializeCardMetadataStringTables(void) */

void TcgClient_initializeCardMetadataStringTables(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined4 local_4;
  
                    /* Initializes TCG card metadata lookup tables from integer keys to strings:
                       spheres/colors/card types, traits/classes, equipment slots, and artist
                       credits. Evidence is the large sequence of map inserts for strings such as
                       Nature, Blue, Avatar, Alchemist, Weapon, and InvalidArtist. */
  DAT_01cbeb44 = 1;
  local_4 = 0x15f91;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0x15f92;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Nature",6);
  local_4 = 0x15f96;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Chaos",5);
  local_4 = 0x15f97;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Machine",7);
  local_4 = 0x15f98;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Order",5);
  local_4 = 0x15f91;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0x15f92;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Blue",4);
  local_4 = 0x15f93;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Yellow",6);
  local_4 = 0x15f94;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Red",3);
  local_4 = 0x15f95;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Green",5);
  local_4 = 0x15f96;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"None",4);
  local_4 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Base",4);
  local_4 = 0x1b;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,(char *)&PTR_LAB_017ee650,3);
  local_4 = 0x29;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Start of Game",0xd);
  local_4 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0x15fd9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Avatar",6);
  local_4 = 0x15fda;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Creature",8);
  local_4 = 0x15fdb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Item",4);
  local_4 = 0x15fdc;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Trick",5);
  local_4 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0x161ac;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Hero",4);
  local_4 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0x15fca;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Adventurer",10);
  local_4 = 0x15fcd;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Alchemist",9)
  ;
  local_4 = 0x15f98;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Animal",6);
  local_4 = 0x15fd3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Archer",6);
  local_4 = 0x15fd6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Artifact",8);
  local_4 = 0x15fa7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Banshee",7);
  local_4 = 0x15fb9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Bat",3);
  local_4 = 0x15fc8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Bear",4);
  local_4 = 0x15fa0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Bird",4);
  local_4 = 0x15fa5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Bixie",5);
  local_4 = 0x15f92;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Blacksmith",10);
  local_4 = 0x15fbd;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Brawler",7);
  local_4 = 0x15fd2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Card Duelist",0xc);
  local_4 = 0x15f9b;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Carnivorous Plant",0x11);
  local_4 = 0x15fc9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Carnivous",9)
  ;
  local_4 = 0x15fa2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Changeling",10);
  local_4 = 0x15fbe;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Chef",4);
  local_4 = 0x15f96;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Chugawug",8);
  local_4 = 0x15fab;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Clockwork",9)
  ;
  local_4 = 0x15fb5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Condition",9)
  ;
  local_4 = 0x15fd8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Deer",4);
  local_4 = 0x15fd1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Destruction Derby Driver",0x18);
  local_4 = 0x15fc5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Driver",6);
  local_4 = 0x15fa9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Dwarf",5);
  local_4 = 0x15fc4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Eagle",5);
  local_4 = 0x15fbf;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Event",5);
  local_4 = 0x15fc1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Explorer",8);
  local_4 = 0x15fad;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Fairy",5);
  local_4 = 0x15fcf;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Fashion Designer",0x10);
  local_4 = 0x15f9a;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Floren",6);
  local_4 = 0x15fa6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Forest Troll",0xc);
  local_4 = 0x15fda;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Fungaloid",9)
  ;
  local_4 = 0x15fa4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Giant",5);
  local_4 = 0x15fb4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Gloam",5);
  local_4 = 0x15fc2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Goblin",6);
  local_4 = 0x15fa8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Golem",5);
  local_4 = 0x15f93;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Hooligan",8);
  local_4 = 0x15fd4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Hero",4);
  local_4 = 0x15fd5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Snake",5);
  local_4 = 0x15faa;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Human",5);
  local_4 = 0x15fb7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Item",4);
  local_4 = 0x15fb3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Location",8);
  local_4 = 0x15fa3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Mammal",6);
  local_4 = 0x15fb6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Maneuver",8);
  local_4 = 0x15fc7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Medic",5);
  local_4 = 0x15fcb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Miner",5);
  local_4 = 0x15f97;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Ninja",5);
  local_4 = 0x15fbc;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Penguin",7);
  local_4 = 0x15fd9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pet Trainer",0xb);
  local_4 = 0x15f99;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Pixie",5);
  local_4 = 0x15fb0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Plant",5);
  local_4 = 0x15fbb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Postman",7);
  local_4 = 0x15fd0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Racecar Driver",0xe);
  local_4 = 0x15fc3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Raven",5);
  local_4 = 0x15fa1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Reptile",7);
  local_4 = 0x15f94;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Robgoblin",9)
  ;
  local_4 = 0x15fcc;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Runecaster",10);
  local_4 = 0x15fc6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Smith",5);
  local_4 = 0x15fb8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Spider",6);
  local_4 = 0x15f9f;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Stone Troll",0xb);
  local_4 = 0x15fae;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Toad",4);
  local_4 = 0x15fd7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Thugawug",8);
  local_4 = 0x15f9d;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Tree Soldier",0xc);
  local_4 = 0x15fac;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Undead",6);
  local_4 = 0x15fb1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Unique",6);
  local_4 = 0x15fce;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Veterinarian",0xc);
  local_4 = 0x15f9c;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Vine Golem",10);
  local_4 = 0x15fc0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Warrior",7);
  local_4 = 0x15f9e;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Wizard",6);
  local_4 = 0x15fba;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Wraith",6);
  local_4 = 0x15faf;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Wolf",4);
  local_4 = 0x15f95;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Yeti",4);
  local_4 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0x15f9c;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Belt",4);
  local_4 = 0x15f93;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Boots",5);
  local_4 = 0x15f9e;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Chest",5);
  local_4 = 0x15f97;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Feet",4);
  local_4 = 0x15f9b;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Gloves",6);
  local_4 = 0x15f95;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Hands",5);
  local_4 = 0x15f92;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Hat",3);
  local_4 = 0x15f98;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Head",4);
  local_4 = 0x15f99;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Jewelry",7);
  local_4 = 0x15f9a;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Legs",4);
  local_4 = 0x15f94;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Shirt",5);
  local_4 = 0x15f9d;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Shoulders",9)
  ;
  local_4 = 0x15f96;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Weapon",6);
  local_4 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_4 = 0x160a8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"InvalidArtist",0xd);
  local_4 = 0x16192;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Asafat",0xd);
  local_4 = 0x16193;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Asafat / Faisal",0x16);
  local_4 = 0x16194;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Faisal",0xd);
  local_4 = 0x16195;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Faisal / Asafat",0x16);
  local_4 = 0x16196;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Faisal /Therianto",0x18);
  local_4 = 0x16197;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Iwanaga",0xe);
  local_4 = 0x16198;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Lasahido",0xf);
  local_4 = 0x16199;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Lasahido / Faisal",0x18);
  local_4 = 0x1619a;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Lina / Faisal",0x14);
  local_4 = 0x1619b;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Therianto / Faisal",0x19);
  local_4 = 0x1619c;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Angga Satriohadi",0x10);
  local_4 = 0x1619d;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Anna Fehr",9)
  ;
  local_4 = 0x1619e;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Arnaud Pheu",0xb);
  local_4 = 0x1619f;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Asafat / Faisal",0xf);
  local_4 = 0x161a0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Bordeleau / Fehr",0x10);
  local_4 = 0x161a1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Buddy Jiang",0xb);
  local_4 = 0x161a2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Chew / Kinsun",0xd);
  local_4 = 0x161a3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Chin / Verasunthorn",0x13);
  local_4 = 0x161a4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Chris Stevens",0xd);
  local_4 = 0x161a5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Derek Herring",0xd);
  local_4 = 0x161a6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Diana Connolly",0xe);
  local_4 = 0x161a7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Duberger / Bordeleau",0x14);
  local_4 = 0x161a8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Duberger / Fehr",0xf);
  local_4 = 0x161a9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Duberger / Pitre-Durocher",0x19);
  local_4 = 0x161aa;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Duberger / Raj",0xe);
  local_4 = 0x161ab;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Duberger / Satriohadi",0x15);
  local_4 = 0x161ac;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Duberger / The",0xe);
  local_4 = 0x161ad;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Edwin Rosell",0xc);
  local_4 = 0x161ae;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Elda The",8);
  local_4 = 0x161af;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Faisal / Asafat",0xf);
  local_4 = 0x161b0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Fehr / Chartrand",0x10);
  local_4 = 0x161b1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Fehr / Dillon",0xd);
  local_4 = 0x161b2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Fehr / Raj",10);
  local_4 = 0x161b3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Fehr / Velinov",0xe);
  local_4 = 0x161b4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Hassegawa / Duberger",0x14);
  local_4 = 0x161b5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Hassegawa / Satriohadi",0x16);
  local_4 = 0x161b6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Ho / Herring",0xc);
  local_4 = 0x161b7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Ilyasa / Fajar",0xe);
  local_4 = 0x161b8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Ilyasa / Kang",0xd);
  local_4 = 0x161b9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Ilyasa / Kinsun",0xf);
  local_4 = 0x161ba;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Ilyasa / Verasunthorn",0x15);
  local_4 = 0x161bb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Jason Johnson",0xd);
  local_4 = 0x161bc;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Jean-Sebastien Duberger",0x17);
  local_4 = 0x161bd;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Kang / Chew",0xb);
  local_4 = 0x161be;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Kang / Jiang",0xc);
  local_4 = 0x161bf;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Kang / Kinsun",0xd);
  local_4 = 0x161c0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Kang / Ng",9)
  ;
  local_4 = 0x161c1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Kang / Rambaud",0xe);
  local_4 = 0x161c2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Kang / Verasunthorn",0x13);
  local_4 = 0x161c3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Kevin Shoemaker",0xf);
  local_4 = 0x161c4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Lasahido / Faisal",0x11);
  local_4 = 0x161c5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Liang / Pitre-Durocher",0x16);
  local_4 = 0x161c6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Liang / Velinov",0xf);
  local_4 = 0x161c7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Lifan / Raj",0xb);
  local_4 = 0x161c8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Lifan / Satriohadi",0x12);
  local_4 = 0x161c9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Marcellius / Hutomo",0x13);
  local_4 = 0x161ca;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Marcellius / Kholinne",0x15);
  local_4 = 0x161cb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Marcellius / Kinsun",0x13);
  local_4 = 0x161cc;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Marcellius / Rambaud",0x14);
  local_4 = 0x161cd;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / Bordeleau",0x13);
  local_4 = 0x161ce;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / De Sousa",0x12);
  local_4 = 0x161cf;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / Dillon",0x10);
  local_4 = 0x161d0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / Duberger",0x12);
  local_4 = 0x161d1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / Fehr",0xe);
  local_4 = 0x161d2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / Pitre-Durocher",0x18);
  local_4 = 0x161d3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / Raj",0xd);
  local_4 = 0x161d4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / Satriohadi",0x14);
  local_4 = 0x161d5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Masurel / The",0xd);
  local_4 = 0x161d6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Mike Pavlovich",0xe);
  local_4 = 0x161d7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Perreira / Bordeleau",0x14);
  local_4 = 0x161d8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Perreira / Duberger",0x13);
  local_4 = 0x161d9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Perreira / Raj",0xe);
  local_4 = 0x161da;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pheu / Bordeleau",0x10);
  local_4 = 0x161db;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pheu / De Sousa",0xf);
  local_4 = 0x161dc;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pheu / Dillon",0xd);
  local_4 = 0x161dd;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pheu / Pitre-Durocher",0x15);
  local_4 = 0x161de;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pheu / Raj",10);
  local_4 = 0x161df;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pheu / The",10);
  local_4 = 0x161e0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pitre-Durocher / Bordeleau",0x1a);
  local_4 = 0x161e1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pitre-Durocher / Chartrand",0x1a);
  local_4 = 0x161e2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pitre-Durocher / Dillon",0x17);
  local_4 = 0x161e3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pitre-Durocher / Fehr",0x15);
  local_4 = 0x161e4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Pitre-Durocher / Rivard",0x17);
  local_4 = 0x161e5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj  / Dillon",0xd);
  local_4 = 0x161e6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"New Key (rename me!)",0x14);
  local_4 = 0x161e7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / Chartrand",0xf);
  local_4 = 0x161e8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / De Sousa",0xe);
  local_4 = 0x161e9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / Duberger",0xe);
  local_4 = 0x161ea;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / Fehr",10);
  local_4 = 0x161eb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / Pheu",10);
  local_4 = 0x161ec;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / Pitre-Durocher",0x14);
  local_4 = 0x161ed;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / Rivard",0xc);
  local_4 = 0x161ee;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Raj / Satriohadi",0x10);
  local_4 = 0x161ef;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Raj / The",9)
  ;
  local_4 = 0x161f0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Roger Chamberlain",0x11);
  local_4 = 0x161f1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Rosero / Jiang",0xe);
  local_4 = 0x161f2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Rosero / Kinsun",0xf);
  local_4 = 0x161f3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Samson Ledesma",0xe);
  local_4 = 0x161f4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Sara Pitre-Durocher",0x13);
  local_4 = 0x161f5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Satriohadi / Duberger",0x15);
  local_4 = 0x161f6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Steve Thoma",0xb);
  local_4 = 0x161f7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Stevens / Ibarra",0x10);
  local_4 = 0x161f8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Stevens / Oatley",0x10);
  local_4 = 0x161f9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Stevens / Oh",0xc);
  local_4 = 0x161fa;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Strauss / Hubrich",0x11);
  local_4 = 0x161fb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Sunder Raj",10);
  local_4 = 0x161fc;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Afif / Therianto",0x10);
  local_4 = 0x161fd;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Chew / Verasunthorn",0x13);
  return;
}

