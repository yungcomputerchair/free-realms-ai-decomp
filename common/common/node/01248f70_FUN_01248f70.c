// addr: 0x01248f70
// name: FUN_01248f70
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall FUN_01248f70(int *param_1)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*param_1 + 8) <= (uint)param_1[1]) {
    FUN_00d83c2d();
    return param_1[1];
  }
  return param_1[1];
}

