// addr: 0x01430c70
// name: GameCommand_AcceptAdjournment_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_AcceptAdjournment_ctor(void * this) */

void * __fastcall GameCommand_AcceptAdjournment_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AcceptAdjournment game command via common base initialization and
                       installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016965f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_AcceptAdjournment::vftable;
  ExceptionList = local_c;
  return this;
}

