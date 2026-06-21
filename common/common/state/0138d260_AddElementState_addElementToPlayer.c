// addr: 0x0138d260
// name: AddElementState_addElementToPlayer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AddElementState_addElementToPlayer(void * this, void * game, int
   playerId_, int elementId_) */

bool __thiscall
AddElementState_addElementToPlayer(void *this,void *game,int playerId_,int elementId_)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int elementId__00;
  undefined4 unaff_EDI;
  
                    /* Attempts to add an element to a player, logs success/failure, records current
                       state, and reports whether failed element is a card. */
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)game + 0x20);
  PlayElement_setZoneOwner(this,playerId_);
  *(void **)((int)this + 0x30) = game;
  *(int *)((int)this + 0x34) = elementId_;
  pvVar1 = get_or_create_related_object((void *)elementId_);
  if ((char)pvVar1 != '\0') {
    Game_logGeneral(*(void **)((int)this + 0x30),"element %d added succsessfully to player %d\n",
                    elementId_);
    uVar2 = StateMachine_getCurrentState();
    *(undefined4 *)((int)this + 0x2c) = uVar2;
    return true;
  }
  Game_logGeneral(*(void **)((int)this + 0x30),"element %d could not be added!\n",
                  *(undefined4 *)((int)this + 0x34));
  pvVar1 = find_play_element_in_maps(*(void **)((int)this + 0x30),elementId__00);
  iVar3 = FUN_00d8d382(pvVar1,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  if (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x13c) < 0x10) {
      iVar3 = iVar3 + 0x128;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x128);
    }
    Game_logGeneral(*(void **)((int)this + 0x30),"element with that ID is card: %s\n",iVar3);
    uVar2 = StateMachine_getCurrentState();
    *(undefined4 *)((int)this + 0x2c) = uVar2;
    return true;
  }
  Game_logGeneral(*(void **)((int)this + 0x30),"element with that Id is not a card\n",unaff_EDI);
  uVar2 = StateMachine_getCurrentState();
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  return true;
}

