// addr: 0x010bb2d0
// name: FUN_010bb2d0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_010bb2d0(int param_1)

{
  void *_Memory;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  _Memory = *(void **)(param_1 + 4);
  if (_Memory != (void *)0x0) {
    FUN_010bb250(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

