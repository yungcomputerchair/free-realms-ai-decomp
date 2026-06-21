// addr: 0x0139f660
// name: Card_getLastPlayElementInZone3
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool Card_getLastPlayElementInZone3(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_8;
  uint local_4;
  
                    /* Returns the last Card/PlayElement pointer from the internal vector for
                       list/zone id 3. Evidence is traversal of PlayElement vector and Card casts;
                       exact semantic name is weak. */
  local_8 = 3;
  iVar2 = FUN_01343ed0(&local_8);
  if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2 != 0)) {
    local_8 = 3;
    iVar2 = FUN_01343ed0(&local_8);
    uVar1 = *(uint *)(iVar2 + 8);
    if (uVar1 < *(uint *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    local_4 = uVar1;
    if ((*(uint *)(iVar2 + 8) < uVar1 - 4) || (uVar1 - 4 < *(uint *)(iVar2 + 4))) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(iVar2 + 8) <= (undefined4 *)(uVar1 - 4)) {
      FUN_00d83c2d();
    }
    iVar2 = FUN_00d8d382(*(undefined4 *)(uVar1 - 4),0,&PlayElement::RTTI_Type_Descriptor,
                         &Card::RTTI_Type_Descriptor,0);
    *param_1 = iVar2;
    return iVar2 != 0;
  }
  return false;
}

