// addr: 0x01341c00
// name: FUN_01341c00
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int countNestedVectorItems(int object_) */

int __fastcall countNestedVectorItems(int object_)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* Counts the total number of child items held in vectors inside each node of a
                       linked/list container at object+0x10. */
  piVar1 = *(int **)(object_ + 0x10);
  piVar2 = (int *)*piVar1;
  iVar4 = 0;
  while( true ) {
    if (object_ == -0xc) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (object_ == -0xc) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(object_ + 0x10)) {
      FUN_00d83c2d();
    }
    if (piVar2[5] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = piVar2[6] - piVar2[5] >> 2;
    }
    iVar4 = iVar4 + iVar3;
    FUN_01340aa0();
  }
  return iVar4;
}

