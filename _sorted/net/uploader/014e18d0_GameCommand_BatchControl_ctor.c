// addr: 0x014e18d0
// name: GameCommand_BatchControl_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_BatchControl_ctor(void * this) */

void * __fastcall GameCommand_BatchControl_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_BatchControl command object by running its common
                       base constructor, installing the GameCommand_BatchControl vtable, and
                       clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_BatchControl::vftable;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

