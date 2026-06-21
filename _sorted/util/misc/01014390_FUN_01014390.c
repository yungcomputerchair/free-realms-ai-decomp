// addr: 0x01014390
// name: FUN_01014390
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_01014390(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_01cb6074;
                    /* Constructs a wrapper/derived physics descriptor by initializing base fields
                       from globals, then invoking FUN_010141c0 for a nested subobject. No class
                       evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016341cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = DAT_0187d03c;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = DAT_01cb60b4;
  param_1[3] = uVar1;
  param_1[2] = uVar1;
  FUN_010141c0(param_2);
  ExceptionList = local_c;
  return param_1;
}

