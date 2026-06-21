// addr: 0x01383750
// name: Game_handleMissingCostCard
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Game_handleMissingCostCard(void) */

void Game_handleMissingCostCard(void)

{
  void *pvVar1;
  int iVar2;
  int in_ECX;
  int elementId_;
  undefined4 uVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  undefined4 uVar6;
  
                    /* Looks up action target 0x1f; if it is not a Card, touches current turn and
                       calls a follow-up helper. */
  uVar6 = 0;
  pTVar5 = &Card::RTTI_Type_Descriptor;
  pTVar4 = &PlayElement::RTTI_Type_Descriptor;
  uVar3 = 0;
  FUN_01383460(0x1f);
  pvVar1 = find_play_element_in_maps(*(void **)(in_ECX + 4),elementId_);
  iVar2 = FUN_00d8d382(pvVar1,uVar3,pTVar4,pTVar5,uVar6);
  if (iVar2 == 0) {
    Game_getCurrentTurn(*(void **)(in_ECX + 4));
    FUN_013fc320();
    return;
  }
  return;
}

