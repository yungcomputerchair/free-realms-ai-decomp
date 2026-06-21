// addr: 0x00c6f2b0
// name: FUN_00c6f2b0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c6f2b0(int param_1)

{
                    /* Tiny forwarding thunk to 00cf2140, likely a BaseItemDefinitionDataSource UI
                       refresh helper. No additional class identity is visible. */
  BaseItemDefinitionDataSource_refreshAndRebuildList((void *)(param_1 + 0xd56c));
  return;
}

