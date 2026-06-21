// addr: 0x00818300
// name: FUN_00818300
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00818300(int param_1)

{
                    /* Null-checked cleanup/shutdown wrapper that calls two UI-related routines on
                       the passed object. The object class is not identified in this context. */
  if (param_1 != 0) {
    FUN_00833100(param_1);
    FUN_00833350();
    return;
  }
  return;
}

