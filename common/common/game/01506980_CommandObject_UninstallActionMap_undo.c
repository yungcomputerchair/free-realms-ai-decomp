// addr: 0x01506980
// name: CommandObject_UninstallActionMap_undo
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall CommandObject_UninstallActionMap_undo(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  uint extraout_EAX;
  int actionId_;
  int key_;
  undefined4 unaff_ESI;
  int unaff_EDI;
  
                    /* Undo path for uninstalling an action map: if an action exists, logs 'Removing
                       Action', removes it from the card, updates packed action ids, and verifies
                       the game int-key entry; otherwise logs that mAction is NULL. */
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar3 = FUN_01321f20();
    uVar3 = PackedActionId_getLow12Bits(uVar3);
    uVar3 = FUN_01321f20(uVar3);
    uVar3 = PackedActionId_getHighBits(uVar3);
    Game_logGeneral(*(void **)(param_1 + 0x30),"Removing Action: %d (%d)",uVar3);
    removeValueFromObjectVector(*(void **)(param_1 + 0x30),*(int *)(param_1 + 0x13c),unaff_EDI);
    FUN_01321f20();
    pvVar4 = Card_getActionByID(*(void **)(param_1 + 0x13c),actionId_);
    if (pvVar4 == *(void **)(param_1 + 0x138)) {
      iVar1 = *(int *)(param_1 + 0x13c);
      iVar2 = *(int *)(iVar1 + 0x48);
      uVar3 = PlayElement_getId();
      (**(code **)(iVar2 + 8))
                (*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134),iVar1,
                 *(undefined4 *)(param_1 + 0x138),uVar3);
    }
    Card_removeAction(*(void **)(param_1 + 0x13c),*(void **)(param_1 + 0x138));
    FUN_01321f20();
    Game_verifyOrUpdateIntKeyEntry(*(void **)(param_1 + 0x30),key_);
    iVar1 = **(int **)(param_1 + 0x30);
    uVar3 = PlayElement_getId();
    uVar5 = (**(code **)(iVar1 + 8))
                      (*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134),
                       *(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x138),uVar3);
    return uVar5;
  }
  Game_logGeneral(*(void **)(param_1 + 0x30),
                  "CommandObject_UninstanllActionMap::undo command: mAction is NULL!",unaff_ESI);
  return extraout_EAX & 0xffffff00;
}

