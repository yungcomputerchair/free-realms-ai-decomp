// addr: 0x01354020
// name: Game_validateCardInstanceData
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_validateCardInstanceData(void * this, void * card) */

bool __thiscall Game_validateCardInstanceData(void *this,void *card)

{
  undefined4 uVar1;
  bool bVar2;
  
                    /* Checks that a card has non-null instance data, logs the card id on failure,
                       and asserts if the data is missing. Returns true after validation. */
  uVar1 = OffsetAdjustor_plus04();
  FUN_01411430(uVar1);
  bVar2 = false;
  if (*(int *)((int)card + 100) == 0) {
    uVar1 = FUN_0138a380();
    uVar1 = PlayElement_getId(uVar1);
    Game_logGeneral(this,"Instace data was null for card %d (%d)",uVar1);
    bVar2 = *(int *)((int)card + 100) == 0;
  }
  if (bVar2) {
    FUN_012f5a60("card->getInstanceData() != NULL","..\\common\\common\\game\\Game.cpp",0x1953);
  }
  return true;
}

