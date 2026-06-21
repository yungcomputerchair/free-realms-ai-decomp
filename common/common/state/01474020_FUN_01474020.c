// addr: 0x01474020
// name: FUN_01474020
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01474020(void)

{
  void *pvVar1;
  
                    /* Fetches the game zone collection and passes it to FUN_01473310 after an
                       unnamed logging/context call. No class/method identity is visible. */
  pvVar1 = (void *)StateMachineState_getGame();
  pvVar1 = Game_getZoneCollection(pvVar1);
  FUN_01473310(pvVar1);
  return;
}

