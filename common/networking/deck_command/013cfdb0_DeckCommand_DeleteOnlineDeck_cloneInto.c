// addr: 0x013cfdb0
// name: DeckCommand_DeleteOnlineDeck_cloneInto
// subsystem: common/networking/deck_command
// source (binary assert): common/networking/deck_command/DeckCommandDeleteOnlineDeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_DeleteOnlineDeck_cloneInto(void * this, void * target) */

void __thiscall DeckCommand_DeleteOnlineDeck_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a DeckCommand_DeleteOnlineDeck into an existing target: validates
                       RTTI, copies the base DeckCommand portion, then assigns the string member at
                       offset 4. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &DeckCommand_DeleteOnlineDeck::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\deck_command\\DeckCommandDeleteOnlineDeck.cpp",
                 0x2d);
  }
  DeckCommand_cloneInto(target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)target_00 + 4)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 4),0,0xffffffff);
  return;
}

