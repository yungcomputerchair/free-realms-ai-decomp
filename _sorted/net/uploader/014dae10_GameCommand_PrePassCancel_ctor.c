// addr: 0x014dae10
// name: GameCommand_PrePassCancel_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_PrePassCancel_ctor(void * this) */

void * __fastcall GameCommand_PrePassCancel_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_PrePassCancel command object by running its common
                       base constructor, installing the GameCommand_PrePassCancel vtable, and
                       clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016adf78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_PrePassCancel::vftable;
  ExceptionList = local_c;
  return this;
}

