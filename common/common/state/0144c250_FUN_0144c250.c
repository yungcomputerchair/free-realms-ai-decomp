// addr: 0x0144c250
// name: FUN_0144c250
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0144c250(int param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  piVar1 = *(int **)(param_1 + 0xfc);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == -0xf8) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      return 1;
    }
    if (param_1 == -0xf8) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0xfc)) {
      FUN_00d83c2d();
    }
    if (*(char *)(piVar2 + 4) == '\0') break;
    if (piVar2 == (int *)*(int *)(param_1 + 0xfc)) {
      FUN_00d83c2d();
    }
    iVar4 = piVar2[3];
    pvVar3 = (void *)StateMachineState_getGame();
    pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar4);
    if ((pvVar3 != (void *)0x0) && (iVar4 = unknown_getField28(pvVar3), iVar4 == 0)) {
      return 0;
    }
    FUN_01298330();
  }
  return 0;
}

