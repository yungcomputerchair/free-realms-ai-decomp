// addr: 0x0123a770
// name: FUN_0123a770
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void notifyAllPairEntriesAndClear(int object_) */

void __fastcall notifyAllPairEntriesAndClear(int object_)

{
  uint uVar1;
  int local_c;
  uint local_8;
  
                    /* Notifies a child object for every stored pair value, after first invoking
                       this object's virtual method +0x14; then clears/updates the vector state. */
  (**(code **)(*(int *)object_ + 0x14))();
  if (*(int *)(object_ + 0x34) != 0) {
    FUN_004fa957(&local_c);
    while( true ) {
      uVar1 = *(uint *)(object_ + 0x40);
      if (((object_ == -0x38) || (uVar1 < *(uint *)(object_ + 0x3c))) ||
         (*(uint *)(object_ + 0x40) < uVar1)) {
        FUN_00d83c2d();
      }
      if ((local_c == 0) || (local_c != object_ + 0x38)) {
        FUN_00d83c2d();
      }
      if (local_8 == uVar1) break;
      if (local_c == 0) {
        FUN_00d83c2d();
      }
      if (*(uint *)(local_c + 8) <= local_8) {
        FUN_00d83c2d();
      }
      (**(code **)(**(int **)(object_ + 0x34) + 0x14))(*(undefined4 *)(local_8 + 4));
      FUN_0123ac20();
    }
    FUN_00508490();
  }
  return;
}

