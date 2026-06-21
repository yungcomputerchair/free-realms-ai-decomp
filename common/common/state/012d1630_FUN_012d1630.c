// addr: 0x012d1630
// name: FUN_012d1630
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012d1630(undefined4 *param_1,undefined4 *param_2)

{
                    /* Copies one dword from the source pointer into the destination if the
                       destination is non-null. This looks like generic helper/template glue rather
                       than state logic. */
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

