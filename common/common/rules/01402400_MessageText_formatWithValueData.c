// addr: 0x01402400
// name: MessageText_formatWithValueData
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 MessageText_formatWithValueData(undefined4 param_1)

{
  uint uVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Formats/replaces a MessageText using ValueData after clearing existing
                       message payload. */
  puStack_8 = &LAB_01690d91;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 1;
  MessageText_formatWithValueData(param_1,local_1c);
  local_4 = local_4 & 0xffffff00;
  FUN_012ce9d0(uVar1);
  ExceptionList = local_c;
  return param_1;
}

