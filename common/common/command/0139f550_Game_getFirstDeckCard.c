// addr: 0x0139f550
// name: Game_getFirstDeckCard
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 Game_getFirstDeckCard(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_4;
  
                    /* Returns the first Card from play area/list id 3 if that list is non-empty;
                       otherwise returns null. Called by CommandObjectDrawCard_canDoCommand. */
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
    uVar4 = FUN_00d8d382(*puVar2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
    ;
    return uVar4;
  }
  return 0;
}

