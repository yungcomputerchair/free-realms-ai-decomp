// addr: 0x01366450
// name: FUN_01366450
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 * __thiscall FUN_01366450(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f946;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar2 = FUN_01352280(uVar1);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  local_10 = *(undefined4 *)(param_1 + 8);
  local_14 = param_1 + 4;
  FUN_0135e920(9,&local_14);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}

