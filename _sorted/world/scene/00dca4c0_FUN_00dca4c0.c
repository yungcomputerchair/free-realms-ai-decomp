// addr: 0x00dca4c0
// name: FUN_00dca4c0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dca4c0(int param_1,char param_2)

{
                    /* Destroys or detaches the subobject at object+0x10, optionally invoking a
                       second cleanup/free helper when the delete flag is set. Exact class is
                       unclear. */
  FUN_00dfbd00(param_1 + 0x10);
  if (param_2 != '\0') {
    FUN_00dfff00(param_1 + 0x10);
  }
  return;
}

