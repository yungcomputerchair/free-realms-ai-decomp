// addr: 0x014ca6d0
// name: StdVectorUInt_fillN
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * StdVectorUInt_fillN(int * param_1, int param_2, int * param_3) */

int * StdVectorUInt_fillN(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_3;
    piVar2 = piVar2 + 1;
  }
  return param_1 + param_2;
}

