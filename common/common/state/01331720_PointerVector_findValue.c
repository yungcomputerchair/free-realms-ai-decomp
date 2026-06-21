// addr: 0x01331720
// name: PointerVector_findValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void PointerVector_findValue
               (undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5,
               int *param_6)

{
                    /* Scans a contiguous pointer/int vector range for a value and returns the
                       iterator in an output pair-like object. It is used by vector erase/selection
                       code and has generic container behavior. */
  if (param_3 != param_5) {
    do {
      if (*param_3 == *param_6) break;
      param_3 = param_3 + 1;
    } while (param_3 != param_5);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

