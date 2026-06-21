// addr: 0x00bf0a30
// name: FUN_00bf0a30
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00bf0a30(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  float local_5c;
  float local_58 [3];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  float local_2c [2];
  void *local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015f1f6b;
  local_1c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 0x48) != 0) {
    local_58[0] = 7.00649e-45;
    iVar2 = FUN_00a47c00(local_58);
    local_58[0] = (float)iVar2;
    FUN_0072d5d0(*(undefined4 *)(param_2 + 4),&local_5c,uVar1);
    fVar4 = (float10)FUN_00738380();
    fStack_3c = local_58[0] * DAT_017eb6dc;
    local_5c = ABS((float)-(int)local_5c * DAT_01805ef4);
    fVar5 = DAT_017ed858;
    if ((local_5c < DAT_017ed858) && (fVar5 = local_5c, local_5c < 0.0)) {
      fVar5 = 0.0;
    }
    local_2c[0] = fVar5 * DAT_018273ac + DAT_017ebbb8;
    local_58[2] = (float)fVar4 * DAT_01809b68 + DAT_017eb6dc;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if (param_3 == '\0') {
      local_58[0] = -1.7067494e+38;
      local_40 = local_58[2] + 0.0;
      fStack_3c = fStack_3c + 0.0;
    }
    else {
      local_58[0] = -1.7041116e+38;
      local_40 = 0.0 - local_58[2];
      fStack_3c = fStack_3c - 0.0;
    }
    uStack_34 = 0;
    uStack_38 = 0;
    local_58[1] = 2.8026e-45;
    local_24 = Mem_Alloc(0x140);
    local_14 = 0;
    if (local_24 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      local_5c = 0.0;
      local_30 = 2;
      local_2c[1] = 7.00649e-45;
      uVar3 = OverHeadTextElement_ctor
                        (param_2,local_2c + 1,&local_30,local_58,local_58 + 1,&local_40,local_2c,
                         &local_5c,DAT_017ed93c);
    }
    local_14 = 0xffffffff;
    FUN_00a4b190(uVar3);
  }
  ExceptionList = local_1c;
  return;
}

