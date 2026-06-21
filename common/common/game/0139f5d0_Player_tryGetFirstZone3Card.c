// addr: 0x0139f5d0
// name: Player_tryGetFirstZone3Card
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Player_tryGetFirstZone3Card(void * outCard) */

bool Player_tryGetFirstZone3Card(void *outCard)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_4;
  
                    /* Fetches a vector for zone/id 3, checks it is non-empty, dynamic_casts the
                       first PlayElement to Card, and returns whether the cast succeeded. Evidence:
                       RTTI descriptors for PlayElement and Card and caller Player_drawCards. */
  local_4 = 3;
  iVar3 = FUN_01343ed0(&local_4);
  if ((*(int *)(iVar3 + 4) != 0) && (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2 != 0)) {
    local_4 = 3;
    iVar3 = FUN_01343ed0(&local_4);
    puVar2 = *(undefined4 **)(iVar3 + 4);
    puVar1 = *(undefined4 **)(iVar3 + 8);
    if (puVar1 < puVar2) {
      FUN_00d83c2d();
      puVar1 = *(undefined4 **)(iVar3 + 8);
    }
    if (puVar1 <= puVar2) {
      FUN_00d83c2d();
    }
    iVar3 = FUN_00d8d382(*puVar2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
    ;
    *(int *)outCard = iVar3;
    return iVar3 != 0;
  }
  return false;
}

