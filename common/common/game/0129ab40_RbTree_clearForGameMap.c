// addr: 0x0129ab40
// name: RbTree_clearForGameMap
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree_clearForGameMap(void * this) */

void __fastcall RbTree_clearForGameMap(void *this)

{
                    /* Clears a red-black tree/map used by Game code and resets its header links and
                       element count. */
  FUN_0129a390(*(undefined4 *)(*(int *)((int)this + 4) + 4));
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  return;
}

