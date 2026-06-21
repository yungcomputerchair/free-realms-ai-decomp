// addr: 0x0140c690
// name: FUN_0140c690
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char __fastcall FUN_0140c690(void *param_1,char *param_2,undefined4 param_3)

{
  char extraout_AL;
  uint uVar1;
  undefined1 local_18 [8];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691fb8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  HasProperties_removeProperty(param_1,param_2);
  if (extraout_AL != '\0') {
    FUN_012fa910(uVar1);
    local_4 = 0;
    FUN_01300680(1);
    local_10 = 0;
    FUN_0138a8c0(param_3,local_18,1,1);
    local_4 = 0xffffffff;
    FUN_01300cd0();
  }
  ExceptionList = local_c;
  return extraout_AL;
}

