// addr: 0x01341c80
// name: FUN_01341c80
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool hasNestedVectorItems(int object_) */

bool __fastcall hasNestedVectorItems(int object_)

{
  int *piVar1;
  int *piVar2;
  
                    /* Returns whether any node in the linked/list container at object+0x10 has a
                       non-empty child vector. */
  piVar1 = *(int **)(object_ + 0x10);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (object_ == -0xc) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      return false;
    }
    if (object_ == -0xc) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(object_ + 0x10)) {
      FUN_00d83c2d();
    }
    if ((piVar2[5] != 0) && (piVar2[6] - piVar2[5] >> 2 != 0)) break;
    FUN_01340aa0();
  }
  return true;
}

