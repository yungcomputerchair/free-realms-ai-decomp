// addr: 0x01397390
// name: FUN_01397390
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void collectNestedEntriesByTransformedValue(int object_, int wantedValue_, int
   outVector_) */

void __thiscall
collectNestedEntriesByTransformedValue(void *this,int object_,int wantedValue_,int outVector_)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_30;
  int local_2c;
  undefined4 *local_28;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_14;
  undefined1 local_10 [12];
  
                    /* Collects child entries from nested vectors whose transformed value equals
                       param_2 into the output vector param_3. */
  local_2c = (int)this + 0xc0;
  local_14 = *(undefined4 **)((int)this + 0xc4);
  local_1c = (undefined4 *)*local_14;
  local_20 = local_2c;
  while( true ) {
    puVar5 = local_1c;
    iVar8 = local_20;
    if ((local_20 == 0) || (local_20 != local_2c)) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_14) break;
    if (iVar8 == 0) {
      FUN_00d83c2d();
    }
    if (puVar5 == *(undefined4 **)(iVar8 + 4)) {
      FUN_00d83c2d();
    }
    puVar2 = (undefined4 *)puVar5[6];
    puVar1 = puVar5 + 4;
    if (puVar2 < (undefined4 *)puVar5[5]) {
      FUN_00d83c2d();
    }
    if (puVar5 == *(undefined4 **)(iVar8 + 4)) {
      FUN_00d83c2d();
    }
    puVar9 = (undefined4 *)puVar5[5];
    puVar7 = puVar1;
    if ((undefined4 *)puVar5[6] < puVar9) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_28 = puVar7;
      if ((local_28 == (undefined4 *)0x0) || (local_28 != puVar1)) {
        FUN_00d83c2d();
      }
      if (puVar9 == puVar2) break;
      if (local_28 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)local_28[2] <= puVar9) {
        FUN_00d83c2d();
      }
      uVar3 = *puVar9;
      local_30 = uVar3;
      iVar8 = FUN_01418e00();
      if (iVar8 == object_) {
        uVar4 = *(uint *)(wantedValue_ + 4);
        if ((uVar4 == 0) ||
           ((uint)((int)(*(int *)(wantedValue_ + 0xc) - uVar4) >> 2) <=
            (uint)((int)(*(int *)(wantedValue_ + 8) - uVar4) >> 2))) {
          uVar6 = *(uint *)(wantedValue_ + 8);
          if (uVar6 < uVar4) {
            FUN_00d83c2d();
          }
          FUN_01335180(local_10,wantedValue_,uVar6,&local_30);
        }
        else {
          puVar5 = *(undefined4 **)(wantedValue_ + 8);
          *puVar5 = uVar3;
          *(undefined4 **)(wantedValue_ + 8) = puVar5 + 1;
        }
      }
      if ((undefined4 *)local_28[2] <= puVar9) {
        FUN_00d83c2d();
      }
      puVar9 = puVar9 + 1;
      puVar7 = local_28;
    }
    FUN_0138cca0();
  }
  return;
}

