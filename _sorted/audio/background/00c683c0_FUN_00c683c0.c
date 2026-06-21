// addr: 0x00c683c0
// name: FUN_00c683c0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c683c0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  piVar1 = (int *)param_1[4];
  do {
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
LAB_00c683eb:
      local_4 = piVar2;
      if (piVar2 != (int *)0x0) {
        if (*piVar2 == param_2) {
          FUN_00c67410(&local_4);
          return;
        }
        FUN_00c67020(DAT_01762a34);
        FUN_00c67520(&local_4);
      }
      FUN_00c680e0(param_2,1,0xffffffff);
      return;
    }
    piVar2 = (int *)*piVar1;
    if (piVar2[1] == -1) {
      local_4 = param_1;
      FUN_00c672c0(piVar1);
      goto LAB_00c683eb;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

