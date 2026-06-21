// addr: 0x0132c4e0
// name: FUN_0132c4e0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __fastcall FUN_0132c4e0(int *param_1)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*param_1 + 8) <= (uint)param_1[1]) {
    FUN_00d83c2d();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}

