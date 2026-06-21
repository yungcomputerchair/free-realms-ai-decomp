// addr: 0x01532d50
// name: EventCommand_RespondEventLeaderBoard_cloneLeaderboardFields
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventLeaderBoard_cloneLeaderboardFields(void * this,
   void * ids, void * names, void * scores, void * ranks, void * wins, void * losses, void * extra)
    */

void __thiscall
EventCommand_RespondEventLeaderBoard_cloneLeaderboardFields
          (void *this,void *ids,void *names,void *scores,void *ranks,void *wins,void *losses,
          void *extra)

{
  rsize_t rVar1;
  uint uVar2;
  uint uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  void *pvVar13;
  void *unaff_EDI;
  undefined4 *local_10 [2];
  undefined1 local_8 [8];
  
                    /* Clones multiple leaderboard-related vectors into the response object,
                       preserving existing vector contents by moving them and appending incoming
                       integer and string-vector fields. */
  iVar8 = (int)this + 0x18;
  uVar2 = *(uint *)((int)this + 0x20);
  if (uVar2 < *(uint *)((int)this + 0x1c)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x1c);
  if (*(uint *)((int)this + 0x20) < uVar3) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_10,iVar8,uVar3,iVar8,uVar2);
  local_10[0] = *(undefined4 **)((int)ids + 8);
  if (local_10[0] < *(undefined4 **)((int)ids + 4)) {
    FUN_00d83c2d();
  }
  puVar9 = *(undefined4 **)((int)ids + 4);
  if (*(undefined4 **)((int)ids + 8) < puVar9) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (ids == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar9 == local_10[0]) break;
    if (ids == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)ids + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 0x1c);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x24) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x20) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x20);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,iVar8,uVar3,puVar9);
    }
    else {
      puVar11 = *(undefined4 **)((int)this + 0x20);
      *puVar11 = *puVar9;
      *(undefined4 **)((int)this + 0x20) = puVar11 + 1;
    }
    if (*(undefined4 **)((int)ids + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    puVar9 = puVar9 + 1;
  }
  pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
             ((int)this + 0x30);
  if (pbVar12 < *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 ((int)this + 0x2c)) {
    FUN_00d83c2d();
  }
  pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            ((int)this + 0x2c);
  if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x30) < pbVar4) {
    FUN_00d83c2d();
  }
  if (pbVar4 != pbVar12) {
    pbVar5 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              ((int)this + 0x30);
    iVar8 = (int)pbVar5 - (int)pbVar12;
    if (pbVar12 != pbVar5) {
      iVar10 = (int)pbVar4 - (int)pbVar12;
      do {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar12 + iVar10),pbVar12,0,0xffffffff);
        pbVar12 = pbVar12 + 0x1c;
      } while (pbVar12 != pbVar5);
    }
    StdStringRange_destroy(pbVar4 + (iVar8 / 0x1c) * 0x1c,*(void **)((int)this + 0x30));
    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
     ((int)this + 0x30) = pbVar4 + (iVar8 / 0x1c) * 0x1c;
  }
  pvVar6 = *(void **)((int)names + 8);
  if (pvVar6 < *(void **)((int)names + 4)) {
    FUN_00d83c2d();
  }
  pvVar13 = *(void **)((int)names + 4);
  if (*(void **)((int)names + 8) < pvVar13) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (names == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar13 == pvVar6) break;
    if (names == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(void **)((int)names + 8) <= pvVar13) {
      FUN_00d83c2d();
    }
    StdVector28_pushBack((void *)((int)this + 0x28),pvVar13,unaff_EDI);
    if (*(void **)((int)names + 8) <= pvVar13) {
      FUN_00d83c2d();
    }
    pvVar13 = (void *)((int)pvVar13 + 0x1c);
  }
  pvVar6 = *(void **)((int)this + 0x40);
  if (pvVar6 < *(void **)((int)this + 0x3c)) {
    FUN_00d83c2d();
  }
  pvVar13 = *(void **)((int)this + 0x3c);
  if (*(void **)((int)this + 0x40) < pvVar13) {
    FUN_00d83c2d();
  }
  if (pvVar13 != pvVar6) {
    iVar8 = *(int *)((int)this + 0x40) - (int)pvVar6 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar13,rVar1,pvVar6,rVar1);
    }
    *(void **)((int)this + 0x40) = (void *)(rVar1 + (int)pvVar13);
  }
  puVar9 = *(undefined4 **)((int)scores + 8);
  if (puVar9 < *(undefined4 **)((int)scores + 4)) {
    FUN_00d83c2d();
  }
  puVar11 = *(undefined4 **)((int)scores + 4);
  if (*(undefined4 **)((int)scores + 8) < puVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (scores == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar11 == puVar9) break;
    if (scores == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)scores + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 0x3c);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x44) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x40) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x40);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,(int)this + 0x38,uVar3,puVar11);
    }
    else {
      puVar7 = *(undefined4 **)((int)this + 0x40);
      *puVar7 = *puVar11;
      *(undefined4 **)((int)this + 0x40) = puVar7 + 1;
    }
    if (*(undefined4 **)((int)scores + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    puVar11 = puVar11 + 1;
  }
  pvVar6 = *(void **)((int)this + 0x50);
  if (pvVar6 < *(void **)((int)this + 0x4c)) {
    FUN_00d83c2d();
  }
  pvVar13 = *(void **)((int)this + 0x4c);
  if (*(void **)((int)this + 0x50) < pvVar13) {
    FUN_00d83c2d();
  }
  if (pvVar13 != pvVar6) {
    iVar8 = *(int *)((int)this + 0x50) - (int)pvVar6 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar13,rVar1,pvVar6,rVar1);
    }
    *(void **)((int)this + 0x50) = (void *)(rVar1 + (int)pvVar13);
  }
  puVar9 = *(undefined4 **)((int)ranks + 8);
  if (puVar9 < *(undefined4 **)((int)ranks + 4)) {
    FUN_00d83c2d();
  }
  puVar11 = *(undefined4 **)((int)ranks + 4);
  if (*(undefined4 **)((int)ranks + 8) < puVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (ranks == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar11 == puVar9) break;
    if (ranks == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)ranks + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 0x4c);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x54) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x50) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x50);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,(int)this + 0x48,uVar3,puVar11);
    }
    else {
      puVar7 = *(undefined4 **)((int)this + 0x50);
      *puVar7 = *puVar11;
      *(undefined4 **)((int)this + 0x50) = puVar7 + 1;
    }
    if (*(undefined4 **)((int)ranks + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    puVar11 = puVar11 + 1;
  }
  pvVar6 = *(void **)((int)this + 0x60);
  if (pvVar6 < *(void **)((int)this + 0x5c)) {
    FUN_00d83c2d();
  }
  pvVar13 = *(void **)((int)this + 0x5c);
  if (*(void **)((int)this + 0x60) < pvVar13) {
    FUN_00d83c2d();
  }
  if (pvVar13 != pvVar6) {
    iVar8 = *(int *)((int)this + 0x60) - (int)pvVar6 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar13,rVar1,pvVar6,rVar1);
    }
    *(void **)((int)this + 0x60) = (void *)(rVar1 + (int)pvVar13);
  }
  puVar9 = *(undefined4 **)((int)wins + 8);
  if (puVar9 < *(undefined4 **)((int)wins + 4)) {
    FUN_00d83c2d();
  }
  puVar11 = *(undefined4 **)((int)wins + 4);
  if (*(undefined4 **)((int)wins + 8) < puVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (wins == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar11 == puVar9) break;
    if (wins == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)wins + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 0x5c);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)this + 100) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x60) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x60);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,(int)this + 0x58,uVar3,puVar11);
    }
    else {
      puVar7 = *(undefined4 **)((int)this + 0x60);
      *puVar7 = *puVar11;
      *(undefined4 **)((int)this + 0x60) = puVar7 + 1;
    }
    if (*(undefined4 **)((int)wins + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    puVar11 = puVar11 + 1;
  }
  pvVar6 = *(void **)((int)this + 0x80);
  if (pvVar6 < *(void **)((int)this + 0x7c)) {
    FUN_00d83c2d();
  }
  pvVar13 = *(void **)((int)this + 0x7c);
  if (*(void **)((int)this + 0x80) < pvVar13) {
    FUN_00d83c2d();
  }
  if (pvVar13 != pvVar6) {
    iVar8 = *(int *)((int)this + 0x80) - (int)pvVar6 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar13,rVar1,pvVar6,rVar1);
    }
    *(void **)((int)this + 0x80) = (void *)((int)pvVar13 + rVar1);
  }
  puVar9 = *(undefined4 **)((int)losses + 8);
  if (puVar9 < *(undefined4 **)((int)losses + 4)) {
    FUN_00d83c2d();
  }
  puVar11 = *(undefined4 **)((int)losses + 4);
  if (*(undefined4 **)((int)losses + 8) < puVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (losses == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar11 == puVar9) break;
    if (losses == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)losses + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 0x7c);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x84) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x80) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x80);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,(int)this + 0x78,uVar3,puVar11);
    }
    else {
      puVar7 = *(undefined4 **)((int)this + 0x80);
      *puVar7 = *puVar11;
      *(undefined4 **)((int)this + 0x80) = puVar7 + 1;
    }
    if (*(undefined4 **)((int)losses + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    puVar11 = puVar11 + 1;
  }
  pvVar6 = *(void **)((int)this + 0x70);
  if (pvVar6 < *(void **)((int)this + 0x6c)) {
    FUN_00d83c2d();
  }
  pvVar13 = *(void **)((int)this + 0x6c);
  if (*(void **)((int)this + 0x70) < pvVar13) {
    FUN_00d83c2d();
  }
  if (pvVar13 != pvVar6) {
    iVar8 = *(int *)((int)this + 0x70) - (int)pvVar6 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar13,rVar1,pvVar6,rVar1);
    }
    *(void **)((int)this + 0x70) = (void *)((int)pvVar13 + rVar1);
  }
  puVar9 = *(undefined4 **)((int)extra + 8);
  if (puVar9 < *(undefined4 **)((int)extra + 4)) {
    FUN_00d83c2d();
  }
  puVar11 = *(undefined4 **)((int)extra + 4);
  if (*(undefined4 **)((int)extra + 8) < puVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (extra == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar11 == puVar9) break;
    if (extra == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)extra + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 0x6c);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x74) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x70) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x70);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,(int)this + 0x68,uVar3,puVar11);
    }
    else {
      puVar7 = *(undefined4 **)((int)this + 0x70);
      *puVar7 = *puVar11;
      *(undefined4 **)((int)this + 0x70) = puVar7 + 1;
    }
    if (*(undefined4 **)((int)extra + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    puVar11 = puVar11 + 1;
  }
  return;
}

