// addr: 0x00c93340
// name: FUN_00c93340
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c93340(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* Sets a lifecycle/closed flag at a large object offset and then dispatches
                       vfunc +0x10. Likely a UI object shutdown/destructor stage, but class identity
                       is unknown. */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x14ad) = 1;
                    /* WARNING: Could not recover jumptable at 0x00c9334c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

