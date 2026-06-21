// addr: 0x0084e370
// name: FUN_0084e370
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_0084e370(int param_1,undefined4 param_2)

{
  void *type;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  type = (void *)FUN_008293e0(param_2);
  if (*(int *)(param_1 + -0x8c) != 0) {
    GuiObject_destroyOwnedChildrenOfType((void *)(param_1 + -0x140),type);
  }
  return type;
}

