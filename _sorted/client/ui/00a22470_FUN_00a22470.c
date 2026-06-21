// addr: 0x00a22470
// name: FUN_00a22470
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00a22470(void *param_1)

{
                    /* Clears the dirty flag at offset +600 and then refreshes/re-registers through
                       FUN_010caf20. The data source class is unknown from this context. */
  *(undefined1 *)((int)param_1 + 600) = 0;
  GuiDataSource_notifyTableViewsAndRegister(param_1);
  return;
}

