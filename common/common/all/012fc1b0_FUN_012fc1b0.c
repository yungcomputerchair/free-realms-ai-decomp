// addr: 0x012fc1b0
// name: FUN_012fc1b0
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_012fc1b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  uint local_14;
  undefined1 local_10 [16];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_14 = local_14 & 0xffffff00;
  piVar1 = (int *)FUN_012fb9b0(local_10,param_1,param_2,param_3,param_4,param_5,param_6,param_3,
                               local_14);
  if ((*piVar1 == 0) || (*piVar1 != param_3)) {
    FUN_00d83c2d();
  }
  return piVar1[1] == param_4;
}

