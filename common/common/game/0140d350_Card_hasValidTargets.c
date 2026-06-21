// addr: 0x0140d350
// name: Card_hasValidTargets
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_hasValidTargets(void * this, void * criteria) */

bool __thiscall Card_hasValidTargets(void *this,void *criteria)

{
  bool bVar1;
  bool bVar2;
  void *in_stack_00000008;
  
                    /* Returns whether Card_getValidTargets succeeds and the resulting target vector
                       contains at least one entry. */
  bVar1 = Card_getValidTargets(this,criteria,in_stack_00000008);
  bVar2 = false;
  if (bVar1) {
    if (*(int *)((int)criteria + 4) == 0) {
      return false;
    }
    bVar2 = *(int *)((int)criteria + 8) - *(int *)((int)criteria + 4) >> 2 != 0;
  }
  return bVar2;
}

