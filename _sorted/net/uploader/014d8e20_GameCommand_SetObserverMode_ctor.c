// addr: 0x014d8e20
// name: GameCommand_SetObserverMode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SetObserverMode_ctor(void * this) */

void * __fastcall GameCommand_SetObserverMode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_SetObserverMode command object by running its common
                       base constructor, installing the GameCommand_SetObserverMode vtable, and
                       clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_SetObserverMode::vftable;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

