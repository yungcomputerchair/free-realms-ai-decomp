// addr: 0x00c8eee0
// name: FUN_00c8eee0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c8eee0(void *param_1)

{
                    /* Clears the dirty flag at offset +600 and calls the common data-source
                       refresh/notify helper. The data source class is not identified. */
  *(undefined1 *)((int)param_1 + 600) = 0;
  GuiDataSource_notifyTableViewsAndRegister(param_1);
  return;
}

