// addr: 0x00bc4270
// name: FUN_00bc4270
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_00bc4270(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a small handle/cache object by zeroing fields, clearing a flag
                       byte, and allocating/initializing capacity 4000 through FUN_00fc4580. No
                       class evidence, so left unnamed. */
  puStack_8 = &LAB_015ead83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  FUN_00fc4580(4000);
  ExceptionList = local_c;
  return param_1;
}

