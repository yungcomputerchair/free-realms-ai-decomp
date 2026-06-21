// addr: 0x006445c3
// name: FUN_006445c3
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char __thiscall
FUN_006445c3(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined **local_54 [10];
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  undefined4 local_14;
  int *local_10;
  int *local_c;
  char local_6;
  char local_5;
  
                    /* Creates or updates a GBitmapAccessWrapper-backed control resource depending
                       on provided bitmap/text parameters and current cached wrapper state. No exact
                       method name evidence, so left unnamed. */
  local_5 = '\x01';
  if (((param_3 != 0) || ((short)param_4 != 0)) || (local_6 = '\x01', param_5 != 0)) {
    local_6 = '\0';
  }
  local_c = param_1;
  if (param_1[0x4c] == 0) {
    if (local_6 == '\0') {
      pvVar3 = Mem_Alloc(0xc);
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        FUN_0062540a();
      }
      param_1[0x4c] = (int)pvVar3;
      if (pvVar3 == (void *)0x0) {
        return '\0';
      }
      goto LAB_0064462e;
    }
LAB_006445fb:
    local_5 = '\x01';
  }
  else {
LAB_0064462e:
    puVar4 = (undefined4 *)FUN_00625136(&local_24,&param_2);
    uVar7 = *puVar4;
    piVar6 = (int *)puVar4[1];
    local_14 = uVar7;
    local_10 = piVar6;
    FUN_0060d54e(*(undefined4 *)(param_1[0x4c] + 4),param_1[0x4c]);
    cVar2 = FUN_0060d299(local_1c);
    if (cVar2 == '\0') {
      iVar5 = FUN_0060d572();
      piVar1 = *(int **)(iVar5 + 4);
      if (local_6 == '\0') {
        iVar5 = *piVar1;
        if (param_3 == 0) {
          if (param_5 == 0) {
            local_5 = (**(code **)(iVar5 + 0x3c))(param_4);
          }
          else {
            local_5 = (**(code **)(iVar5 + 0x34))(param_5);
          }
        }
        else {
          local_5 = (**(code **)(iVar5 + 0x44))(param_3);
        }
      }
      else {
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))(1);
        }
        FUN_0062d90d(&local_24,uVar7,piVar6);
      }
    }
    else {
      if (local_6 != '\0') goto LAB_006445fb;
      piVar6 = Mem_Alloc(0x28);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        FUN_0041493a();
        *piVar6 = (int)GBitmapAccessWrapper::vftable;
      }
      param_1 = local_c;
      if (piVar6 == (int *)0x0) {
        return '\0';
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_2c = &LAB_0060e51c;
      (**(code **)(*piVar6 + 0x10))(local_c,&LAB_0060e51c,0,0,0);
      if (param_3 == 0) {
        if (param_5 == 0) {
          FUN_004149a9(param_4);
        }
        else {
          FUN_00414968(param_5);
        }
        local_54[0] = GBitmapAccessWrapper::vftable;
        local_5 = (**(code **)(*piVar6 + 0x20))(local_54,1);
      }
      else {
        iVar5 = *piVar6;
        uVar8 = 1;
        uVar7 = FUN_0042afb6(param_3);
        local_5 = (**(code **)(iVar5 + 0x20))(uVar7,uVar8);
      }
      FUN_004149c8();
      if (local_5 == '\0') {
        (**(code **)(*piVar6 + 0xc))(1);
      }
      else {
        local_14 = param_2;
        local_10 = piVar6;
        FUN_0062d853(&local_28,&local_14);
      }
    }
    (**(code **)(*param_1 + 0x228))(0,0);
  }
  return local_5;
}

