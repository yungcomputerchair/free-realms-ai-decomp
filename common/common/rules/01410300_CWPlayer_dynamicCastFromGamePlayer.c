// addr: 0x01410300
// name: CWPlayer_dynamicCastFromGamePlayer
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWPlayer_dynamicCastFromGamePlayer(void * game) */

void * __fastcall CWPlayer_dynamicCastFromGamePlayer(void *game)

{
  void *pvVar1;
  undefined4 uVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 uVar5;
  
                    /* Gets a Player object from game+0xa8 and dynamic-casts it to CWPlayer. */
  uVar5 = 0;
  pTVar4 = &CWPlayer::RTTI_Type_Descriptor;
  pTVar3 = &Player::RTTI_Type_Descriptor;
  uVar2 = 0;
  pvVar1 = PlayArea_findPlayerElementById(*(void **)((int)game + 4),*(int *)((int)game + 0xa8));
  pvVar1 = (void *)FUN_00d8d382(pvVar1,uVar2,pTVar3,pTVar4,uVar5);
  return pvVar1;
}

