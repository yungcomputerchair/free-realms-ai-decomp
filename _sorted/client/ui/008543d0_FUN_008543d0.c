// addr: 0x008543d0
// name: FUN_008543d0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_008543d0(int param_1,undefined4 param_2)

{
  void *selection;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  selection = (void *)FUN_00853e50(param_2);
  GuiPropertySet_collectFromControls(*(void **)(param_1 + -0x34),selection);
  return selection;
}

