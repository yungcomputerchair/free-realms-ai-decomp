// addr: 0x013f6130
// name: StateMachine_setCurrentState
// subsystem: common/common/rules
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall StateMachine_setCurrentState(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* Installs a new current state, links it to the previous current state, guards
                       against an excessive state stack, and invokes the state enter/update virtual.
                        */
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_012f5a60("state","..\\common\\common\\state\\StateMachine.cpp",0x22d);
  }
  FUN_013f5a40(&param_2);
  (**(code **)(*piVar1 + 0xfc))(*(undefined4 *)(param_1 + 0x18));
  *(int **)(param_1 + 0x18) = piVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 != 0) && (20000 < (uint)(*(int *)(param_1 + 0x10) - iVar2 >> 2))) {
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x10) - iVar2 >> 2;
      }
      Game_logGeneral(*(void **)(param_1 + 4),"TOO MANY STATES ON THE STACK: %d",iVar2);
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
      }
      Game_writeGameLog(*(undefined4 *)(param_1 + 4),"#TOO MANY STATES ON THE STACK: %d",iVar2);
      (**(code **)(**(int **)(param_1 + 4) + 0x1b0))();
    }
    return 0;
  }
  uVar3 = (**(code **)(*piVar1 + 0x38))();
  return uVar3;
}

