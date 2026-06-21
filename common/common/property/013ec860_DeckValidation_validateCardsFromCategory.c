// addr: 0x013ec860
// name: DeckValidation_validateCardsFromCategory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool DeckValidation_validateCardsFromCategory(void * deck, void * scratch,
   uint categoryProperty, void * categoryName) */

bool DeckValidation_validateCardsFromCategory
               (void *deck,void *scratch,uint categoryProperty,void *categoryName)

{
  char cVar1;
  void *this;
  undefined1 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  void *this_00;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  void *pvStack_454;
  undefined4 local_450;
  undefined4 local_44c;
  void *local_448;
  undefined4 local_444;
  void *local_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined1 *local_434;
  undefined4 *local_430;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_42c [4];
  undefined4 *puStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_418;
  uint uStack_414;
  undefined1 auStack_410 [4];
  undefined4 *puStack_40c;
  undefined1 local_408 [4];
  int iStack_404;
  char acStack_400 [4];
  void *local_3fc;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Validates that deck cards are restricted to a specific category/property and
                       records "You may only have cards from %s." when invalid cards are found. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ec67;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&pvStack_454);
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xfffffb9c;
  ExceptionList = &local_c;
  local_3fc = categoryName;
  local_440 = scratch;
  PropertyTree21_ctor((int)local_408);
  local_438 = 0;
  local_434 = (undefined1 *)0x0;
  local_430 = (undefined4 *)0x0;
  local_44c = 0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_4 = 2;
  iVar7 = *(int *)deck;
  ArchetypeDB_getInstance();
  uVar6 = Archetype_getField3c(this_00);
  (**(code **)(iVar7 + 0x54))(&local_450,uVar6,uVar5);
  ArchetypeIndex_collectType2Matches(&stack0xfffffba8,auStack_410,&local_444,(void *)0x48);
  puStack_428 = puStack_40c;
  local_430 = (undefined4 *)*puStack_40c;
  local_434 = auStack_410;
  while( true ) {
    puVar3 = local_430;
    puVar2 = local_434;
    if ((local_434 == (undefined1 *)0x0) || (local_434 != auStack_410)) {
      FUN_00d83c2d();
    }
    this = local_448;
    if (puVar3 == puStack_428) break;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
      FUN_00d83c2d();
    }
    if ((void *)puVar3[3] != deck) {
      uVar5 = 0;
      while( true ) {
        if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar3[5] == 0) || ((uint)((int)(puVar3[6] - puVar3[5]) >> 2) <= uVar5)) break;
        if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar3[5] == 0) || ((uint)((int)(puVar3[6] - puVar3[5]) >> 2) <= uVar5)) {
          FUN_00d83c2d();
        }
        PropertyIndex_addTertiaryId(local_448,*(uint *)(puVar3[5] + uVar5 * 4),0);
        uVar5 = uVar5 + 1;
      }
    }
    PropertyTreeIterator21_increment((int *)&local_434);
  }
  iVar7 = PropertyMap_copyStringValueOrDefault(local_448,abStack_42c,(void *)0x0);
  local_c._1_3_ = (uint3)((uint)local_c >> 8);
  if (*(int *)(iVar7 + 4) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar7 + 8) - *(int *)(iVar7 + 4) >> 2;
  }
  local_c._0_1_ = 2;
  if (puStack_428 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_428);
  }
  puStack_428 = (undefined4 *)0x0;
  uStack_424 = 0;
  uStack_420 = 0;
  if (iVar7 == 0) {
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    if (pvStack_454 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    pvStack_454 = (void *)0x0;
    local_450 = 0;
    local_44c = 0;
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (local_440 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_440);
    }
    local_440 = (void *)0x0;
    uStack_43c = 0;
    local_438 = 0;
    local_c = (void *)0xffffffff;
    PropertyTree21_clearAndFreeHeader((int)auStack_410);
    bVar4 = true;
  }
  else {
    if (*(uint *)(iStack_404 + 0x18) < 0x10) {
      iStack_404 = iStack_404 + 4;
    }
    else {
      iStack_404 = *(int *)(iStack_404 + 4);
    }
    _sprintf(acStack_400,"You may only have cards from %s.",iStack_404);
    pcVar8 = acStack_400;
    uStack_414 = 0xf;
    uStack_418 = 0;
    puStack_428 = (undefined4 *)((uint)puStack_428 & 0xffffff00);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_42c,acStack_400,(int)pcVar8 - (int)(acStack_400 + 1));
    local_c._0_1_ = 4;
    PropertyTree21_getOrCreateVectorForId(this,abStack_42c,0);
    local_c._0_1_ = 2;
    if (0xf < uStack_414) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_428);
    }
    uStack_414 = 0xf;
    uStack_418 = 0;
    puStack_428 = (undefined4 *)((uint)puStack_428 & 0xffffff00);
    PropertyMap_setValueForKey(1,0);
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    if (pvStack_454 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    pvStack_454 = (void *)0x0;
    local_450 = 0;
    local_44c = 0;
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (local_440 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_440);
    }
    local_440 = (void *)0x0;
    uStack_43c = 0;
    local_438 = 0;
    local_c = (void *)0xffffffff;
    PropertyTree21_clearAndFreeHeader((int)auStack_410);
    bVar4 = false;
  }
  ExceptionList = local_10;
  return bVar4;
}

