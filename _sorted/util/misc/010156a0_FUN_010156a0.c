// addr: 0x010156a0
// name: FUN_010156a0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_010156a0(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deletes an allocated descriptor object by calling FUN_01014270 under SEH and
                       freeing it. No class evidence, so left unnamed. */
  puStack_8 = &LAB_0163438b;
  local_c = ExceptionList;
  if (param_1 != (void *)0x0) {
    local_4 = 0xffffffff;
    ExceptionList = &local_c;
    release_capture_resources((int)param_1 + 0x18);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

