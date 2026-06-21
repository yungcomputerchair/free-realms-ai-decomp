// addr: 0x004afa4c
// name: FUN_004afa4c
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_004afa4c(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  int *local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  int local_c;
  uint local_8;
  
                    /* Moves/replaces a range of reference-counted pointers in an indexed container
                       and inserts additional items when the source range exceeds the existing span.
                       No class/file evidence, so left unnamed. */
  iVar1 = param_3;
  local_28 = param_1;
  uVar2 = FUN_0045c1b7();
  if (param_4 < uVar2) {
    uVar2 = FUN_0045c1b7();
    if (uVar2 <= param_5 + param_4) {
      iVar3 = FUN_0045c1b7();
      param_5 = iVar3 - param_4;
    }
    if ((int)param_2 < 0) {
      param_2 = param_1[0x1b];
    }
    else {
      uVar2 = FUN_0045c1b7();
      if (uVar2 <= param_2) {
        param_2 = FUN_0045c1b7();
      }
    }
    local_24 = FUN_0045c1b7();
    iVar3 = FUN_0045c1b7();
    local_8 = iVar3 - param_2;
    if (param_5 <= local_8) {
      local_8 = param_5;
    }
    local_1c = local_8 + param_2;
    param_3 = param_2;
    if (param_2 < local_1c) {
      local_c = param_4 - param_2;
      do {
        piVar4 = (int *)FUN_0045c1ca(local_c + param_3);
        local_14 = (int *)FUN_00482991(param_3);
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0xc))();
        }
        if ((int *)*local_14 != (int *)0x0) {
          (**(code **)(*(int *)*local_14 + 0x10))(0);
        }
        param_3 = param_3 + 1;
        *local_14 = *piVar4;
      } while (param_3 < local_1c);
    }
    if (local_8 < param_5) {
      FUN_00492302(*(undefined4 *)(iVar1 + 4),iVar1);
      FUN_00492302(*(undefined4 *)(iVar1 + 4),iVar1);
      FUN_00492302(param_1[0x19],param_1 + 0x17);
      puVar5 = (undefined4 *)FUN_00491f50(local_30,param_5 + param_4);
      puVar6 = (undefined4 *)FUN_00491f50(local_38,local_8 + param_4);
      FUN_004af9a3(local_20,local_1c,*puVar6,puVar6[1],*puVar5,puVar5[1]);
      if (local_24 == 0) {
        (**(code **)(*local_28 + 0x1f8))(0);
      }
    }
  }
  else {
    param_2 = 0xffffffff;
  }
  return param_2;
}

