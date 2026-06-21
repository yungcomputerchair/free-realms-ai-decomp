// addr: 0x008497f0
// name: FUN_008497f0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_008497f0(int param_1,undefined4 param_2)

{
  void *type;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  type = (void *)FUN_008288e0(param_2);
  if (*(int *)(param_1 + -0x5c) != 0) {
    GuiObject_destroyOwnedChildrenOfType((void *)(param_1 + -0x110),type);
  }
  return type;
}

