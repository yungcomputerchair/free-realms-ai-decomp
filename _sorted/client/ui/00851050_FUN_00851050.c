// addr: 0x00851050
// name: FUN_00851050
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_00851050(int param_1,undefined4 param_2)

{
  void *type;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  type = (void *)FUN_00850b40(param_2);
  GuiObject_destroyOwnedChildrenOfType((void *)(param_1 + -0xe8),type);
  return type;
}

