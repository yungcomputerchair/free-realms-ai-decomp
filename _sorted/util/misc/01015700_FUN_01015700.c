// addr: 0x01015700
// name: FUN_01015700
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01015700(int *param_1)

{
                    /* Pointer cleanup helper: deletes the object pointed to by *param_1 if non-null
                       but leaves the pointer value unchanged. */
  if (*param_1 != 0) {
    FUN_010156a0(*param_1);
  }
  return;
}

