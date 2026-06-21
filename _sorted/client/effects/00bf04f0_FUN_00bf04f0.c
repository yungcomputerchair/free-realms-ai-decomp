// addr: 0x00bf04f0
// name: FUN_00bf04f0
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00bf04f0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  float10 fVar4;
  float local_48;
  int local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *pvStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_015f1edb;
  local_1c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 0x48) != 0) {
    local_48 = 0.0;
    local_40 = ((float)param_3 * DAT_0175d738 + _DAT_017ef980) * _DAT_018273a8;
    local_44 = 2;
    piVar2 = (int *)FUN_00a47c50(&local_44);
    if ((piVar2 != (int *)0x0) &&
       (pcVar3 = (char *)(**(code **)(*piVar2 + 0x38))(uVar1), *pcVar3 != '\0')) {
      fVar4 = (float10)(**(code **)(*piVar2 + 0x48))();
      local_48 = (float)fVar4;
    }
    pvStack_34 = Mem_Alloc(0x380);
    uStack_14 = 0;
    if (pvStack_34 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      local_44 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      fStack_2c = local_48;
      uStack_28 = 0;
      uStack_24 = 0;
      piVar2 = (int *)OverHeadChatBubbleElement_ctor
                                (param_2,&uStack_38,&stack0x00000010,&stack0x0000000c,&uStack_3c,
                                 &uStack_30,&local_40,&local_44);
    }
    uStack_14 = 0xffffffff;
    FUN_00a4b190(piVar2);
    fVar4 = (float10)(**(code **)(*piVar2 + 0x48))();
    local_48 = (float)fVar4;
    uStack_38 = 4;
    local_44 = FUN_00a47c00(&uStack_38);
    for (local_44 = local_44 + -2; -1 < local_44; local_44 = local_44 + -1) {
      uStack_38 = 4;
      piVar2 = (int *)FUN_00a47c20(&uStack_38,&local_44);
      if (piVar2 != (int *)0x0) {
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        fStack_2c = local_48;
        (**(code **)(*piVar2 + 0x20))(&uStack_30);
        fVar4 = (float10)(**(code **)(*piVar2 + 0x48))();
        local_48 = (float)fVar4;
      }
    }
  }
  ExceptionList = local_1c;
  return;
}

