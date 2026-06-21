// addr: 0x00bc71a0
// name: FUN_00bc71a0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00bc71a0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH constructor/wrapper around a 128-bucket cache/table initializer,
                       returning the supplied value. No exact class evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ebc38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc4270(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return param_1;
}

