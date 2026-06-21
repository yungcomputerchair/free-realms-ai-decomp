// addr: 0x00436d2c
// name: FUN_00436d2c
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00436d2c(uint param_1)

{
                    /* Small wrapper that, for nonzero input, masks it to 16 bits and invokes the
                       constructor-like routine 0043561e with the high halfword address as an
                       argument. Exact class/semantic purpose is unknown. */
  if (param_1 != 0) {
    param_1 = param_1 & 0xffff;
    FUN_0043561e(0,0,(int)&param_1 + 2);
  }
  return;
}

