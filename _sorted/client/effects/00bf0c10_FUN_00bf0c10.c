// addr: 0x00bf0c10
// name: FUN_00bf0c10
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00bf0c10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015f1f9b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 0x48) != 0) {
    local_34 = Mem_Alloc(0x140);
    local_14 = 0;
    if (local_34 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      local_44 = DAT_018273b0;
      local_48 = 0;
      local_40 = 1;
      local_3c = 2;
      local_38 = 6;
      local_30 = 0;
      local_2c = DAT_0180ae80;
      local_28 = 0;
      local_24 = 0;
      uVar1 = OverHeadTextElement_ctor
                        (param_2,&local_38,&local_3c,param_3,&local_40,&local_30,&local_44,&local_48
                         ,DAT_017ed93c);
    }
    local_14 = 0xffffffff;
    FUN_00a4b190(uVar1);
  }
  ExceptionList = local_1c;
  return;
}

