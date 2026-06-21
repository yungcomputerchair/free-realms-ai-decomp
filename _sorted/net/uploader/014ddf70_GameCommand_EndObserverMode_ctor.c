// addr: 0x014ddf70
// name: GameCommand_EndObserverMode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_EndObserverMode_ctor(void * this) */

void * __fastcall GameCommand_EndObserverMode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_EndObserverMode command object by running its common
                       base constructor, installing the GameCommand_EndObserverMode vtable, and
                       clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aeb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_EndObserverMode::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}

