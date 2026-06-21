// addr: 0x00c6f290
// name: FUN_00c6f290
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c6f290(int param_1)

{
                    /* Tiny forwarding thunk to 00cf1a20, a BaseItemDefinitionDataSource-related
                       refresh/update helper. No additional class identity is visible. */
  BaseItemDefinitionDataSource_updateItemViewA((void *)(param_1 + 0xd56c));
  return;
}

