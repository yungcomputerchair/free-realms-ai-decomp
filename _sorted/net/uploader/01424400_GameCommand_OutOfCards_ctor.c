// addr: 0x01424400
// name: GameCommand_OutOfCards_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_OutOfCards_ctor(void * this) */

void * __fastcall GameCommand_OutOfCards_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs OutOfCards game command using the common GameCommand base and
                       installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_OutOfCards::vftable;
  ExceptionList = local_c;
  return this;
}

