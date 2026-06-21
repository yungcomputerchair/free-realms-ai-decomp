// addr: 0x01015710
// name: FUN_01015710
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01015710(int *param_1)

{
                    /* Pointer cleanup helper: deletes the object pointed to by *param_1 if non-null
                       and then clears the pointer. */
  if (*param_1 != 0) {
    FUN_010156a0(*param_1);
    *param_1 = 0;
  }
  return;
}

