// addr: 0x013fafa0
// name: FUN_013fafa0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_013fafa0(void *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting-destructor-style wrapper around the small vector cleanup helper,
                       freeing this when the delete flag is set. */
  puStack_8 = &LAB_0168fc1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_013fa510(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

