// addr: 0x00cad100
// name: FUN_00cad100
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00cad100(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puStack_b4;
  undefined4 *puStack_b0;
  float *pfStack_ac;
  undefined1 auStack_91 [5];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_64;
  float fStack_60;
  undefined1 *puStack_5c;
  float fStack_58;
  float fStack_54;
  void *pvStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0160957b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 0xd4) == 0) {
    local_78 = *(float *)(param_1 + 0x8c);
    local_7c = *(float *)(param_1 + 0x88);
    local_80 = *(float *)(param_1 + 0x84);
    local_84 = &stack0xffffff58;
    local_74 = _DAT_0175b420;
    pfStack_ac = (float *)0xcad191;
    local_64 = local_7c;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    if (iVar2 != 0) {
      pfStack_ac = (float *)0xcad1a5;
      FUN_00770410();
      fStack_60 = fStack_30 - fStack_40;
      puStack_5c = (undefined1 *)(fStack_2c - fStack_3c);
      fStack_58 = fStack_28 - fStack_38;
      fStack_54 = fStack_24 - fStack_34;
      if (DAT_01762a30 < (float)puStack_5c) {
        local_7c = (fStack_2c - fStack_3c) + local_64;
        fStack_60 = local_80;
        fStack_54 = local_74;
        fStack_58 = local_78;
        pfStack_ac = (float *)0xcad216;
        puStack_5c = (undefined1 *)local_7c;
        uVar3 = FUN_00a4cea0();
        *(undefined4 *)(param_1 + 0xd4) = uVar3;
      }
    }
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    local_64 = 4.2039e-45;
    pfStack_ac = (float *)0xcad23c;
    piVar4 = (int *)FUN_00a47c50();
    if (piVar4 == (int *)0x0) {
      pfStack_ac = (float *)0xcad250;
      pvStack_50 = Mem_Alloc(0x80);
      uStack_14 = 0;
      if (pvStack_50 != (void *)0x0) {
        local_84 = (undefined1 *)0x0;
        pfStack_ac = &fStack_60;
        puStack_b0 = &uStack_44;
        puStack_b4 = &uStack_48;
        fStack_4c = DAT_017ebbb8;
        fStack_60 = _DAT_01cb53d0;
        puStack_5c = (undefined1 *)fRam01cb53d4;
        fStack_58 = fRam01cb53d8;
        fStack_54 = fRam01cb53dc;
        uStack_44 = 0xffffffff;
        uStack_48 = 2;
        uStack_88 = 3;
        OverHeadHpBarElement_ctor(&local_84,&uStack_88);
      }
      uStack_14 = 0xffffffff;
      pfStack_ac = (float *)0xcad2d5;
      FUN_00a4b190();
      local_84 = (undefined1 *)0x3;
      pfStack_ac = (float *)0xcad2ed;
      piVar4 = (int *)FUN_00a47c50();
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_1c;
        return;
      }
    }
    uStack_88 = _DAT_017e795c;
    pfStack_ac = (float *)0xcad313;
    (**(code **)(*piVar4 + 0x28))();
    pfStack_ac = (float *)&uStack_8c;
    uStack_8c = DAT_01836790;
    puStack_b0 = (undefined4 *)0xcad32f;
    (**(code **)(*piVar4 + 0x30))();
    puStack_b0 = (undefined4 *)auStack_91;
    auStack_91[0] = 1;
    puStack_b4 = (undefined4 *)0xcad342;
    (**(code **)(*piVar4 + 0x34))();
    fVar1 = (float)*(int *)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x80) < 0) {
      fVar1 = fVar1 + _DAT_0175db04;
    }
    puStack_5c = (undefined1 *)&puStack_b4;
    piVar4[0x1d] = (int)(fVar1 * DAT_017ebbb8);
    uStack_8c = *(undefined4 *)(param_1 + 0x84);
    puStack_b4 = *(undefined4 **)(param_1 + 0x74);
    uStack_88 = *(undefined4 *)(param_1 + 0x88);
    local_84 = *(undefined1 **)(param_1 + 0x8c);
    local_80 = _DAT_0175b420;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    if (iVar2 != 0) {
      pfStack_ac = (float *)0xcad3bf;
      FUN_00770410();
      iVar2 = *(int *)(param_1 + 0xd4);
      *(float *)(iVar2 + 0x10) = local_80;
      *(float *)(iVar2 + 0x14) = (fStack_2c - fStack_3c) + local_7c;
      *(float *)(iVar2 + 0x18) = local_78;
      *(float *)(iVar2 + 0x1c) = local_74;
    }
  }
  ExceptionList = local_1c;
  return;
}

