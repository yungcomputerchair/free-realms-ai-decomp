// addr: 0x008e9d20
// name: FUN_008e9d20
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_008e9d20(int param_1)

{
  void *_Memory;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  _Memory = *(void **)(param_1 + 4);
  if (_Memory != (void *)0x0) {
    FUN_008c2eb0(_Memory);
    FUN_008ce0a0();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

