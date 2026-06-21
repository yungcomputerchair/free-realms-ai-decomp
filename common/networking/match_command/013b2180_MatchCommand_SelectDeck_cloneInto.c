// addr: 0x013b2180
// name: MatchCommand_SelectDeck_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSelectDeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SelectDeck_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SelectDeck_cloneInto(void *this,void *target)

{
  void *target_00;
  undefined4 uVar1;
  
                    /* Copies a SelectDeck match command into an RTTI-checked target. It copies the
                       base MatchCommand state, assigns the deck id string, copies the byte flag at
                       +0x28, and clones the deck pointer via vtable slot 0x74. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SelectDeck::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandSelectDeck.cpp",0x50);
  }
  MatchCommand_cloneInto(this,target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)target_00 + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xc),0,0xffffffff);
  *(undefined1 *)((int)target_00 + 0x28) = *(undefined1 *)((int)this + 0x28);
  uVar1 = (**(code **)(**(int **)((int)this + 0x2c) + 0x74))();
  *(undefined4 *)((int)target_00 + 0x2c) = uVar1;
  return;
}

