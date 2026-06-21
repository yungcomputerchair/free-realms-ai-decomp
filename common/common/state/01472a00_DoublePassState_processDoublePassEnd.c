// addr: 0x01472a00
// name: DoublePassState_processDoublePassEnd
// subsystem: common/common/state
// source (binary assert): common/common/state/DoublePassState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DoublePassState_processDoublePassEnd(void * this) */

int __fastcall DoublePassState_processDoublePassEnd(void *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Handles DOUBLEPASS::PROCESSDOUBLEPASSEND: logs the state, checks the loop
                       ending strategy, optionally notifies the active player/current game object,
                       updates an internal status to 3, and invokes a virtual transition hook.
                       Asserts on unhandled loop ending strategy. */
  fmt = "DOUBLEPASS::PROCESSDOUBLEPASSEND";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,fmt,unaff_ESI);
  iVar1 = *(int *)((int)this + 0x120);
  if ((iVar1 != 1) && (iVar1 != 2)) {
    if (iVar1 != 3) {
      FUN_012f5a60("!\"unhandled double pass loop ending strategy\"",
                   "..\\common\\common\\state\\DoublePassState.cpp",0x3aa);
      return 0;
    }
    cVar3 = (**(code **)(*(int *)this + 0x128))();
    if (cVar3 == '\0') {
      pvVar4 = (void *)StateMachineState_getCurrentTurn();
      uVar5 = get_field_8(pvVar4);
      if (uVar5 != 0) {
        piVar6 = (int *)StateMachineState_getGame();
        iVar1 = *piVar6;
        pvVar4 = (void *)StateMachineState_getCurrentTurn();
        uVar5 = get_field_8(pvVar4);
        (**(code **)(iVar1 + 0x174))(uVar5);
      }
      pcVar2 = *(code **)(*(int *)this + 0x88);
      *(undefined4 *)((int)this + 0x128) = 3;
      (*pcVar2)();
      return 2;
    }
  }
  return 1;
}

