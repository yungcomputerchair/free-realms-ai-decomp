// addr: 0x01430790
// name: GameCommand_AcceptDraw_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_AcceptDraw_ctor(void * this) */

void * __fastcall GameCommand_AcceptDraw_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AcceptDraw game command via the common GameCommand base and
                       installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016964d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_AcceptDraw::vftable;
  ExceptionList = local_c;
  return this;
}

