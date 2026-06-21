// addr: 0x00c67640
// name: FUN_00c67640
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_00c67640(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_4 == '\0') {
    piVar1 = *(int **)(param_1 + 0x10);
  }
  else {
    piVar1 = *(int **)(param_1 + 0xc);
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2 = (int *)*piVar1;
    if ((piVar2[1] == param_2) && ((*piVar2 == param_3 || (param_2 < 0)))) break;
    if (param_4 == '\0') {
      piVar1 = (int *)piVar1[2];
    }
    else {
      piVar1 = (int *)piVar1[1];
    }
  }
  if (param_5 == '\x01') {
    FUN_00c672c0(piVar1);
  }
  return piVar2;
}

