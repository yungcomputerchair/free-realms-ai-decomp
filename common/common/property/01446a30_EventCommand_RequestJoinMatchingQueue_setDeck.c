// addr: 0x01446a30
// name: EventCommand_RequestJoinMatchingQueue_setDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestJoinMatchingQueue_setDeck(void * this, void * deck)
    */

void __thiscall EventCommand_RequestJoinMatchingQueue_setDeck(void *this,void *deck)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 uVar2;
  
                    /* Replaces the stored deck reference, copies the deck property-list/name
                       string, and stores a retained deck payload/object from virtual method 0x74.
                        */
  if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x24))(1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (deck != (void *)0x0) {
    pbVar1 = Deck_getPropertyList(deck);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 8),
               pbVar1,0,0xffffffff);
    uVar2 = (**(code **)(*(int *)deck + 0x74))();
    *(undefined4 *)((int)this + 0x24) = uVar2;
  }
  return;
}

