// addr: 0x012dd410
// name: DeckValidation_validateCardsFromSetWithExclusions
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x012dd604) */
/* Setting prototype: bool DeckValidation_validateCardsFromSetWithExclusions(void * deck, void *
   context, int errorMapKey, int excludedIds, void * setName) */

bool DeckValidation_validateCardsFromSetWithExclusions
               (void *deck,void *context,int errorMapKey,int excludedIds,void *setName)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  void *this;
  bool bVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  uint local_458;
  void *local_454;
  undefined1 *local_450;
  undefined4 *local_44c;
  void *local_448;
  undefined1 local_444 [4];
  void *local_440;
  undefined4 local_43c;
  undefined4 local_438;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_434 [4];
  undefined4 *local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_420;
  uint local_41c;
  undefined1 local_418 [4];
  undefined4 *local_414;
  int local_40c;
  int local_408;
  int local_404;
  uint local_400;
  uint *local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Validates that cards are from a required set/category while ignoring ids
                       already present in supplied exclusion vectors. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167145c;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_458;
  piVar10 = (int *)(DAT_01b839d8 ^ (uint)&stack0xfffffb98);
  ExceptionList = &local_c;
  local_454 = setName;
  local_448 = context;
  local_40c = excludedIds;
  PropertyTree21_ctor((int)local_418);
  local_440 = (void *)0x0;
  local_43c = 0;
  local_438 = 0;
  local_4 = 1;
  ArchetypeIndex_collectType2Matches(deck,local_418,local_444,(void *)0x49);
  local_44c = (undefined4 *)*local_414;
  local_450 = local_418;
  local_430 = local_414;
  while( true ) {
    puVar8 = local_44c;
    puVar7 = local_450;
    if ((local_450 == (undefined1 *)0x0) || (local_450 != local_418)) {
      FUN_00d83c2d();
    }
    this = local_448;
    if (puVar8 == local_430) break;
    if (puVar7 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar8 == *(undefined4 **)(puVar7 + 4)) {
      FUN_00d83c2d();
    }
    puVar2 = *(uint **)(excludedIds + 8);
    local_458 = puVar8[3];
    if (puVar2 < *(uint **)(excludedIds + 4)) {
      FUN_00d83c2d();
    }
    puVar3 = *(uint **)(excludedIds + 4);
    puVar5 = puVar3;
    if (*(uint **)(excludedIds + 8) < puVar3) {
      FUN_00d83c2d();
    }
    for (; (puVar5 != puVar2 && (*puVar5 != local_458)); puVar5 = puVar5 + 1) {
    }
    puVar2 = *(uint **)(excludedIds + 8);
    local_3fc = puVar3;
    if (puVar2 < *(uint **)(excludedIds + 4)) {
      FUN_00d83c2d();
    }
    if (excludedIds == 0) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar2) {
      local_458 = 0;
      while( true ) {
        puVar7 = local_450;
        uVar6 = local_458;
        if (puVar8 == *(undefined4 **)(local_450 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar8[5] == 0) || ((uint)((int)(puVar8[6] - puVar8[5]) >> 2) <= uVar6)) break;
        if (puVar8 == *(undefined4 **)(puVar7 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar8[5] == 0) || ((uint)((int)(puVar8[6] - puVar8[5]) >> 2) <= uVar6)) {
          FUN_00d83c2d();
        }
        local_400 = *(uint *)(puVar8[5] + uVar6 * 4);
        local_408 = FUN_013795c0();
        iVar11 = local_404;
        piVar4 = *(int **)(local_404 + 0x54);
        if (piVar4 < *(int **)(local_404 + 0x50)) {
          FUN_00d83c2d();
        }
        piVar13 = *(int **)(iVar11 + 0x50);
        if (*(int **)(iVar11 + 0x54) < piVar13) {
          FUN_00d83c2d();
        }
        for (; (piVar13 != piVar4 && (*piVar13 != local_408)); piVar13 = piVar13 + 1) {
        }
        piVar4 = *(int **)(iVar11 + 0x54);
        if (piVar4 < *(int **)(iVar11 + 0x50)) {
          FUN_00d83c2d();
        }
        if (piVar13 == piVar4) {
          PropertyIndex_addTertiaryId(local_448,local_400,errorMapKey);
        }
        local_458 = local_458 + 1;
        excludedIds = local_40c;
      }
    }
    PropertyTreeIterator21_increment((int *)&local_450);
  }
  iVar11 = PropertyMap_copyStringValueOrDefault(local_448,local_434,(void *)errorMapKey);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  if (*(int *)(iVar11 + 4) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar11 + 8) - *(int *)(iVar11 + 4) >> 2;
  }
  local_4._0_1_ = 1;
  if (local_430 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_430);
  }
  local_430 = (undefined4 *)0x0;
  local_42c = 0;
  local_428 = 0;
  if (iVar11 == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_440 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_440);
    }
    local_440 = (void *)0x0;
    local_43c = 0;
    local_438 = 0;
    local_4 = 0xffffffff;
    PropertyTree21_clearAndFreeHeader((int)local_418);
    bVar9 = true;
  }
  else {
    if (*(uint *)((int)local_454 + 0x18) < 0x10) {
      iVar11 = (int)local_454 + 4;
    }
    else {
      iVar11 = *(int *)((int)local_454 + 4);
    }
    _sprintf(local_3f8,"You may only have cards from %s.",iVar11);
    pcVar12 = local_3f8;
    local_41c = 0xf;
    local_420 = 0;
    local_430 = (undefined4 *)((uint)local_430 & 0xffffff00);
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_434,local_3f8,(int)pcVar12 - (int)(local_3f8 + 1));
    local_4._0_1_ = 3;
    PropertyTree21_getOrCreateVectorForId(this,local_434,errorMapKey);
    local_4._0_1_ = 1;
    if (0xf < local_41c) {
                    /* WARNING: Subroutine does not return */
      _free(local_430);
    }
    local_41c = 0xf;
    local_420 = 0;
    local_430 = (undefined4 *)((uint)local_430 & 0xffffff00);
    local_454 = (void *)errorMapKey;
    piVar10 = PropertyIntMap_findOrCreateSlot((void *)((int)this + 0x30),&local_454,piVar10);
    *piVar10 = 1;
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_440 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_440);
    }
    local_440 = (void *)0x0;
    local_43c = 0;
    local_438 = 0;
    local_4 = 0xffffffff;
    PropertyTree21_clearAndFreeHeader((int)local_418);
    bVar9 = false;
  }
  ExceptionList = puStack_8;
  return bVar9;
}

