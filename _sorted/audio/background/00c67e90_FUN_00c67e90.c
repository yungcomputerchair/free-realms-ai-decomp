// addr: 0x00c67e90
// name: FUN_00c67e90
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_00c67e90(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uVar1 = param_5;
  cVar3 = (char)param_3;
  if ((char)param_3 == '\x01') {
    iVar2 = FUN_00c67640(param_5,param_2,1,0);
    if (iVar2 != 0) {
      cVar3 = '\x01';
      if ((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(*(int *)(iVar2 + 0x10) + 0x44) == 3)) {
        cVar3 = '\0';
      }
      *(char *)(iVar2 + 0x14) = cVar3;
    }
  }
  param_3 = FUN_00c67640(uVar1,param_2,1,1);
  if (param_3 != 0) {
    FUN_00c67520(&param_3);
    if (cVar3 != '\x01') {
      FUN_00c67020(param_4);
      if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (**(int **)(param_1 + 0xc) != 0)) {
        FUN_00c67a20(DAT_01762a34);
      }
    }
  }
  return;
}

