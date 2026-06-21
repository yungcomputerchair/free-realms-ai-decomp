// addr: 0x0088ba80
// name: FUN_0088ba80
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0088ba80(int param_1)

{
                    /* Trivial wrapper that calls FUN_00dbe330 regardless of whether the argument is
                       null. No semantic evidence, so left unnamed. */
  if (param_1 != 0) {
    Deep_setVisibilityCameraThreadSafe(*(void **)(param_1 + 0x15c));
    return;
  }
  Deep_setVisibilityCameraThreadSafe(DAT_01be46d8);
  return;
}

