// addr: 0x01411540
// name: Card_clearActionReferencesToElement
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_clearActionReferencesToElement(void * this, void * target) */

bool __thiscall Card_clearActionReferencesToElement(void *this,void *target)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  
                    /* Walks nested action/reference lists on a Card and clears triples that
                       reference the target element unless the action state is 5. Used when clearing
                       play-area references, attached modifiers, and disconnecting unowned cards
                       during discard. */
  piVar2 = *(int **)((int)this + 8);
  piVar3 = (int *)*piVar2;
  while( true ) {
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar2) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (piVar3 == (int *)*(int *)((int)this + 8)) {
      FUN_00d83c2d();
    }
    piVar4 = (int *)piVar3[6];
    if ((int *)piVar3[7] < piVar4) {
      FUN_00d83c2d();
    }
    piVar7 = (int *)piVar3[7];
    if (piVar7 < (int *)piVar3[6]) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar3 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if (piVar7 == piVar4) break;
      if (piVar3 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if (piVar7 <= (int *)piVar3[6]) {
        FUN_00d83c2d();
      }
      piVar1 = piVar7 + -3;
      if ((int *)piVar3[7] <= piVar1) {
        FUN_00d83c2d();
      }
      if ((void *)*piVar1 == target) {
        if (piVar7 <= (int *)piVar3[6]) {
          FUN_00d83c2d();
        }
        if ((int *)piVar3[7] <= piVar1) {
          FUN_00d83c2d();
        }
        iVar6 = Action_getState((void *)piVar7[-2]);
        if (iVar6 != 5) {
          if (piVar7 <= (int *)piVar3[6]) {
            FUN_00d83c2d();
          }
          if ((int *)piVar3[7] <= piVar1) {
            FUN_00d83c2d();
          }
          *piVar1 = 0;
          if (piVar7 <= (int *)piVar3[6]) {
            FUN_00d83c2d();
          }
          if ((int *)piVar3[7] <= piVar1) {
            FUN_00d83c2d();
          }
          piVar7[-2] = 0;
          if (piVar7 <= (int *)piVar3[6]) {
            FUN_00d83c2d();
          }
          if ((int *)piVar3[7] <= piVar1) {
            FUN_00d83c2d();
          }
          piVar7[-1] = 0;
        }
      }
      bVar5 = piVar7 <= (int *)piVar3[6];
      piVar7 = piVar1;
      if (bVar5) {
        FUN_00d83c2d();
      }
    }
    FUN_0134f4a0();
  }
  return true;
}

