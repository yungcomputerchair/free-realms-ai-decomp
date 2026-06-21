// addr: 0x013ecfe0
// name: DeckValidation_validateCommonOnly
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: bool DeckValidation_validateCommonOnly(void * deck, void * errors) */

bool DeckValidation_validateCommonOnly(void *deck,void *errors)

{
  int *piVar1;
  void *this;
  uint uVar2;
  int iVar3;
  void *unaff_retaddr;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_5c [4];
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  undefined1 local_38 [4];
  undefined1 auStack_34 [4];
  void *pvStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Validates a deck for the common-only rule, first applying max three copies
                       per title and then flagging any non-common rarity cards. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ed38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeckValidation_requireMinimumDrawDeckCards(deck,errors,0x28);
  DeckValidation_validateMaxCopiesPerTitle(deck,(int)errors);
  PropertyTree21_ctor((int)local_38);
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_4 = 2;
  iVar3 = *(int *)deck;
  ArchetypeDB_getInstance();
  uVar2 = Archetype_getField3c(this);
  (**(code **)(iVar3 + 0x54))(&local_2c,uVar2);
  ArchetypeIndex_collectType2Matches(auStack_34,auStack_40,&local_24,(void *)0x4c);
  piStack_58 = piStack_3c;
  piVar1 = (int *)*piStack_3c;
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x40) {
      FUN_00d83c2d();
    }
    if (piVar1 == piStack_58) break;
    if (&stack0x00000000 == (undefined1 *)0x40) {
      FUN_00d83c2d();
    }
    if (piVar1 == piStack_3c) {
      FUN_00d83c2d();
    }
    if (piVar1[3] != 0x22323) {
      uVar2 = 0;
      while( true ) {
        if (piVar1 == piStack_3c) {
          FUN_00d83c2d();
        }
        if ((piVar1[5] == 0) || ((uint)(piVar1[6] - piVar1[5] >> 2) <= uVar2)) break;
        if (piVar1 == piStack_3c) {
          FUN_00d83c2d();
        }
        if ((piVar1[5] == 0) || ((uint)(piVar1[6] - piVar1[5] >> 2) <= uVar2)) {
          FUN_00d83c2d();
        }
        PropertyIndex_addTertiaryId(unaff_retaddr,*(uint *)(piVar1[5] + uVar2 * 4),0);
        uVar2 = uVar2 + 1;
      }
    }
    PropertyTreeIterator21_increment((int *)&stack0xffffff9c);
  }
  iVar3 = PropertyMap_copyStringValueOrDefault(unaff_retaddr,abStack_5c,(void *)0x0);
  if (*(int *)(iVar3 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2;
  }
  local_c._0_1_ = 2;
  if (piStack_58 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_58);
  }
  piStack_58 = (int *)0x0;
  uStack_54 = 0;
  uStack_50 = 0;
  if (iVar3 != 0) {
    uStack_44 = 0xf;
    uStack_48 = 0;
    piStack_58 = (void *)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_5c,"You may only have Common rarity cards in your draw deck.",0x38);
    local_c._0_1_ = 4;
    PropertyTree21_getOrCreateVectorForId(unaff_retaddr,abStack_5c,0);
    local_c._0_1_ = 2;
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_58);
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    piStack_58 = (int *)((uint)piStack_58 & 0xffffff00);
    PropertyMap_setValueForKey(1,0);
  }
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  if (pvStack_30 == (void *)0x0) {
    pvStack_30 = (void *)0x0;
    local_2c = 0;
    local_28 = 0;
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (local_20 == (void *)0x0) {
      local_20 = (void *)0x0;
      uStack_1c = 0;
      local_18 = 0;
      local_c = (void *)0xffffffff;
      PropertyTree21_clearAndFreeHeader((int)auStack_40);
      ExceptionList = local_10;
      return (bool)deck._0_1_;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_30);
}

