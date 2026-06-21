// addr: 0x012303e0
// name: FUN_012303e0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_012303e0(int param_1)

{
                    /* Destroys a GFx wrapper/external interface holder: clears GFxWrap external
                       interface, frees the held object, and runs shared cleanup. No class evidence.
                        */
  if (*(int *)(param_1 + 8) != 0) {
    GFxWrap::TCSetExternalInterface((TCDelegate *)0x0);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  noop();
  return;
}

