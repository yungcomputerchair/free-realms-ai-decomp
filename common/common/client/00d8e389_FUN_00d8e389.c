// addr: 0x00d8e389
// name: FUN_00d8e389
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00d8e389(int param_1,int param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_1 < 0x14) {
    __lock(param_1 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

