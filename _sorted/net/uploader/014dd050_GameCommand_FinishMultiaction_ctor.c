// addr: 0x014dd050
// name: GameCommand_FinishMultiaction_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_FinishMultiaction_ctor(void * this) */

void * __fastcall GameCommand_FinishMultiaction_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_FinishMultiaction command object by running its
                       common base constructor, installing the GameCommand_FinishMultiaction vtable,
                       and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ae838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_FinishMultiaction::vftable;
  ExceptionList = local_c;
  return this;
}

