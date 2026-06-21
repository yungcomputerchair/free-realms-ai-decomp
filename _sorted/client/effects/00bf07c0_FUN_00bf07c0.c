// addr: 0x00bf07c0
// name: FUN_00bf07c0
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00bf07c0(int param_1,int param_2,char param_3,char param_4,char param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
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
  puStack_18 = &LAB_015f1f3b;
  local_1c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 0x48) != 0) {
    local_5c = 5;
    iVar3 = FUN_00a47c00(&local_5c);
    local_54 = (float)iVar3;
    FUN_0072d5d0(*(undefined4 *)(param_2 + 4),&local_58,uVar2);
    fVar5 = (float10)FUN_00738380();
    fStack_3c = local_54 * DAT_017eb6dc;
    local_40 = 0.0;
    fVar1 = ABS((float)-(int)local_58 * DAT_01805ef4);
    fVar6 = DAT_017ed858;
    if ((fVar1 < DAT_017ed858) && (fVar6 = fVar1, fVar1 < 0.0)) {
      fVar6 = 0.0;
    }
    local_2c[0] = fVar6 * DAT_018273ac + DAT_017ebbb8;
    if (param_5 == '\0') {
      local_50 = (float)fVar5 * DAT_01809b68 + DAT_017eb6dc;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      if (param_3 == '\0') {
        local_40 = local_50 + 0.0;
        fStack_3c = fStack_3c + 0.0;
        if (param_4 == '\0') {
          local_54 = (float)(((-1 < (int)local_58) - 1 & 0xbd16cd) - 0xcc66cd);
        }
        else {
          local_54 = (float)(((-1 < (int)local_58) - 1 & 0xbcb5cd) - 0xcc55cd);
        }
      }
      else {
        local_40 = 0.0 - local_50;
        fStack_3c = fStack_3c - 0.0;
        local_54 = (float)(((-1 < (int)local_58) - 1 & 0xbc63cd) - 0xcc33cd);
      }
      local_5c = 2;
    }
    else if (param_3 == '\0') {
      local_5c = 4;
      local_54 = (float)((-(uint)(param_4 != '\0') & 0xffffb000) - 0xf5000);
    }
    else {
      local_54 = -NAN;
      local_5c = 4;
    }
    uStack_34 = 0;
    uStack_38 = 0;
    local_58 = fVar1;
    local_24 = Mem_Alloc(0x140);
    local_14 = 0;
    if (local_24 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      local_58 = 0.0;
      local_30 = 2;
      local_2c[1] = 7.00649e-45;
      uVar4 = OverHeadTextElement_ctor
                        (param_2,local_2c + 1,&local_30,&local_54,&local_5c,&local_40,local_2c,
                         &local_58,DAT_017ed93c);
    }
    local_14 = 0xffffffff;
    FUN_00a4b190(uVar4);
  }
  ExceptionList = local_1c;
  return;
}

