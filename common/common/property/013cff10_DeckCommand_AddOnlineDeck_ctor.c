// addr: 0x013cff10
// name: DeckCommand_AddOnlineDeck_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckCommand_AddOnlineDeck_ctor(void * this) */

void * __fastcall DeckCommand_AddOnlineDeck_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for DeckCommand_AddOnlineDeck. It constructs the base via
                       FUN_01442180, installs the AddOnlineDeck vtable, and initializes an owned
                       pointer/buffer member to null. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ac08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeckCommand_ctor(this);
  *(undefined ***)this = DeckCommand_AddOnlineDeck::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

