// addr: 0x014298a0
// name: GameCommand_FatalError_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_FatalError_ctor(void * this) */

void * __fastcall GameCommand_FatalError_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_FatalError, initializes the GameCommand
                       base/exception state, installs the FatalError vtable, and clears three
                       trailing fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695693;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_FatalError::vftable;
  Exception_ctor(uVar1);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  ExceptionList = local_c;
  return this;
}

