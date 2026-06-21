// addr: 0x0085a170
// name: FUN_0085a170
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_0085a170(int param_1,undefined4 param_2)

{
  void *type;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  type = (void *)FUN_00827dd0(param_2);
  if (*(int *)(param_1 + -0xec) != 0) {
    GuiObject_destroyOwnedChildrenOfType((void *)(param_1 + -0x1a0),type);
  }
  return type;
}

