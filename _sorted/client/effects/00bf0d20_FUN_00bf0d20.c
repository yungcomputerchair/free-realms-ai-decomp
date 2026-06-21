// addr: 0x00bf0d20
// name: FUN_00bf0d20
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00bf0d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015f1fcb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 0x48) != 0) {
    local_48 = 7;
    iVar1 = FUN_00a47c00(&local_48);
    local_2c = (float)(iVar1 + 1) * DAT_01809b68;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_34 = Mem_Alloc(0x140);
    local_14 = 0;
    if (local_34 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      local_48 = 0;
      local_44 = DAT_018273b0;
      local_40 = 3;
      local_3c = 2;
      local_38 = 7;
      uVar2 = OverHeadTextElement_ctor
                        (param_2,&local_38,&local_3c,param_3,&local_40,&local_30,&local_44,&local_48
                         ,DAT_017ed93c);
    }
    local_14 = 0xffffffff;
    FUN_00a4b190(uVar2);
  }
  ExceptionList = local_1c;
  return;
}

