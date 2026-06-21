// addr: 0x01472b80
// name: DoublePassState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DoublePassState_leaveState(void * this) */

void __fastcall DoublePassState_leaveState(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  void *this_00;
  int *piVar5;
  undefined4 unaff_EDI;
  char *fmt;
  
                    /* Leave-state handler for DoublePassState; logs, checks the current turn, and
                       pops pending state as appropriate. */
  fmt = "DOUBLEPASS::LEAVESTATE";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,fmt,unaff_EDI);
  StateMachine_popPendingState(*(void **)((int)this + 8));
  pvVar3 = (void *)StateMachineState_getGame();
  pvVar3 = Game_getCurrentTurn(pvVar3);
  uVar4 = get_field_8(pvVar3);
  if (uVar4 == 0) {
    pvVar3 = (void *)StateMachineState_getGame();
    pvVar3 = Game_getZoneCollection(pvVar3);
    this_00 = (void *)StateMachineState_getGame();
    piVar5 = Game_getCurrentTurn(this_00);
    puVar2 = *(undefined4 **)((int)pvVar3 + 4);
    puVar1 = *(undefined4 **)((int)pvVar3 + 8);
    if (puVar1 < puVar2) {
      FUN_00d83c2d();
      puVar1 = *(undefined4 **)((int)pvVar3 + 8);
    }
    if (puVar1 <= puVar2) {
      FUN_00d83c2d();
    }
    (**(code **)(*piVar5 + 0x48))(*puVar2);
  }
  return;
}

