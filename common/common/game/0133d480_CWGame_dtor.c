// addr: 0x0133d480
// name: CWGame_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_dtor(void * this) */

void __fastcall CWGame_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Destroys CWGame, logs the destructor message, releases tree/vector members,
                       frees three dynamic arrays, then calls Game_dtor. */
  puStack_8 = &LAB_0167bf3a;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = CWGame::vftable;
  *(undefined ***)((int)this + 0x10) = CWGame::vftable;
  local_4 = (void *)0x7;
  Game_logGeneral(this,"KILLING CWGame VIA DESTRUCTOR",uVar1);
  local_4 = (void *)CONCAT31(local_4._1_3_,6);
  StdRbTree_destroyAndFree((void *)((int)this + 0x3fc));
  FUN_00521a9c();
  if (*(void **)((int)this + 0x3dc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3dc));
  }
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  FUN_00521a9c();
  if (*(void **)((int)this + 0x3c0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3c0));
  }
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  if (*(void **)((int)this + 0x3b0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3b0));
  }
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  FUN_00521a9c();
  Game_dtor(this);
  ExceptionList = local_4;
  return;
}

