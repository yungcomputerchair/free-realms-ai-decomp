// addr: 0x0098e620
// name: FUN_0098e620
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0098e620(char *param_1)

{
  void *pvVar1;
  int iVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_1 != (char *)0x0) {
    pvVar1 = GuiDataSourceRegistry_getOrCreateDataSource(param_1);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00d8d382(pvVar1,0,&GuiDataSource::RTTI_Type_Descriptor,
                           &GuiDsValue::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        if (((byte)*(undefined4 *)(iVar2 + 0x4c) & 6) == 6) {
          FUN_00402ce0(*(undefined4 *)(*(int *)(iVar2 + 0x50) + 4));
          return 1;
        }
        FUN_00402ce0(0);
        return 1;
      }
    }
  }
  return 0;
}

