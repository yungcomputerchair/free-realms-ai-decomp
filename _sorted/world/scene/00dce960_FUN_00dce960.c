// addr: 0x00dce960
// name: FUN_00dce960
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dce960(int param_1)

{
                    /* If the argument is non-null, invokes two scene/Umbra cleanup helpers in
                       sequence. Exact object type and ownership are unclear. */
  if (param_1 != 0) {
    FUN_00dbb280();
    FUN_00dbb390();
  }
  return;
}

