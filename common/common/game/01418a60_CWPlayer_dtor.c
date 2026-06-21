// addr: 0x01418a60
// name: CWPlayer_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPlayer_dtor(void * this) */

void __fastcall CWPlayer_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a CWPlayer by installing the CWPlayer vtable, freeing an owned
                       red-black tree member, and chaining to Player_dtor. */
  puStack_8 = &LAB_01693433;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWPlayer::vftable;
  local_4 = 0;
  StdRbTree_destroyAndFree((void *)((int)this + 0x50));
  Player_dtor(this);
  ExceptionList = puStack_8;
  return;
}

