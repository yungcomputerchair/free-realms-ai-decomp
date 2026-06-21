// addr: 0x006ac85e
// name: RbTree_clear_006a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree_clear_006a(void * this) */

void __fastcall RbTree_clear_006a(void *this)

{
  int *piVar1;
  
                    /* Clears all nodes below the 006a RB-tree header and restores the empty header
                       links/count. */
  piVar1 = (int *)((int)this + 4);
  FUN_006ac1b2(*(undefined4 *)(*piVar1 + 4));
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  return;
}

