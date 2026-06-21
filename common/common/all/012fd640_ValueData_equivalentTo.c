// addr: 0x012fd640
// name: ValueData_equivalentTo
// subsystem: common/common/all
// source (binary assert): common/common/all/ValueData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_equivalentTo(void * this, void * other) */

bool __thiscall ValueData_equivalentTo(void *this,void *other)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *extraout_EAX;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *leftString;
  uint *puVar10;
  void *pvVar11;
  void *pvVar12;
  char *rightString;
  uint uVar13;
  undefined1 *puVar14;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int *local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
                    /* Compares two ValueData objects for semantic equality, handling primitives,
                       case-insensitive strings, lists/maps, and integer-vs-integer-list containment
                       special cases. */
  iVar8 = *(int *)((int)other + 4);
  iVar9 = *(int *)((int)this + 4);
  if (iVar9 == iVar8) {
    switch(iVar9) {
    case 1:
      cVar1 = FUN_0123c370();
      cVar2 = FUN_0123c370();
      return cVar2 == cVar1;
    case 2:
      iVar8 = FUN_0123c340();
      iVar9 = FUN_0123c340();
      return iVar9 == iVar8;
    case 3:
      iVar8 = FUN_0123c310();
      iVar8 = *(int *)(iVar8 + 0x14);
      iVar9 = FUN_0123c310();
      if (iVar8 == *(int *)(iVar9 + 0x14)) {
        iVar8 = FUN_0123c310();
        uVar13 = *(uint *)(iVar8 + 0x14);
        iVar8 = FUN_0123c310();
        if (*(uint *)(iVar8 + 0x18) < 0x10) {
          rightString = (char *)(iVar8 + 4);
        }
        else {
          rightString = *(char **)(iVar8 + 4);
        }
        iVar8 = FUN_0123c310();
        if (*(uint *)(iVar8 + 0x18) < 0x10) {
          leftString = (char *)(iVar8 + 4);
        }
        else {
          leftString = *(char **)(iVar8 + 4);
        }
        iVar8 = __strnicmp(leftString,rightString,uVar13);
        return iVar8 == 0;
      }
      break;
    default:
      FUN_012f5a60("!\"Unhandled type in ValueData::equivalentTo()\"",
                   "..\\common\\common\\all\\ValueData.cpp",0x140);
      break;
    case 5:
      FUN_012f5a60("false","..\\common\\common\\all\\ValueData.cpp",0x11d);
      return false;
    case 6:
      puVar14 = local_18;
      FUN_0123c3a0(puVar14);
      puVar5 = (undefined4 *)FUN_0041f5d2(puVar14);
      local_28 = *puVar5;
      local_24 = puVar5[1];
      puVar10 = local_30;
      FUN_0123c3a0(puVar10);
      puVar10 = (uint *)FUN_0041f3a1(puVar10);
      uVar13 = *puVar10;
      piVar4 = (int *)puVar10[1];
      local_20 = uVar13;
      local_1c = piVar4;
      cVar1 = FUN_00416f86(&local_28);
      if (cVar1 != '\0') {
        while( true ) {
          if (uVar13 == 0) {
            FUN_00d83c2d();
          }
          if (*(int **)(uVar13 + 8) <= piVar4) {
            FUN_00d83c2d();
          }
          bVar3 = ValueData_containsInt(this,*piVar4);
          if (bVar3) break;
          BinaryStreamCursor_readDwordCursor(&local_20,local_10,(void *)0x0);
          cVar1 = FUN_00416f86(&local_28);
          piVar4 = local_1c;
          uVar13 = local_20;
          if (cVar1 == '\0') {
            return false;
          }
        }
        return true;
      }
      break;
    case 7:
      pvVar11 = (void *)FUN_0123c400();
      pvVar12 = (void *)FUN_0123c400();
      bVar3 = STLVector_ValueData_equals(pvVar12,pvVar11);
      return bVar3;
    case 8:
      pvVar11 = (void *)FUN_0123c430();
      pvVar12 = (void *)FUN_0123c430();
      bVar3 = STLVector_int_equals(pvVar12,pvVar11);
      return bVar3;
    case 9:
      FUN_012f5a60("false","..\\common\\common\\all\\ValueData.cpp",0x131);
      return false;
    case 10:
      FUN_012f5a60("false","..\\common\\common\\all\\ValueData.cpp",0x134);
      return false;
    case 0xb:
      pvVar11 = (void *)FUN_012fa810();
      pvVar12 = (void *)FUN_012fa810();
      bVar3 = CollectionItem_equalsIds(pvVar12,pvVar11);
      return bVar3;
    case 0xd:
      pvVar11 = (void *)FUN_0123c3d0();
      pvVar12 = (void *)FUN_0123c3d0();
      bVar3 = STLMap_intToInt_equals(pvVar12,pvVar11);
      return bVar3;
    case 0xe:
      pvVar11 = (void *)FUN_012fa780();
      pvVar12 = (void *)FUN_012fa780();
      bVar3 = STLMap_intToValueData_equals(pvVar12,pvVar11);
      return bVar3;
    }
  }
  else {
    if ((iVar9 == 6) && (iVar8 == 2)) {
      local_28 = FUN_0123c340();
      iVar8 = *(int *)((int)this + 8);
      local_20 = *(uint *)(iVar8 + 8);
      if (local_20 < *(uint *)(iVar8 + 4)) {
        FUN_00d83c2d();
      }
      iVar9 = *(int *)((int)this + 8);
      local_30[0] = *(uint *)(iVar9 + 4);
      if (*(uint *)(iVar9 + 8) < local_30[0]) {
        FUN_00d83c2d();
      }
      piVar4 = (int *)FUN_0127eb80(local_18,iVar9,local_30[0],iVar8,local_20,&local_28);
      iVar8 = *(int *)((int)this + 8);
      uVar13 = *(uint *)(iVar8 + 8);
      local_1c = (int *)piVar4[1];
      iVar9 = *piVar4;
      if (uVar13 < *(uint *)(iVar8 + 4)) {
        FUN_00d83c2d();
      }
      if ((iVar9 == 0) || (iVar9 != iVar8)) {
        FUN_00d83c2d();
      }
      return local_1c != (int *)uVar13;
    }
    if ((iVar9 == 2) && (iVar8 == 6)) {
      FUN_0123c3a0();
      puVar5 = (undefined4 *)FUN_005e29d5(local_18);
      puVar6 = (undefined4 *)FUN_005e29c1(&local_28);
      STLVector_int_findValue
                (local_30,(void *)*puVar6,(int *)puVar6[1],(void *)*puVar5,(int *)puVar5[1],
                 (int *)((int)this + 8));
      local_20 = *extraout_EAX;
      local_1c = (int *)extraout_EAX[1];
      uVar7 = FUN_005e29d5(local_18);
      cVar1 = FUN_00416f86(uVar7);
      return cVar1 != '\0';
    }
  }
  return false;
}

