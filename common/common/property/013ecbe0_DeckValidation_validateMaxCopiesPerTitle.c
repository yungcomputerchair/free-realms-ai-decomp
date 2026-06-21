// addr: 0x013ecbe0
// name: DeckValidation_validateMaxCopiesPerTitle
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool DeckValidation_validateMaxCopiesPerTitle(void * deck, int maxCopies) */

bool DeckValidation_validateMaxCopiesPerTitle(void *deck,int maxCopies)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *this;
  uint uVar5;
  int iVar6;
  void *pvVar7;
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
  char acStack_400 [1004];
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Validates that the draw deck has no more than the requested number of copies
                       of each card title, adding singular/plural failure text on violations. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ecd7;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_454;
  ExceptionList = &local_c;
  local_440 = (void *)maxCopies;
  FUN_013ec7f0(DAT_01b839d8 ^ (uint)&stack0xfffffb9c);
  local_438 = 0;
  local_434 = (undefined1 *)0x0;
  local_430 = (undefined4 *)0x0;
  local_44c = 0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_4 = 2;
  iVar6 = *(int *)deck;
  ArchetypeDB_getInstance();
  uVar5 = Archetype_getField3c(this);
  (**(code **)(iVar6 + 0x54))(&local_450,uVar5);
  ArchetypeIndex_collectType3Matches(&stack0xfffffba8,auStack_410,&local_444,(void *)0x1);
  puStack_428 = puStack_40c;
  local_430 = (undefined4 *)*puStack_40c;
  local_434 = auStack_410;
  while( true ) {
    puVar3 = local_430;
    puVar2 = local_434;
    if ((local_434 == (undefined1 *)0x0) || (local_434 != auStack_410)) {
      FUN_00d83c2d();
    }
    pvVar7 = local_448;
    if (puVar3 == puStack_428) break;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
      FUN_00d83c2d();
    }
    if ((puVar3[0xb] != 0) &&
       (pvVar7 = deck, deck < (void *)((int)(puVar3[0xc] - puVar3[0xb]) >> 2))) {
      while( true ) {
        if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar3[0xb] == 0) || ((void *)((int)(puVar3[0xc] - puVar3[0xb]) >> 2) <= pvVar7))
        break;
        if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar3[0xb] == 0) || ((int)(puVar3[0xc] - puVar3[0xb]) >> 2 == 0)) {
          FUN_00d83c2d();
        }
        PropertyIndex_addTertiaryId(local_448,*(uint *)puVar3[0xb],0);
        pvVar7 = (void *)((int)pvVar7 + 1);
      }
    }
    PropertyTreeIterator39_increment((int *)&local_434);
  }
  iVar6 = PropertyMap_copyStringValueOrDefault(local_448,abStack_42c,(void *)0x0);
  local_c._1_3_ = (uint3)((uint)local_c >> 8);
  if (*(int *)(iVar6 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 2;
  }
  local_c._0_1_ = 2;
  if (puStack_428 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_428);
  }
  puStack_428 = (undefined4 *)0x0;
  uStack_424 = 0;
  uStack_420 = 0;
  if (iVar6 == 0) {
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
    FUN_013ec680();
    bVar4 = true;
  }
  else {
    if (deck == (void *)0x1) {
      pcVar8 = "You may only have %d card of each title in your draw deck.";
    }
    else {
      pcVar8 = "You may only have %d cards of each title in your draw deck.";
    }
    _sprintf(acStack_400,pcVar8,deck);
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
    PropertyTree21_getOrCreateVectorForId(pvVar7,abStack_42c,0);
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
    FUN_013ec680();
    bVar4 = false;
  }
  ExceptionList = pvStack_14;
  return bVar4;
}

