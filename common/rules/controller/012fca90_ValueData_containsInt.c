// addr: 0x012fca90
// name: ValueData_containsInt
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_containsInt(void * this, int needle_) */

bool __thiscall ValueData_containsInt(void *this,int needle_)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* Tests whether a ValueData is an integer equal to needle or an integer-list
                       containing needle. */
  if (*(int *)((int)this + 4) == 2) {
    return *(int *)((int)this + 8) == needle_;
  }
  if (*(int *)((int)this + 4) == 6) {
    piVar1 = *(int **)(*(int *)((int)this + 8) + 8);
    if (piVar1 < *(int **)(*(int *)((int)this + 8) + 4)) {
      FUN_00d83c2d();
    }
    iVar2 = *(int *)((int)this + 8);
    piVar4 = *(int **)(iVar2 + 4);
    if (*(int **)(iVar2 + 8) < piVar4) {
      FUN_00d83c2d();
    }
    for (; (piVar4 != piVar1 && (*piVar4 != needle_)); piVar4 = piVar4 + 1) {
    }
    iVar3 = *(int *)((int)this + 8);
    piVar1 = *(int **)(iVar3 + 8);
    if (piVar1 < *(int **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    if ((iVar2 == 0) || (iVar2 != iVar3)) {
      FUN_00d83c2d();
    }
    if (piVar4 != piVar1) {
      return true;
    }
  }
  return false;
}

