// addr: 0x01410130
// name: CWGame_canDrawCards
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall CWGame_canDrawCards(int param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  undefined4 unaff_EDI;
  
                    /* Logs canDrawCards with the requested count/player id, verifies the player
                       exists, and returns the requested boolean/count value or false if the player
                       is missing. */
  Game_logGeneral(*(void **)(param_1 + 4),"canDrawCards %d, %d",param_2);
  pvVar1 = PlayArea_findPlayerElementById(*(void **)(param_1 + 4),param_3);
  if (pvVar1 == (void *)0x0) {
    Game_logGeneral(*(void **)(param_1 + 4),"couldn\'t get player",unaff_EDI);
    return 0;
  }
  return param_2;
}

