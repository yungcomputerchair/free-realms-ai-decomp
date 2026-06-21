// addr: 0x01360910
// name: Game_verifyOrUpdateIntKeyEntry
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_verifyOrUpdateIntKeyEntry(void * this, int key_) */

void __fastcall Game_verifyOrUpdateIntKeyEntry(void *this,int key_)

{
  int iVar1;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Finds an int-keyed tree entry under this+0x2b0 and, if the stored value
                       differs from the expected field at +0x2b4, calls an update/removal helper for
                       the key. Evidence is the rb-tree find and comparison against the adjacent
                       cached value. */
  iVar1 = *(int *)((int)this + 0x2b4);
  StdRbTreeInt_find((void *)((int)this + 0x2b0),local_8,&stack0x00000004,unaff_EDI);
  if (((void *)*extraout_EAX == (void *)0x0) ||
     ((void *)*extraout_EAX != (void *)((int)this + 0x2b0))) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iVar1) {
    FUN_0135ce80(&stack0x00000004);
  }
  return;
}

