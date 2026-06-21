// addr: 0x012dd0f0
// name: DeckValidation_validateCardsFromSet
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool DeckValidation_validateCardsFromSet(void * deck, void * unused, int
   errorMapKey, int allowedSetId, void * setName) */

bool DeckValidation_validateCardsFromSet
               (void *deck,void *unused,int errorMapKey,int allowedSetId,void *setName)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  void *local_43c;
  undefined1 local_438 [4];
  void *local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined1 *local_428;
  undefined4 *local_424;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_420 [4];
  undefined4 *local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_40c;
  uint local_408;
  undefined1 local_404 [4];
  undefined4 *local_400;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Validates that all relevant deck cards belong to a required set/category and
                       records "You may only have cards from %s." on failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016713fc;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_43c;
  piVar5 = (int *)(DAT_01b839d8 ^ (uint)&stack0xfffffbb4);
  ExceptionList = &local_c;
  local_43c = setName;
  PropertyTree21_ctor((int)local_404);
  local_434 = (void *)0x0;
  local_430 = 0;
  local_42c = 0;
  local_4 = 1;
  ArchetypeIndex_collectType2Matches(deck,local_404,local_438,(void *)0x49);
  local_41c = local_400;
  local_424 = (undefined4 *)*local_400;
  local_428 = local_404;
  while( true ) {
    puVar3 = local_424;
    puVar2 = local_428;
    uVar8 = 0;
    if ((local_428 == (undefined1 *)0x0) || (local_428 != local_404)) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_41c) break;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar3[3] != allowedSetId) {
      while( true ) {
        if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar3[5] == 0) || ((uint)((int)(puVar3[6] - puVar3[5]) >> 2) <= uVar8)) break;
        if (puVar3 == *(undefined4 **)(puVar2 + 4)) {
          FUN_00d83c2d();
        }
        if ((puVar3[5] == 0) || ((uint)((int)(puVar3[6] - puVar3[5]) >> 2) <= uVar8)) {
          FUN_00d83c2d();
        }
        PropertyIndex_addTertiaryId(unused,*(uint *)(puVar3[5] + uVar8 * 4),errorMapKey);
        uVar8 = uVar8 + 1;
      }
    }
    PropertyTreeIterator21_increment((int *)&local_428);
  }
  iVar6 = PropertyMap_copyStringValueOrDefault(unused,local_420,(void *)errorMapKey);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  if (*(int *)(iVar6 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 2;
  }
  local_4._0_1_ = 1;
  if (local_41c == (undefined4 *)0x0) {
    local_41c = (undefined4 *)0x0;
    local_418 = 0;
    local_414 = 0;
    if (iVar6 == 0) {
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_434 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_434);
      }
      local_434 = (void *)0x0;
      local_430 = 0;
      local_42c = 0;
      local_4 = 0xffffffff;
      PropertyTree21_clearAndFreeHeader((int)local_404);
      bVar4 = true;
    }
    else {
      if (*(uint *)((int)local_43c + 0x18) < 0x10) {
        iVar6 = (int)local_43c + 4;
      }
      else {
        iVar6 = *(int *)((int)local_43c + 4);
      }
      _sprintf(local_3f8,"You may only have cards from %s.",iVar6);
      pcVar7 = local_3f8;
      local_408 = 0xf;
      local_40c = 0;
      local_41c = (undefined4 *)((uint)local_41c & 0xffffff00);
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_420,local_3f8,(int)pcVar7 - (int)(local_3f8 + 1));
      local_4._0_1_ = 3;
      PropertyTree21_getOrCreateVectorForId(unused,local_420,errorMapKey);
      local_4._0_1_ = 1;
      if (0xf < local_408) {
                    /* WARNING: Subroutine does not return */
        _free(local_41c);
      }
      local_408 = 0xf;
      local_40c = 0;
      local_41c = (undefined4 *)((uint)local_41c & 0xffffff00);
      local_43c = (void *)errorMapKey;
      piVar5 = PropertyIntMap_findOrCreateSlot((void *)((int)unused + 0x30),&local_43c,piVar5);
      *piVar5 = 1;
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_434 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_434);
      }
      local_434 = (void *)0x0;
      local_430 = 0;
      local_42c = 0;
      local_4 = 0xffffffff;
      PropertyTree21_clearAndFreeHeader((int)local_404);
      bVar4 = false;
    }
    ExceptionList = puStack_8;
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_41c);
}

