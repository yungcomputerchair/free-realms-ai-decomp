// addr: 0x0139b560
// name: FUN_0139b560
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElementCollector_processOncePerId(void * this, void * element) */

void __thiscall PlayElementCollector_processOncePerId(void *this,void *element)

{
  int iVar1;
  uint *value;
  int iVar2;
  int *piVar3;
  void *this_00;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *piStack_20;
  int local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Tracks processed play-element ids and, for new ids, walks related elements
                       and dispatches derived values to two sinks. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684ef8;
  local_c = ExceptionList;
  value = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  local_30 = *(int *)((int)element + 100);
  local_2c = (int *)0x5;
  local_24 = (int *)0x5;
  iVar2 = FUN_01326fd0(&local_2c);
  piVar3 = *(int **)(iVar2 + 8);
  if (piVar3 < *(int **)(iVar2 + 4)) {
    FUN_00d83c2d();
  }
  local_24 = (int *)FUN_01326fd0(&local_24);
  local_28 = (int *)local_24[1];
  piVar5 = local_28;
  piVar6 = local_24;
  if ((int *)local_24[2] < local_28) {
    FUN_00d83c2d();
    piVar6 = local_24;
  }
  for (; (local_2c = piVar6, piVar5 != piVar3 && (*piVar5 != local_30)); piVar5 = piVar5 + 1) {
    piVar6 = local_2c;
  }
  local_24 = (int *)0x5;
  piVar3 = (int *)FUN_01326fd0(&local_24);
  local_24 = (int *)piVar3[2];
  if (local_24 < (int *)piVar3[1]) {
    FUN_00d83c2d();
  }
  if ((local_2c == (int *)0x0) || (local_2c != piVar3)) {
    FUN_00d83c2d();
  }
  if (piVar5 == local_24) {
    piVar3 = &local_30;
    local_24 = (int *)0x5;
    this_00 = (void *)FUN_01326fd0(&local_24);
    UIntVector_pushBack(this_00,piVar3,value);
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    (**(code **)(*(int *)element + 200))(&local_1c);
    piVar3 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    piVar5 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    piVar6 = &local_1c;
    local_24 = piVar6;
    while( true ) {
      piStack_20 = piVar5;
      if ((piVar6 == (int *)0x0) || (piVar6 != &local_1c)) {
        FUN_00d83c2d();
      }
      if (piVar5 == piVar3) break;
      if (piVar6 == (int *)0x0) {
        FUN_00d83c2d();
      }
      if ((int *)piVar6[2] <= piVar5) {
        FUN_00d83c2d();
      }
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        iVar1 = *(int *)((int)this + 0x48);
        uVar4 = PlayElement_getId();
        uVar4 = FUN_01322200(this,iVar2,uVar4);
        uVar4 = FUN_013221d0(uVar4);
        (**(code **)(iVar1 + 4))(uVar4);
        iVar1 = **(int **)((int)this + 0x30);
        uVar4 = PlayElement_getId();
        uVar4 = FUN_01322200(this,iVar2,uVar4);
        uVar4 = FUN_013221d0(uVar4);
        (**(code **)(iVar1 + 4))(uVar4);
        piVar5 = piStack_20;
        piVar6 = local_24;
      }
      if ((int *)piVar6[2] <= piVar5) {
        FUN_00d83c2d();
      }
      piVar5 = piVar5 + 1;
    }
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

