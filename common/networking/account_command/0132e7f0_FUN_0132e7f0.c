// addr: 0x0132e7f0
// name: FUN_0132e7f0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0132e7f0(int *param_1,int *param_2)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    FUN_00d83c2d();
  }
  return CONCAT31((int3)((uint)param_1[1] >> 8),param_1[1] != param_2[1]);
}

