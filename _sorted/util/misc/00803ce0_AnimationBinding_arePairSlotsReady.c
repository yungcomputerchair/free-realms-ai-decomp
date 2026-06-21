// addr: 0x00803ce0
// name: AnimationBinding_arePairSlotsReady
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AnimationBinding_arePairSlotsReady(void * this) */

int __cdecl AnimationBinding_arePairSlotsReady(void *this)

{
  int iVar1;
  
                    /* Returns true if optional slots at +0x10 and +0x50 are absent or their child
                       +0x14 ready flags at +0x1c are set. */
  if (((*(int *)((int)this + 0x10) == 0) ||
      ((iVar1 = *(int *)(*(int *)((int)this + 0x10) + 0x14), iVar1 != 0 &&
       (*(char *)(iVar1 + 0x1c) != '\0')))) &&
     ((*(int *)((int)this + 0x50) == 0 ||
      ((iVar1 = *(int *)(*(int *)((int)this + 0x50) + 0x14), iVar1 != 0 &&
       (*(char *)(iVar1 + 0x1c) != '\0')))))) {
    return 1;
  }
  return 0;
}

