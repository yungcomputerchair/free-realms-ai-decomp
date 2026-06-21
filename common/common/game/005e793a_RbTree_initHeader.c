// addr: 0x005e793a
// name: RbTree_initHeader
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree_initHeader(void * this) */

void __fastcall RbTree_initHeader(void *this)

{
  int *piVar1;
  int iVar2;
  
                    /* Allocates and initializes an empty red-black tree header/sentinel node and
                       resets the tree size to zero. */
  iVar2 = FUN_005e56ba();
  piVar1 = (int *)((int)this + 4);
  *piVar1 = iVar2;
  *(undefined1 *)(iVar2 + 0x11) = 1;
  *(int *)(*piVar1 + 4) = *piVar1;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

