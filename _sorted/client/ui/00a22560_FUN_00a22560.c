// addr: 0x00a22560
// name: FUN_00a22560
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00a22560(void *param_1)

{
                    /* Clears the dirty flag at offset +600 and then refreshes/re-registers through
                       FUN_010caf20. The data source class is unknown from this context. */
  *(undefined1 *)((int)param_1 + 600) = 0;
  GuiDataSource_notifyTableViewsAndRegister(param_1);
  return;
}

