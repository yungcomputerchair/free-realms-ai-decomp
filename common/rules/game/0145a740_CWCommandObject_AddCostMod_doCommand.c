// addr: 0x0145a740
// name: CWCommandObject_AddCostMod_doCommand
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CWCommandObject_AddCostMod_doCommand(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  undefined4 uVar7;
  
                    /* Executes AddCostMod by resolving an AttributeModifier, casting the game to
                       CWGame, and recording/adding the modifier to the game. Evidence: log string
                       "CWCommandObject_AddCostMod::doCommand" and AttributeModifier RTTI. */
  Game_logGeneral(*(void **)(param_1 + 0x30),"CWCommandObject_AddCostMod::doCommand %d",
                  *(undefined4 *)(param_1 + 0x134));
  uVar7 = 0;
  pTVar6 = &AttributeModifier::RTTI_Type_Descriptor;
  pTVar5 = &PlayElement::RTTI_Type_Descriptor;
  uVar4 = 0;
  pvVar1 = find_play_element_in_maps(*(void **)(param_1 + 0x30),*(int *)(param_1 + 0x134));
  iVar2 = FUN_00d8d382(pvVar1,uVar4,pTVar5,pTVar6,uVar7);
  if (iVar2 != 0) {
    iVar3 = FUN_00d8d382(*(undefined4 *)(param_1 + 0x30),0,&CTP::Game::RTTI_Type_Descriptor,
                         &CWGame::RTTI_Type_Descriptor,0);
    if (iVar3 != 0) {
      Game_recordPlayedElementId(iVar2,param_1 + 0x84);
    }
  }
  return 1;
}

