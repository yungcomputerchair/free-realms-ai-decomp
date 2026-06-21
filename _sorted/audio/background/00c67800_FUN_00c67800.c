// addr: 0x00c67800
// name: FUN_00c67800
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_00c67800(undefined4 *param_1,undefined4 *param_2)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  *param_1 = SoeUtil::List<BackgroundTrack*,-1>::vftable;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_1 != param_2) {
    FUN_00c67350();
    while (param_2 = (undefined4 *)param_2[1], param_2 != (undefined4 *)0x0) {
      FUN_00c67410(param_2);
    }
  }
  return param_1;
}

