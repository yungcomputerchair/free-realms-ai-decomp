// addr: 0x008dccd0
// name: FUN_008dccd0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_008dccd0(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a larger unknown record by zeroing header fields, setting default
                       constants, invoking the large initializer at 008d0be0, and clearing a
                       trailing bool. No class evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01585e8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = DAT_01be48b8;
  param_1[5] = DAT_01be48bc;
  param_1[6] = DAT_01be48b8;
  param_1[7] = DAT_01be48bc;
  FUN_008d0be0(uVar1);
  *(undefined1 *)(param_1 + 0x34) = 0;
  ExceptionList = local_c;
  return param_1;
}

