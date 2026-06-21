// addr: 0x0123a600
// name: FUN_0123a600
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void removeAndNotifyMatchingPairEntries(int object_, int key_) */

void __thiscall removeAndNotifyMatchingPairEntries(void *this,int object_,int key_)

{
  int *piVar1;
  int iVar2;
  undefined1 local_1c [8];
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
                    /* Removes entries whose first field matches param_2 from a vector of pairs at
                       object+0x38 and notifies the object at +0x34 for each removed value and for
                       the default value at +0x30. */
  if (*(int *)((int)this + 0x34) != 0) {
    FUN_004fa957(&local_c);
    while( true ) {
      iVar2 = (int)this + 0x38;
      piVar1 = *(int **)((int)this + 0x40);
      local_14 = 0;
      if (((iVar2 == 0) || (piVar1 < *(int **)((int)this + 0x3c))) ||
         (*(int **)((int)this + 0x40) < piVar1)) {
        FUN_00d83c2d();
      }
      local_14 = iVar2;
      local_10 = piVar1;
      if ((local_c == 0) || (local_c != iVar2)) {
        FUN_00d83c2d();
      }
      if (local_8 == local_10) break;
      if (local_c == 0) {
        FUN_00d83c2d();
      }
      if (*(int **)(local_c + 8) <= local_8) {
        FUN_00d83c2d();
      }
      if (*local_8 == object_) {
        if (local_c == 0) {
          FUN_00d83c2d();
        }
        if (*(int **)(local_c + 8) <= local_8) {
          FUN_00d83c2d();
        }
        (**(code **)(**(int **)((int)this + 0x34) + 0x14))(local_8[1]);
        piVar1 = (int *)FUN_0123ab90(local_1c,local_c,local_8);
        local_c = *piVar1;
        local_8 = (int *)piVar1[1];
      }
      else {
        FUN_0123ac20();
      }
    }
    (**(code **)(**(int **)((int)this + 0x34) + 0x14))(*(undefined4 *)((int)this + 0x30));
  }
  return;
}

