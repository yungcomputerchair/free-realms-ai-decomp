// addr: 0x01429470
// name: GameCommand_OutOfSync_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_OutOfSync_ctor(void * this) */

void * __fastcall GameCommand_OutOfSync_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs OutOfSync game command via the common GameCommand base and
                       installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_OutOfSync::vftable;
  ExceptionList = local_c;
  return this;
}

