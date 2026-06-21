// addr: 0x013a8b80
// name: FUN_013a8b80
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013a8b80(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a filtered/sorted vector of 4-byte entries from object state and an
                       input parameter, then post-processes the range. */
  puStack_8 = &LAB_01686099;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_4 = 0;
  FUN_013a8080(*(undefined4 *)(param_1 + 0x84));
  local_18 = *(undefined4 **)(param_1 + 0x80);
  local_20 = (undefined4 *)*local_18;
  local_24 = param_1 + 0x7c;
  while( true ) {
    puVar2 = local_20;
    iVar4 = local_24;
    if ((local_24 == 0) || (local_24 != param_1 + 0x7c)) {
      FUN_00d83c2d(uVar5);
    }
    if (puVar2 == local_18) break;
    if (iVar4 == 0) {
      FUN_00d83c2d(uVar5);
    }
    if (puVar2 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d(uVar5);
    }
    uVar1 = *(uint *)(param_2 + 4);
    local_28 = puVar2[4];
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)(param_2 + 0xc) - uVar1) >> 2) <=
        (uint)((int)(*(int *)(param_2 + 8) - uVar1) >> 2))) {
      uVar3 = *(uint *)(param_2 + 8);
      if (uVar3 < uVar1) {
        FUN_00d83c2d();
      }
      FUN_013a8180(local_14,param_2,uVar3,&local_28);
      FUN_013a4b20();
    }
    else {
      puVar2 = *(undefined4 **)(param_2 + 8);
      *puVar2 = local_28;
      *(undefined4 **)(param_2 + 8) = puVar2 + 1;
      FUN_013a4b20();
    }
  }
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < *(uint *)(param_2 + 4)) {
    FUN_00d83c2d(uVar5);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar3) {
    FUN_00d83c2d(uVar5);
  }
  FUN_013a72a0(uVar3,uVar1,(int)(uVar1 - uVar3) >> 2,&LAB_013a3930);
  ExceptionList = local_c;
  return param_2;
}

