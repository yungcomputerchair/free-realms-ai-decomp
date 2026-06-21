// addr: 0x01356380
// name: Game_clearTreeAt2cc
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_clearTreeAt2cc(void * this) */

void __fastcall Game_clearTreeAt2cc(void *this)

{
                    /* Clears and resets a red-black-tree member stored at Game+0x2cc, zeroing its
                       count at +0x2d0 and restoring header self-links. The exact member purpose is
                       not identified. */
  RbTreeNode29_freeRightSpine(*(void **)(*(int *)((int)this + 0x2cc) + 4));
  *(int *)(*(int *)((int)this + 0x2cc) + 4) = *(int *)((int)this + 0x2cc);
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x2cc) = *(undefined4 *)((int)this + 0x2cc);
  *(int *)(*(int *)((int)this + 0x2cc) + 8) = *(int *)((int)this + 0x2cc);
  return;
}

