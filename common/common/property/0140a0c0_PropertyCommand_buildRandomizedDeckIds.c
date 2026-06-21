// addr: 0x0140a0c0
// name: PropertyCommand_buildRandomizedDeckIds
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyCommand_buildRandomizedDeckIds(void * cmd) */

void __thiscall PropertyCommand_buildRandomizedDeckIds(void *this,void *cmd)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  rsize_t rVar4;
  undefined4 *puVar5;
  char cVar6;
  bool bVar7;
  void *pvVar8;
  int iVar9;
  void *this_00;
  int *piVar10;
  int iVar11;
  int iVar12;
  void *this_01;
  int *piVar13;
  void *this_02;
  void *this_03;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_b4;
  undefined1 auStack_b0 [4];
  int *local_ac;
  int *local_a8;
  int local_a4;
  undefined1 local_a0 [4];
  void *local_9c;
  void *pvStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [4];
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  int iStack_84;
  int local_80 [2];
  undefined1 *local_78;
  undefined4 *local_74;
  int local_70 [2];
  undefined1 local_68 [4];
  int *local_64;
  int iStack_60;
  int local_5c;
  undefined4 local_58;
  void *pvStack_4c;
  void *pvStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int local_3c [2];
  int iStack_34;
  undefined4 *local_30;
  int *local_2c;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a randomized list of deck/card archetype ids, balancing selections
                       across archetype buckets and respecting existing counts before emitting ids
                       through the command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691d29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2c = this;
  FUN_01409d90(DAT_01b839d8 ^ (uint)&stack0xffffff3c);
  local_80[1] = 0;
  local_80[0] = 0;
  cVar6 = FUN_01408db0(local_68);
  if (cVar6 != '\0') {
    local_80[0] = local_5c;
    local_80[1] = local_58;
    if (local_5c != 0) {
      uVar16 = 0;
      do {
        uVar15 = uVar16 & 0x80000001;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
        }
        if (local_80[uVar15] != 0) {
          (**(code **)(*(int *)this + 100))(local_80[uVar15]);
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < 0x12);
      ExceptionList = local_c;
      return;
    }
  }
  local_1c = 1;
  local_80[0] = 4;
  local_20 = 7;
  local_ac = (int *)0x0;
  local_a8 = (int *)0x0;
  local_a4 = 0;
  local_4 = 0;
  pvVar8 = PropertyContainer_getChildList(cmd);
  STLTree_copyConstructWrapper(local_18,pvVar8);
  local_4._0_1_ = 1;
  iVar9 = PropertyContainer_countRareCardChildren(cmd);
  local_3c[0] = 0xc;
  if (0xb < iVar9 / 2) {
    local_3c[0] = iVar9 / 2;
  }
  local_70[0] = 0;
  FUN_01409180(9,local_70);
  local_4._0_1_ = 2;
  Vector16_copyConstructAndDiscard(local_a0,9);
  local_4 = CONCAT31(local_4._1_3_,3);
  local_78 = local_18;
  local_74 = (undefined4 *)*local_14;
  local_30 = local_14;
  while( true ) {
    piVar10 = local_64;
    puVar5 = local_74;
    puVar2 = local_78;
    if ((local_78 == (undefined1 *)0x0) || (local_78 != local_18)) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_30) break;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar5 == *(undefined4 **)(puVar2 + 4)) {
      FUN_00d83c2d();
    }
    pvVar8 = (void *)puVar5[4];
    if (pvVar8 == (void *)0x0) {
LAB_0140a39d:
      CollectionDataChildIterator_increment((int *)&local_78);
    }
    else {
      uVar16 = PersistentComponent_getPersistentId(pvVar8);
      local_b4 = uVar16;
      ArchetypeDB_getInstance();
      uVar15 = Archetype_getField3c(this_00);
      ArchetypeDB_getInstance();
      piVar10 = (int *)ArchetypeDB_getArchetype(uVar16,uVar15);
      if ((piVar10 == (int *)0x0) || (iVar9 = (**(code **)(*piVar10 + 0x80))(0x31d), iVar9 != 1))
      goto LAB_0140a39d;
      iVar9 = (**(code **)(*piVar10 + 0x80))(0x4c);
      iVar11 = (**(code **)(*piVar10 + 0x80))(0x22974);
      uVar16 = iVar9 + (iVar11 + -0x2d947) * 2 + iVar11 + -0x2d947;
      if (((int)uVar16 < 0) || (8 < (int)uVar16)) goto LAB_0140a39d;
      uVar15 = local_b4;
      ArchetypeDB_getInstance();
      bVar7 = PropertyId_isRemappedRange(uVar15);
      if (!bVar7) {
        iVar9 = PropertyVector16_getCount((int)pvVar8);
        if (0 < iVar9) {
          do {
            if ((local_9c == (void *)0x0) ||
               ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
              FUN_00d83c2d();
            }
            FUN_0042c155(&local_b4);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        goto LAB_0140a39d;
      }
      iVar9 = PropertyVector16_getCount((int)pvVar8);
      piVar10 = local_64;
      if (iVar9 < 1) goto LAB_0140a39d;
      do {
        FUN_0042c155(&local_b4);
        if ((piVar10 == (int *)0x0) || ((uint)(iStack_60 - (int)piVar10 >> 2) <= uVar16)) {
          FUN_00d83c2d();
        }
        piVar10[uVar16] = piVar10[uVar16] + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      CollectionDataChildIterator_increment((int *)&local_78);
    }
  }
  if ((piVar10 == (int *)0x0) || ((uint)(iStack_60 - (int)piVar10 >> 2) < 3)) {
    FUN_00d83c2d();
  }
  iVar9 = local_3c[0] / 3;
  iVar11 = iVar9 - piVar10[2];
  local_b4 = iStack_60 - (int)piVar10 >> 2;
  iStack_40 = iVar11;
  if (local_b4 < 9) {
    FUN_00d83c2d();
  }
  iStack_34 = iVar9 - piVar10[8];
  if (local_b4 < 6) {
    FUN_00d83c2d();
  }
  local_78 = (undefined1 *)(iVar9 - piVar10[5]);
  while( true ) {
    if (local_b4 < 3) {
      FUN_00d83c2d();
    }
    if (iVar11 <= piVar10[2]) break;
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 3)) {
      FUN_00d83c2d();
    }
    if ((*(int *)((int)local_9c + 0x24) == 0) ||
       (*(int *)((int)local_9c + 0x28) - *(int *)((int)local_9c + 0x24) >> 2 == 0)) break;
    if (local_b4 < 3) {
      FUN_00d83c2d();
    }
    if (local_b4 < 9) {
      FUN_00d83c2d();
    }
    if (local_b4 < 6) {
      FUN_00d83c2d();
    }
    if (local_3c[0] <= piVar10[5] + piVar10[2] + piVar10[8]) break;
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 3)) {
      FUN_00d83c2d();
    }
    if (*(int *)((int)local_9c + 0x24) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((int)local_9c + 0x28) - *(int *)((int)local_9c + 0x24) >> 2;
    }
    iVar11 = _rand();
    pvVar8 = pvStack_98;
    uVar16 = iVar11 % iVar9;
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 3)) {
      FUN_00d83c2d();
    }
    if ((*(int *)((int)local_9c + 0x24) == 0) ||
       ((uint)(*(int *)((int)local_9c + 0x28) - *(int *)((int)local_9c + 0x24) >> 2) <= uVar16)) {
      FUN_00d83c2d();
    }
    local_70[0] = *(int *)(*(int *)((int)local_9c + 0x24) + uVar16 * 4);
    if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 3)) {
      FUN_00d83c2d();
    }
    uVar15 = *(uint *)((int)local_9c + 0x24);
    if (*(uint *)((int)local_9c + 0x28) < uVar15) {
      FUN_00d83c2d();
    }
    pvVar1 = (void *)(uVar15 + uVar16 * 4);
    if ((*(void **)((int)local_9c + 0x28) < pvVar1) || (pvVar1 < *(void **)((int)local_9c + 0x24)))
    {
      FUN_00d83c2d();
    }
    if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 3)) {
      FUN_00d83c2d();
    }
    iVar9 = *(int *)((int)local_9c + 0x28) - ((int)pvVar1 + 4) >> 2;
    if (0 < iVar9) {
      rVar4 = iVar9 * 4;
      _memmove_s(pvVar1,rVar4,(void *)((int)pvVar1 + 4),rVar4);
    }
    piVar10 = local_a8;
    *(int *)((int)local_9c + 0x28) = *(int *)((int)local_9c + 0x28) + -4;
    if ((local_ac == (int *)0x0) ||
       ((uint)(local_a4 - (int)local_ac >> 2) <= (uint)((int)local_a8 - (int)local_ac >> 2))) {
      if (local_a8 < local_ac) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_28,auStack_b0,piVar10,local_70);
    }
    else {
      *local_a8 = local_70[0];
      local_a8 = local_a8 + 1;
    }
    if (local_b4 < 3) {
      FUN_00d83c2d();
    }
    local_64[2] = local_64[2] + 1;
    iVar11 = iStack_40;
    piVar10 = local_64;
  }
  do {
    if (local_b4 < 9) {
      FUN_00d83c2d();
    }
    if (iStack_34 <= piVar10[8]) break;
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 9)) {
      FUN_00d83c2d();
    }
    if ((*(int *)((int)local_9c + 0x84) == 0) ||
       (*(int *)((int)local_9c + 0x88) - *(int *)((int)local_9c + 0x84) >> 2 == 0)) break;
    if (local_b4 < 3) {
      FUN_00d83c2d();
    }
    if (local_b4 < 9) {
      FUN_00d83c2d();
    }
    if (local_b4 < 6) {
      FUN_00d83c2d();
    }
    if (local_3c[0] <= piVar10[2] + piVar10[8] + piVar10[5]) break;
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 9)) {
      FUN_00d83c2d();
    }
    if (*(int *)((int)local_9c + 0x84) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((int)local_9c + 0x88) - *(int *)((int)local_9c + 0x84) >> 2;
    }
    iVar11 = _rand();
    pvVar8 = pvStack_98;
    uVar16 = iVar11 % iVar9;
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 9)) {
      FUN_00d83c2d();
    }
    if ((*(int *)((int)local_9c + 0x84) == 0) ||
       ((uint)(*(int *)((int)local_9c + 0x88) - *(int *)((int)local_9c + 0x84) >> 2) <= uVar16)) {
      FUN_00d83c2d();
    }
    local_70[0] = *(int *)(*(int *)((int)local_9c + 0x84) + uVar16 * 4);
    if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 9)) {
      FUN_00d83c2d();
    }
    uVar15 = *(uint *)((int)local_9c + 0x84);
    if (*(uint *)((int)local_9c + 0x88) < uVar15) {
      FUN_00d83c2d();
    }
    pvVar1 = (void *)(uVar15 + uVar16 * 4);
    if ((*(void **)((int)local_9c + 0x88) < pvVar1) || (pvVar1 < *(void **)((int)local_9c + 0x84)))
    {
      FUN_00d83c2d();
    }
    if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 9)) {
      FUN_00d83c2d();
    }
    iVar9 = *(int *)((int)local_9c + 0x88) - ((int)pvVar1 + 4) >> 2;
    if (0 < iVar9) {
      rVar4 = iVar9 * 4;
      _memmove_s(pvVar1,rVar4,(void *)((int)pvVar1 + 4),rVar4);
    }
    piVar10 = local_a8;
    *(int *)((int)local_9c + 0x88) = *(int *)((int)local_9c + 0x88) + -4;
    if ((local_ac == (int *)0x0) ||
       ((uint)(local_a4 - (int)local_ac >> 2) <= (uint)((int)local_a8 - (int)local_ac >> 2))) {
      if (local_a8 < local_ac) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_28,auStack_b0,piVar10,local_70);
    }
    else {
      *local_a8 = local_70[0];
      local_a8 = local_a8 + 1;
    }
    if (local_b4 < 9) {
      FUN_00d83c2d();
    }
    local_64[8] = local_64[8] + 1;
    piVar10 = local_64;
  } while( true );
LAB_0140a7e6:
  if (local_b4 < 6) {
    FUN_00d83c2d();
  }
  if ((int)local_78 <= piVar10[5]) goto LAB_0140a9b2;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 6)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 0x54) == 0) ||
     (*(int *)((int)local_9c + 0x58) - *(int *)((int)local_9c + 0x54) >> 2 == 0)) goto LAB_0140a9b2;
  if (local_b4 < 3) {
    FUN_00d83c2d();
  }
  if (local_b4 < 9) {
    FUN_00d83c2d();
  }
  if (local_b4 < 6) {
    FUN_00d83c2d();
  }
  if (local_3c[0] <= piVar10[2] + piVar10[5] + piVar10[8]) goto LAB_0140a9b2;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 6)) {
    FUN_00d83c2d();
  }
  if (*(int *)((int)local_9c + 0x54) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)((int)local_9c + 0x58) - *(int *)((int)local_9c + 0x54) >> 2;
  }
  iVar11 = _rand();
  pvVar8 = pvStack_98;
  uVar16 = iVar11 % iVar9;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 6)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 0x54) == 0) ||
     ((uint)(*(int *)((int)local_9c + 0x58) - *(int *)((int)local_9c + 0x54) >> 2) <= uVar16)) {
    FUN_00d83c2d();
  }
  local_70[0] = *(int *)(*(int *)((int)local_9c + 0x54) + uVar16 * 4);
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 6)) {
    FUN_00d83c2d();
  }
  uVar15 = *(uint *)((int)local_9c + 0x54);
  if (*(uint *)((int)local_9c + 0x58) < uVar15) {
    FUN_00d83c2d();
  }
  pvVar1 = (void *)(uVar15 + uVar16 * 4);
  if ((*(void **)((int)local_9c + 0x58) < pvVar1) || (pvVar1 < *(void **)((int)local_9c + 0x54))) {
    FUN_00d83c2d();
  }
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 6)) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)((int)local_9c + 0x58) - ((int)pvVar1 + 4) >> 2;
  if (0 < iVar9) {
    rVar4 = iVar9 * 4;
    _memmove_s(pvVar1,rVar4,(void *)((int)pvVar1 + 4),rVar4);
  }
  piVar10 = local_a8;
  *(int *)((int)local_9c + 0x58) = *(int *)((int)local_9c + 0x58) + -4;
  if ((local_ac == (int *)0x0) ||
     ((uint)(local_a4 - (int)local_ac >> 2) <= (uint)((int)local_a8 - (int)local_ac >> 2))) {
    if (local_a8 < local_ac) {
      FUN_00d83c2d();
    }
    Vector_insertSingleAndReturnIterator_realloc(auStack_28,auStack_b0,piVar10,local_70);
  }
  else {
    *local_a8 = local_70[0];
    local_a8 = local_a8 + 1;
  }
  if (local_b4 < 6) {
    FUN_00d83c2d();
  }
  local_64[5] = local_64[5] + 1;
  piVar10 = local_64;
  goto LAB_0140a7e6;
LAB_0140a9b2:
  uVar16 = iStack_60 - (int)piVar10 >> 2;
  local_b4 = uVar16;
  if (uVar16 < 3) {
    FUN_00d83c2d();
  }
  if (uVar16 < 9) {
    FUN_00d83c2d();
  }
  if (uVar16 < 6) {
    FUN_00d83c2d();
  }
  pvVar8 = pvStack_98;
  if (local_3c[0] <= piVar10[8] + piVar10[5] + piVar10[2]) goto LAB_0140ac8b;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 3)) {
    FUN_00d83c2d();
  }
  if (*(int *)((int)local_9c + 0x24) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)((int)local_9c + 0x28) - *(int *)((int)local_9c + 0x24) >> 2;
  }
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 9)) {
    FUN_00d83c2d();
  }
  if (*(int *)((int)local_9c + 0x84) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)((int)local_9c + 0x88) - *(int *)((int)local_9c + 0x84) >> 2;
  }
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 6)) {
    FUN_00d83c2d();
  }
  if (*(int *)((int)local_9c + 0x54) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)((int)local_9c + 0x58) - *(int *)((int)local_9c + 0x54) >> 2;
  }
  if (iVar12 + iVar11 + iVar9 == 0) goto LAB_0140ac8b;
  uVar16 = 2;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 3)) {
    FUN_00d83c2d();
  }
  uVar15 = local_b4;
  if ((*(int *)((int)local_9c + 0x24) == 0) ||
     (*(int *)((int)local_9c + 0x28) - *(int *)((int)local_9c + 0x24) >> 2 == 0)) {
LAB_0140aad8:
    uVar16 = 8;
  }
  else {
    if (local_b4 < 3) {
      FUN_00d83c2d();
    }
    if (uVar15 < 9) {
      FUN_00d83c2d();
    }
    if (local_64[8] < local_64[2]) goto LAB_0140aad8;
  }
  piVar10 = local_64;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)(uVar16 * 0x10 + 4 + (int)local_9c);
  if ((iVar9 == 0) || (*(int *)((int)local_9c + uVar16 * 0x10 + 8) - iVar9 >> 2 == 0)) {
LAB_0140ab28:
    uVar16 = 5;
  }
  else {
    if (uVar15 <= uVar16) {
      FUN_00d83c2d();
    }
    if (uVar15 < 6) {
      FUN_00d83c2d();
    }
    if (piVar10[5] < piVar10[uVar16]) goto LAB_0140ab28;
  }
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
    FUN_00d83c2d();
  }
  iVar11 = uVar16 * 0x10;
  iVar9 = *(int *)(iVar11 + 4 + (int)local_9c);
  if ((iVar9 == 0) || (iVar9 = *(int *)((int)local_9c + iVar11 + 8) - iVar9 >> 2, iVar9 == 0))
  goto LAB_0140ac8b;
  iVar12 = _rand();
  uVar15 = iVar12 % iVar9;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)((int)local_9c + iVar11 + 4);
  if ((iVar9 == 0) || ((uint)(*(int *)((int)local_9c + iVar11 + 8) - iVar9 >> 2) <= uVar15)) {
    FUN_00d83c2d();
  }
  local_70[0] = *(int *)(*(int *)((int)local_9c + iVar11 + 4) + uVar15 * 4);
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
    FUN_00d83c2d();
  }
  local_78 = *(undefined1 **)((int)local_9c + iVar11 + 4);
  if (*(undefined1 **)((int)local_9c + iVar11 + 8) < local_78) {
    FUN_00d83c2d();
  }
  puVar2 = local_78 + uVar15 * 4;
  if ((*(undefined1 **)((int)local_9c + iVar11 + 8) < puVar2) ||
     (puVar2 < *(undefined1 **)((int)local_9c + iVar11 + 4))) {
    FUN_00d83c2d();
  }
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)((int)local_9c + iVar11 + 8) - (int)(puVar2 + 4) >> 2;
  if (0 < iVar9) {
    rVar4 = iVar9 * 4;
    _memmove_s(puVar2,rVar4,puVar2 + 4,rVar4);
  }
  piVar13 = local_a8;
  piVar10 = (int *)((int)local_9c + iVar11 + 8);
  *piVar10 = *piVar10 + -4;
  if ((local_ac == (int *)0x0) ||
     ((uint)(local_a4 - (int)local_ac >> 2) <= (uint)((int)local_a8 - (int)local_ac >> 2))) {
    if (local_a8 < local_ac) {
      FUN_00d83c2d();
    }
    Vector_insertSingleAndReturnIterator_realloc(auStack_28,auStack_b0,piVar13,local_70);
  }
  else {
    *local_a8 = local_70[0];
    local_a8 = local_a8 + 1;
  }
  if (local_b4 <= uVar16) {
    FUN_00d83c2d();
  }
  local_64[uVar16] = local_64[uVar16] + 1;
  piVar10 = local_64;
  goto LAB_0140a9b2;
LAB_0140ac8b:
  piVar10 = local_64;
  uVar16 = iStack_60 - (int)local_64 >> 2;
  if (uVar16 < 3) {
    FUN_00d83c2d();
  }
  if (uVar16 < 9) {
    FUN_00d83c2d();
  }
  if (uVar16 < 6) {
    FUN_00d83c2d();
  }
  iStack_40 = (((0x12 - piVar10[5]) - piVar10[8]) - piVar10[2]) / 3;
  do {
    iVar9 = iStack_40;
    uVar16 = iStack_60 - (int)piVar10 >> 2;
    local_b4 = uVar16;
    if (uVar16 < 2) {
      FUN_00d83c2d();
    }
    if (uVar16 < 8) {
      FUN_00d83c2d();
    }
    if (uVar16 < 5) {
      FUN_00d83c2d();
    }
    if (iVar9 <= piVar10[4] + piVar10[7] + piVar10[1]) break;
    if (uVar16 < 3) {
      FUN_00d83c2d();
    }
    if (uVar16 < 2) {
      FUN_00d83c2d();
    }
    if (uVar16 == 0) {
      FUN_00d83c2d();
    }
    piVar10 = local_64;
    if (*local_64 + local_64[2] + local_64[1] < 6) {
      if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 2)) {
        FUN_00d83c2d();
      }
      if ((*(int *)((int)local_9c + 0x14) == 0) ||
         (*(int *)((int)local_9c + 0x18) - *(int *)((int)local_9c + 0x14) >> 2 == 0))
      goto LAB_0140ad76;
    }
    else {
LAB_0140ad76:
      if (uVar16 < 9) {
        FUN_00d83c2d();
      }
      if (uVar16 < 8) {
        FUN_00d83c2d();
      }
      if (uVar16 < 7) {
        FUN_00d83c2d();
      }
      if (piVar10[6] + piVar10[8] + piVar10[7] < 6) {
        if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 8)) {
          FUN_00d83c2d();
        }
        if ((*(int *)((int)local_9c + 0x74) != 0) &&
           (piVar10 = local_64,
           *(int *)((int)local_9c + 0x78) - *(int *)((int)local_9c + 0x74) >> 2 != 0))
        goto LAB_0140ae2e;
      }
      if (uVar16 < 6) {
        FUN_00d83c2d();
      }
      if (uVar16 < 5) {
        FUN_00d83c2d();
      }
      if (uVar16 < 4) {
        FUN_00d83c2d();
      }
      if (5 < piVar10[3] + piVar10[5] + piVar10[4]) break;
      if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 5)) {
        FUN_00d83c2d();
      }
      if ((*(int *)((int)local_9c + 0x44) == 0) ||
         (*(int *)((int)local_9c + 0x48) - *(int *)((int)local_9c + 0x44) >> 2 == 0)) break;
    }
LAB_0140ae2e:
    puStack_8c = (undefined4 *)0x0;
    puStack_88 = (undefined4 *)0x0;
    iStack_84 = 0;
    local_4 = CONCAT31(local_4._1_3_,5);
    if (uVar16 < 3) {
      FUN_00d83c2d();
    }
    if (uVar16 < 2) {
      FUN_00d83c2d();
    }
    if (uVar16 == 0) {
      FUN_00d83c2d();
    }
    piVar10 = local_64;
    if (*local_64 + local_64[2] + local_64[1] < 6) {
      if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 2)) {
        FUN_00d83c2d();
      }
      puVar5 = puStack_88;
      if ((*(int *)((int)local_9c + 0x14) != 0) &&
         (*(int *)((int)local_9c + 0x18) - *(int *)((int)local_9c + 0x14) >> 2 != 0)) {
        if ((puStack_8c == (undefined4 *)0x0) ||
           ((uint)(iStack_84 - (int)puStack_8c >> 2) <=
            (uint)((int)puStack_88 - (int)puStack_8c >> 2))) {
          if (puStack_88 < puStack_8c) {
            FUN_00d83c2d();
          }
          Vector_insertSingleAndReturnIterator_realloc(auStack_28,auStack_90,puVar5,&local_1c);
          piVar10 = local_64;
        }
        else {
          *puStack_88 = 1;
          puStack_88 = puStack_88 + 1;
        }
      }
    }
    if (uVar16 < 9) {
      FUN_00d83c2d();
    }
    if (uVar16 < 8) {
      FUN_00d83c2d();
    }
    if (uVar16 < 7) {
      FUN_00d83c2d();
    }
    if (piVar10[6] + piVar10[7] + piVar10[8] < 6) {
      if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 8)) {
        FUN_00d83c2d();
      }
      puVar5 = puStack_88;
      if ((*(int *)((int)local_9c + 0x74) != 0) &&
         (*(int *)((int)local_9c + 0x78) - *(int *)((int)local_9c + 0x74) >> 2 != 0)) {
        if ((puStack_8c == (undefined4 *)0x0) ||
           ((uint)(iStack_84 - (int)puStack_8c >> 2) <=
            (uint)((int)puStack_88 - (int)puStack_8c >> 2))) {
          if (puStack_88 < puStack_8c) {
            FUN_00d83c2d();
          }
          Vector_insertSingleAndReturnIterator_realloc(local_70,auStack_90,puVar5,&local_20);
          piVar10 = local_64;
        }
        else {
          *puStack_88 = 7;
          puStack_88 = puStack_88 + 1;
        }
      }
    }
    if (uVar16 < 6) {
      FUN_00d83c2d();
    }
    if (uVar16 < 5) {
      FUN_00d83c2d();
    }
    if (uVar16 < 4) {
      FUN_00d83c2d();
    }
    if (piVar10[3] + piVar10[4] + piVar10[5] < 6) {
      if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 5)) {
        FUN_00d83c2d();
      }
      puVar5 = puStack_88;
      if ((*(int *)((int)local_9c + 0x44) != 0) &&
         (*(int *)((int)local_9c + 0x48) - *(int *)((int)local_9c + 0x44) >> 2 != 0)) {
        if ((puStack_8c == (undefined4 *)0x0) ||
           ((uint)(iStack_84 - (int)puStack_8c >> 2) <=
            (uint)((int)puStack_88 - (int)puStack_8c >> 2))) {
          if (puStack_88 < puStack_8c) {
            FUN_00d83c2d();
          }
          Vector_insertSingleAndReturnIterator_realloc(local_3c,auStack_90,puVar5,local_80);
        }
        else {
          *puStack_88 = 4;
          puStack_88 = puStack_88 + 1;
        }
      }
    }
    if ((puStack_8c == (undefined4 *)0x0) ||
       (iVar9 = (int)puStack_88 - (int)puStack_8c >> 2, iVar9 == 0)) {
      local_4 = CONCAT31(local_4._1_3_,3);
      if (puStack_8c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_8c);
      }
      puStack_8c = (undefined4 *)0x0;
      puStack_88 = (undefined4 *)0x0;
      iStack_84 = 0;
      break;
    }
    iVar11 = _rand();
    uVar16 = iVar11 % iVar9;
    if ((puStack_8c == (undefined4 *)0x0) ||
       ((uint)((int)puStack_88 - (int)puStack_8c >> 2) <= uVar16)) {
      FUN_00d83c2d();
    }
    uVar16 = puStack_8c[uVar16];
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
      FUN_00d83c2d();
    }
    iVar9 = *(int *)((int)local_9c + uVar16 * 0x10 + 4);
    if ((iVar9 == 0) ||
       (iVar9 = *(int *)((int)local_9c + uVar16 * 0x10 + 8) - iVar9 >> 2, iVar9 == 0)) {
      local_4 = CONCAT31(local_4._1_3_,3);
      if (puStack_8c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_8c);
      }
      puStack_8c = (undefined4 *)0x0;
      puStack_88 = (undefined4 *)0x0;
      iStack_84 = 0;
      break;
    }
    iVar11 = _rand();
    uVar15 = iVar11 % iVar9;
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
      FUN_00d83c2d();
    }
    iVar9 = *(int *)((int)local_9c + uVar16 * 0x10 + 4);
    if ((iVar9 == 0) || ((uint)(*(int *)((int)local_9c + uVar16 * 0x10 + 8) - iVar9 >> 2) <= uVar15)
       ) {
      FUN_00d83c2d();
    }
    iStack_34 = *(int *)(*(int *)((int)local_9c + uVar16 * 0x10 + 4) + uVar15 * 4);
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
      FUN_00d83c2d();
    }
    local_78 = *(undefined1 **)((int)local_9c + uVar16 * 0x10 + 4);
    if (*(undefined1 **)((int)local_9c + uVar16 * 0x10 + 8) < local_78) {
      FUN_00d83c2d();
    }
    puVar2 = local_78 + uVar15 * 4;
    if ((*(undefined1 **)((int)local_9c + uVar16 * 0x10 + 8) < puVar2) ||
       (puVar2 < *(undefined1 **)((int)local_9c + uVar16 * 0x10 + 4))) {
      FUN_00d83c2d();
    }
    if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) <= uVar16)) {
      FUN_00d83c2d();
    }
    iVar9 = *(int *)((int)local_9c + uVar16 * 0x10 + 8) - (int)(puVar2 + 4) >> 2;
    if (0 < iVar9) {
      rVar4 = iVar9 * 4;
      _memmove_s(puVar2,rVar4,puVar2 + 4,rVar4);
    }
    piVar10 = (int *)((int)local_9c + uVar16 * 0x10 + 8);
    *piVar10 = *piVar10 + -4;
    FUN_0042c155(&iStack_34);
    if (local_b4 <= uVar16) {
      FUN_00d83c2d();
    }
    local_64[uVar16] = local_64[uVar16] + 1;
    local_4 = CONCAT31(local_4._1_3_,3);
    if (puStack_8c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_8c);
    }
    puStack_8c = (undefined4 *)0x0;
    puStack_88 = (undefined4 *)0x0;
    iStack_84 = 0;
    piVar10 = local_64;
  } while( true );
LAB_0140b260:
  uVar16 = iStack_60 - (int)local_64 >> 2;
  local_b4 = uVar16;
  if (uVar16 < 3) {
    FUN_00d83c2d();
  }
  if (uVar16 < 2) {
    FUN_00d83c2d();
  }
  if (uVar16 == 0) {
    FUN_00d83c2d();
  }
  if (5 < local_64[1] + *local_64 + local_64[2]) goto LAB_0140b3b0;
  if ((local_9c == (void *)0x0) || ((int)pvStack_98 - (int)local_9c >> 4 == 0)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 4) == 0) ||
     (*(int *)((int)local_9c + 8) - *(int *)((int)local_9c + 4) >> 2 == 0)) goto LAB_0140b3b0;
  iVar9 = (int)pvStack_98 - (int)local_9c >> 4;
  if (iVar9 == 0) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 4) == 0) ||
     (iVar11 = *(int *)((int)local_9c + 8) - *(int *)((int)local_9c + 4) >> 2, iVar11 == 0))
  goto LAB_0140b3b0;
  iVar12 = _rand();
  uVar16 = iVar12 % iVar11;
  if (iVar9 == 0) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 4) == 0) ||
     ((uint)(*(int *)((int)local_9c + 8) - *(int *)((int)local_9c + 4) >> 2) <= uVar16)) {
    FUN_00d83c2d();
  }
  local_80[0] = *(int *)(*(int *)((int)local_9c + 4) + uVar16 * 4);
  if (iVar9 == 0) {
    FUN_00d83c2d();
  }
  uVar15 = *(uint *)((int)local_9c + 4);
  if (*(uint *)((int)local_9c + 8) < uVar15) {
    FUN_00d83c2d();
  }
  pvVar8 = (void *)(uVar15 + uVar16 * 4);
  if ((*(void **)((int)local_9c + 8) < pvVar8) || (pvVar8 < *(void **)((int)local_9c + 4))) {
    FUN_00d83c2d();
  }
  if (iVar9 == 0) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)((int)local_9c + 8) - ((int)pvVar8 + 4) >> 2;
  if (0 < iVar9) {
    rVar4 = iVar9 * 4;
    _memmove_s(pvVar8,rVar4,(void *)((int)pvVar8 + 4),rVar4);
  }
  *(int *)((int)local_9c + 8) = *(int *)((int)local_9c + 8) + -4;
  FUN_0042c155(local_80);
  if (local_b4 == 0) {
    FUN_00d83c2d();
  }
  *local_64 = *local_64 + 1;
  goto LAB_0140b260;
LAB_0140b3b0:
  uVar16 = iStack_60 - (int)local_64 >> 2;
  local_b4 = uVar16;
  if (uVar16 < 9) {
    FUN_00d83c2d();
  }
  if (uVar16 < 8) {
    FUN_00d83c2d();
  }
  if (uVar16 < 7) {
    FUN_00d83c2d();
  }
  if (5 < local_64[8] + local_64[6] + local_64[7]) goto LAB_0140b530;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 7)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 100) == 0) ||
     (*(int *)((int)local_9c + 0x68) - *(int *)((int)local_9c + 100) >> 2 == 0)) goto LAB_0140b530;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 7)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 100) == 0) ||
     (iVar9 = *(int *)((int)local_9c + 0x68) - *(int *)((int)local_9c + 100) >> 2, iVar9 == 0))
  goto LAB_0140b530;
  iVar11 = _rand();
  pvVar8 = pvStack_98;
  uVar16 = iVar11 % iVar9;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 7)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 100) == 0) ||
     ((uint)(*(int *)((int)local_9c + 0x68) - *(int *)((int)local_9c + 100) >> 2) <= uVar16)) {
    FUN_00d83c2d();
  }
  local_80[0] = *(int *)(*(int *)((int)local_9c + 100) + uVar16 * 4);
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 7)) {
    FUN_00d83c2d();
  }
  uVar15 = *(uint *)((int)local_9c + 100);
  if (*(uint *)((int)local_9c + 0x68) < uVar15) {
    FUN_00d83c2d();
  }
  pvVar1 = (void *)(uVar15 + uVar16 * 4);
  if ((*(void **)((int)local_9c + 0x68) < pvVar1) || (pvVar1 < *(void **)((int)local_9c + 100))) {
    FUN_00d83c2d();
  }
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 7)) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)((int)local_9c + 0x68) - ((int)pvVar1 + 4) >> 2;
  if (0 < iVar9) {
    rVar4 = iVar9 * 4;
    _memmove_s(pvVar1,rVar4,(void *)((int)pvVar1 + 4),rVar4);
  }
  *(int *)((int)local_9c + 0x68) = *(int *)((int)local_9c + 0x68) + -4;
  FUN_0042c155(local_80);
  if (local_b4 < 7) {
    FUN_00d83c2d();
  }
  local_64[6] = local_64[6] + 1;
  goto LAB_0140b3b0;
LAB_0140b530:
  uVar16 = iStack_60 - (int)local_64 >> 2;
  local_b4 = uVar16;
  if (uVar16 < 6) {
    FUN_00d83c2d();
  }
  if (uVar16 < 5) {
    FUN_00d83c2d();
  }
  if (uVar16 < 4) {
    FUN_00d83c2d();
  }
  if (5 < local_64[5] + local_64[3] + local_64[4]) goto LAB_0140b6ab;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 4)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 0x34) == 0) ||
     (*(int *)((int)local_9c + 0x38) - *(int *)((int)local_9c + 0x34) >> 2 == 0)) goto LAB_0140b6ab;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 4)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 0x34) == 0) ||
     (iVar9 = *(int *)((int)local_9c + 0x38) - *(int *)((int)local_9c + 0x34) >> 2, iVar9 == 0))
  goto LAB_0140b6ab;
  iVar11 = _rand();
  pvVar8 = pvStack_98;
  uVar16 = iVar11 % iVar9;
  if ((local_9c == (void *)0x0) || ((uint)((int)pvStack_98 - (int)local_9c >> 4) < 4)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)local_9c + 0x34) == 0) ||
     ((uint)(*(int *)((int)local_9c + 0x38) - *(int *)((int)local_9c + 0x34) >> 2) <= uVar16)) {
    FUN_00d83c2d();
  }
  local_80[0] = *(int *)(*(int *)((int)local_9c + 0x34) + uVar16 * 4);
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 4)) {
    FUN_00d83c2d();
  }
  uVar15 = *(uint *)((int)local_9c + 0x34);
  if (*(uint *)((int)local_9c + 0x38) < uVar15) {
    FUN_00d83c2d();
  }
  pvVar1 = (void *)(uVar15 + uVar16 * 4);
  if ((*(void **)((int)local_9c + 0x38) < pvVar1) || (pvVar1 < *(void **)((int)local_9c + 0x34))) {
    FUN_00d83c2d();
  }
  if ((local_9c == (void *)0x0) || ((uint)((int)pvVar8 - (int)local_9c >> 4) < 4)) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)((int)local_9c + 0x38) - ((int)pvVar1 + 4) >> 2;
  if (0 < iVar9) {
    rVar4 = iVar9 * 4;
    _memmove_s(pvVar1,rVar4,(void *)((int)pvVar1 + 4),rVar4);
  }
  *(int *)((int)local_9c + 0x38) = *(int *)((int)local_9c + 0x38) + -4;
  FUN_0042c155(local_80);
  if (local_b4 < 4) {
    FUN_00d83c2d();
  }
  local_64[3] = local_64[3] + 1;
  goto LAB_0140b530;
LAB_0140b6ab:
  piVar10 = local_ac;
  pvStack_4c = (void *)0x0;
  pvStack_48 = (void *)0x0;
  uStack_44 = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (local_a8 < local_ac) {
    FUN_00d83c2d();
  }
LAB_0140b6da:
  piVar13 = local_a8;
  if (local_a8 < local_ac) {
    FUN_00d83c2d();
  }
  if (&stack0x00000000 == (undefined1 *)0xb0) {
    FUN_00d83c2d();
  }
  if (piVar10 != piVar13) {
    if (&stack0x00000000 == (undefined1 *)0xb0) {
      FUN_00d83c2d();
    }
    if (local_a8 <= piVar10) {
      FUN_00d83c2d();
    }
    iVar9 = *piVar10;
    local_80[0] = iVar9;
    ArchetypeDB_getInstance();
    uVar16 = Archetype_getField3c(this_01);
    iVar11 = iVar9;
    ArchetypeDB_getInstance();
    piVar13 = (int *)ArchetypeDB_getArchetype(iVar11,uVar16);
    if ((piVar13 != (int *)0x0) && (iVar11 = (**(code **)(*piVar13 + 0x80))(0x31d), iVar11 == 1)) {
      ArchetypeDB_getInstance();
      uVar16 = PropertyId_getRemappedRangeTypeId(iVar9);
      if (uVar16 != 0xffffffff) {
        ArchetypeDB_getInstance();
        uVar15 = Archetype_getField3c(this_02);
        ArchetypeDB_getInstance();
        piVar13 = (int *)ArchetypeDB_getArchetype(uVar16,uVar15);
        if ((piVar13 != (int *)0x0) &&
           (iVar9 = (**(code **)(*piVar13 + 0x80))(0x229ea), iVar9 == 0x222e3)) {
          FUN_0042c155(local_80);
          iVar9 = (int)local_a8 - (int)(piVar10 + 1) >> 2;
          if (0 < iVar9) {
            rVar4 = iVar9 * 4;
            _memmove_s(piVar10,rVar4,piVar10 + 1,rVar4);
          }
          local_a8 = local_a8 + -1;
          goto LAB_0140b6da;
        }
      }
      if (local_a8 <= piVar10) {
        FUN_00d83c2d();
      }
      piVar10 = piVar10 + 1;
    }
    goto LAB_0140b6da;
  }
  if (pvStack_4c == (void *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)pvStack_48 - (int)pvStack_4c >> 2;
    if (3 < iVar9) goto LAB_0140b920;
  }
  do {
    if (((local_ac == (int *)0x0) || (iVar11 = (int)local_a8 - (int)local_ac >> 2, iVar11 == 0)) ||
       (iVar11 == 0)) break;
    iVar12 = _rand();
    uVar16 = iVar12 % iVar11;
    if ((local_ac == (int *)0x0) || ((uint)((int)local_a8 - (int)local_ac >> 2) <= uVar16)) {
      FUN_00d83c2d();
    }
    iVar11 = local_ac[uVar16];
    local_80[0] = iVar11;
    ArchetypeDB_getInstance();
    uVar15 = PropertyId_getRemappedRangeTypeId(iVar11);
    if (uVar15 == 0xffffffff) {
LAB_0140b8a7:
      piVar10 = local_ac;
      if (local_a8 < local_ac) {
        FUN_00d83c2d();
      }
      piVar10 = piVar10 + uVar16;
      if ((local_a8 < piVar10) || (piVar10 < local_ac)) {
        FUN_00d83c2d();
      }
      iVar11 = (int)local_a8 - (int)(piVar10 + 1) >> 2;
      if (0 < iVar11) {
        rVar4 = iVar11 * 4;
        _memmove_s(piVar10,rVar4,piVar10 + 1,rVar4);
      }
      local_a8 = local_a8 + -1;
      FUN_0042c155(local_80);
    }
    else {
      ArchetypeDB_getInstance();
      uVar14 = Archetype_getField3c(this_03);
      ArchetypeDB_getInstance();
      piVar10 = (int *)ArchetypeDB_getArchetype(uVar15,uVar14);
      if ((piVar10 == (int *)0x0) ||
         (iVar11 = (**(code **)(*piVar10 + 0x80))(0x229ea), iVar11 != 0x222e2)) goto LAB_0140b8a7;
      iVar9 = iVar9 + -1;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
LAB_0140b920:
  while (((pvStack_4c != (void *)0x0 && (iVar9 = (int)pvStack_48 - (int)pvStack_4c >> 2, iVar9 != 0)
          ) && (iVar9 != 0))) {
    iVar11 = _rand();
    uVar16 = iVar11 % iVar9;
    if ((pvStack_4c == (void *)0x0) || ((uint)((int)pvStack_48 - (int)pvStack_4c >> 2) <= uVar16)) {
      FUN_00d83c2d();
    }
    pvVar8 = pvStack_4c;
    uVar3 = *(undefined4 *)((int)pvStack_4c + uVar16 * 4);
    if (pvStack_48 < pvStack_4c) {
      FUN_00d83c2d();
    }
    pvVar8 = (void *)((int)pvVar8 + uVar16 * 4);
    if ((pvStack_48 < pvVar8) || (pvVar8 < pvStack_4c)) {
      FUN_00d83c2d();
    }
    iVar9 = (int)pvStack_48 - ((int)pvVar8 + 4) >> 2;
    if (0 < iVar9) {
      rVar4 = iVar9 * 4;
      _memmove_s(pvVar8,rVar4,(void *)((int)pvVar8 + 4),rVar4);
    }
    pvStack_48 = (void *)((int)pvStack_48 + -4);
    (**(code **)(*local_2c + 100))(uVar3);
  }
  while (((local_ac != (int *)0x0 && (iVar9 = (int)local_a8 - (int)local_ac >> 2, iVar9 != 0)) &&
         (iVar9 != 0))) {
    iVar11 = _rand();
    uVar16 = iVar11 % iVar9;
    if ((local_ac == (int *)0x0) || ((uint)((int)local_a8 - (int)local_ac >> 2) <= uVar16)) {
      FUN_00d83c2d();
    }
    piVar10 = local_ac;
    iVar9 = local_ac[uVar16];
    if (local_a8 < local_ac) {
      FUN_00d83c2d();
    }
    piVar10 = piVar10 + uVar16;
    if ((local_a8 < piVar10) || (piVar10 < local_ac)) {
      FUN_00d83c2d();
    }
    iVar11 = (int)local_a8 - (int)(piVar10 + 1) >> 2;
    if (0 < iVar11) {
      rVar4 = iVar11 * 4;
      _memmove_s(piVar10,rVar4,piVar10 + 1,rVar4);
    }
    local_a8 = local_a8 + -1;
    (**(code **)(*local_2c + 100))(iVar9);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvStack_4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4c);
  }
  pvStack_4c = (void *)0x0;
  pvStack_48 = (void *)0x0;
  uStack_44 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_9c != (void *)0x0) {
    StdVector16_destroyRange(local_9c,pvStack_98);
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  local_9c = (void *)0x0;
  pvStack_98 = (void *)0x0;
  uStack_94 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
                    /* WARNING: Subroutine does not return */
  _free(local_64);
}

