// addr: 0x014e0260
// name: GameCommand_CardDeSelected_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_CardDeSelected_ctor(void * this) */

void * __fastcall GameCommand_CardDeSelected_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_CardDeSelected command object by running its common
                       base constructor, installing the GameCommand_CardDeSelected vtable, and
                       clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_CardDeSelected::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}

