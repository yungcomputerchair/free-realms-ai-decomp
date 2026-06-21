// addr: 0x013ef900
// name: StateMachine_getActivePlayerChecked
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * StateMachine_getActivePlayerChecked(void) */

void * StateMachine_getActivePlayerChecked(void)

{
  void *pvVar1;
  int in_ECX;
  
                    /* Gets the game/current context, retrieves the active player, and asserts if it
                       is null. Evidence is StateMachine.cpp line 0x127 and the 'activePlayer'
                       assertion string. */
  pvVar1 = Game_getCurrentTurn(*(void **)(in_ECX + 4));
  pvVar1 = (void *)get_field_8(pvVar1);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("activePlayer","..\\common\\common\\state\\StateMachine.cpp",0x127);
  }
  return pvVar1;
}

