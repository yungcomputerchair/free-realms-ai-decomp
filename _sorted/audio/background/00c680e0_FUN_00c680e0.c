// addr: 0x00c680e0
// name: FUN_00c680e0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c680e0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ffccb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = (int *)0x0;
  piVar4 = (int *)0x0;
  if (param_2 != 0) {
    piVar4 = (int *)FUN_00c676b0();
    if (piVar4 == (int *)0x0) {
      piVar4 = Mem_Alloc(0x18);
      local_4 = 0;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = param_2;
        piVar4[1] = param_4;
        piVar4[2] = param_3;
        piVar4[4] = 0;
        *(undefined1 *)(piVar4 + 5) = 0;
        FUN_00c67890();
      }
      local_4 = 0xffffffff;
    }
    else {
      piVar4[1] = param_4;
      piVar4[2] = param_3;
      *(undefined1 *)(piVar4 + 5) = 0;
    }
  }
  if ((((int *)param_1[3] != (int *)0x0) && (piVar3 = *(int **)param_1[3], piVar3 != (int *)0x0)) &&
     (*piVar3 == param_2)) {
    iVar1 = piVar3[4];
    piVar3[4] = piVar4[4];
    piVar4[4] = iVar1;
  }
  if (piVar4 != (int *)0x0) {
    uVar2 = (**(code **)(*param_1 + 8))();
    *(undefined1 *)((int)piVar4 + 0x15) = uVar2;
    FUN_00c675e0();
    if ((undefined4 *)param_1[3] == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)param_1[3];
    }
    if (piVar4 == piVar5) {
      if (piVar3 != (int *)0x0) {
        *(undefined1 *)(piVar3 + 5) = 0;
        FUN_00c67020();
      }
      FUN_00c67a20();
    }
  }
  ExceptionList = local_c;
  return;
}

