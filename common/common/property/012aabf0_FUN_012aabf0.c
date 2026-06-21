// addr: 0x012aabf0
// name: FUN_012aabf0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012aabf0(void)

{
  void *_Memory;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  _Memory = DAT_01cbd680;
  if (DAT_01cbd680 != (void *)0x0) {
    StringKeyTreeOwner_dtor(DAT_01cbd680);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_01cbd680 = (void *)0x0;
  return;
}

