// addr: 0x013664e0
// name: Game_IntMap_findOrInsertValueSlot_impl
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x013666da) */
/* WARNING: Removing unreachable block (ram,0x01366664) */
/* WARNING: Removing unreachable block (ram,0x013667c3) */
/* Setting prototype: void Game_IntMap_findOrInsertValueSlot(void * this, int * outIter, uint * key)
    */

void __thiscall Game_IntMap_findOrInsertValueSlot_impl(void *this,int *outIter,uint *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
                    /* Finds or inserts a slot in Game's integer hash map, rehashing buckets when
                       needed, then returning the iterator/slot for the key. */
  uVar9 = *(uint *)((int)this + 0x24);
  if (uVar9 <= *(uint *)((int)this + 0xc) >> 2) {
    iVar6 = *(int *)((int)this + 0x14);
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 0x18) - iVar6 >> 3;
    }
    if (uVar9 < iVar5 - 1U) {
      if (*(uint *)((int)this + 0x20) < uVar9) {
        *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) * 2 + 1;
      }
    }
    else {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 0x18) - iVar6 >> 3;
      }
      *(int *)((int)this + 0x20) = iVar6 * 2 + -3;
      FUN_0135e5a0(*(int *)((int)this + 0x20) + 2,(int)this + 4,*(undefined4 *)((int)this + 8));
    }
    uVar9 = *(int *)((int)this + 0x24) - (*(uint *)((int)this + 0x20) >> 1);
    uVar10 = uVar9 - 1;
    if ((*(int *)((int)this + 0x14) == 0) ||
       ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar10)) {
      FUN_00d83c2d();
    }
    iVar6 = (int)this + 4;
    puVar8 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + uVar10 * 8);
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    do {
      while( true ) {
        if ((*(int *)((int)this + 0x14) == 0) ||
           ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar9)) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(*(int *)((int)this + 0x14) + 0xc + uVar10 * 8) == puVar8)
        goto LAB_013667e1;
        if (iVar6 == 0) {
          FUN_00d83c2d();
        }
        if (puVar8 == *(undefined4 **)((int)this + 8)) {
          FUN_00d83c2d();
        }
        uVar11 = FUN_0153b426(puVar8[2] ^ 0xdeadbeef,0x1f31d);
        uVar7 = (int)((ulonglong)uVar11 >> 0x20) * 0x41a7 + (int)uVar11 * -0xb14;
        if ((int)uVar7 < 0) {
          uVar7 = uVar7 + 0x7fffffff;
        }
        if ((uVar7 & *(uint *)((int)this + 0x20)) != uVar10) break;
        if (puVar8 == *(undefined4 **)((int)this + 8)) {
          FUN_00d83c2d();
        }
        puVar8 = (undefined4 *)*puVar8;
      }
      puVar1 = *(undefined4 **)((int)this + 8);
      if (puVar8 == *(undefined4 **)((int)this + 8)) {
        FUN_00d83c2d();
      }
      puVar2 = (undefined4 *)*puVar8;
      uVar7 = uVar10;
      if (puVar2 != puVar1) {
        while( true ) {
          if ((*(int *)((int)this + 0x14) == 0) ||
             ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar7)) {
            FUN_00d83c2d();
          }
          iVar5 = *(int *)((int)this + 0x14);
          if (*(undefined4 **)(iVar5 + 4 + uVar7 * 8) != puVar8) break;
          if ((iVar5 == 0) || ((uint)(*(int *)((int)this + 0x18) - iVar5 >> 3) <= uVar7)) {
            FUN_00d83c2d();
          }
          iVar5 = *(int *)((int)this + 0x14);
          *(int *)(iVar5 + uVar7 * 8) = iVar6;
          *(undefined4 **)(iVar5 + 4 + uVar7 * 8) = puVar2;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
        }
        iVar5 = *(int *)((int)this + 8);
        *(undefined4 **)puVar8[1] = puVar2;
        *(int *)puVar2[1] = iVar5;
        **(undefined4 **)(iVar5 + 4) = puVar8;
        uVar3 = *(undefined4 *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 4) = puVar2[1];
        puVar2[1] = puVar8[1];
        puVar8[1] = uVar3;
        puVar8 = (undefined4 *)(*(undefined4 **)((int)this + 8))[1];
        if (puVar8 == *(undefined4 **)((int)this + 8)) {
          FUN_00d83c2d();
        }
        uVar3 = *(undefined4 *)((int)this + 8);
        uVar7 = *(int *)((int)this + 0x24) + 1;
        if ((*(int *)((int)this + 0x14) == 0) ||
           ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar7)) {
          FUN_00d83c2d();
        }
        iVar5 = *(int *)((int)this + 0x14);
        *(int *)(iVar5 + uVar7 * 8) = iVar6;
        *(undefined4 *)(iVar5 + 4 + uVar7 * 8) = uVar3;
      }
      for (uVar7 = *(uint *)((int)this + 0x24); uVar10 < uVar7; uVar7 = uVar7 - 1) {
        iVar5 = *(int *)((int)this + 8);
        if ((*(int *)((int)this + 0x14) == 0) ||
           ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar7)) {
          FUN_00d83c2d();
        }
        iVar4 = *(int *)((int)this + 0x14);
        if (*(int *)(iVar4 + 4 + uVar7 * 8) != iVar5) break;
        if ((iVar4 == 0) || ((uint)(*(int *)((int)this + 0x18) - iVar4 >> 3) <= uVar7)) {
          FUN_00d83c2d();
        }
        iVar5 = *(int *)((int)this + 0x14);
        *(int *)(iVar5 + uVar7 * 8) = iVar6;
        *(undefined4 **)(iVar5 + 4 + uVar7 * 8) = puVar8;
      }
      puVar8 = puVar2;
    } while (puVar2 != *(undefined4 **)((int)this + 8));
LAB_013667e1:
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  uVar11 = FUN_0153b426(*key ^ 0xdeadbeef,0x1f31d);
  uVar9 = (int)((ulonglong)uVar11 >> 0x20) * 0x41a7 + (int)uVar11 * -0xb14;
  if ((int)uVar9 < 0) {
    uVar9 = uVar9 + 0x7fffffff;
  }
  uVar9 = uVar9 & *(uint *)((int)this + 0x20);
  if (*(uint *)((int)this + 0x24) <= uVar9) {
    uVar9 = uVar9 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  if ((*(int *)((int)this + 0x14) == 0) ||
     ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar9 + 1)) {
    FUN_00d83c2d();
  }
  puVar8 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + (uVar9 + 1) * 8);
  iVar6 = (int)this + 4;
  if (iVar6 == 0) {
    FUN_00d83c2d();
  }
  do {
    if ((*(int *)((int)this + 0x14) == 0) ||
       ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar9)) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(*(int *)((int)this + 0x14) + 4 + uVar9 * 8) == puVar8) goto LAB_013668ed;
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    puVar8 = (undefined4 *)puVar8[1];
    if ((puVar8 == *(undefined4 **)((int)this + 8)) &&
       (FUN_00d83c2d(), puVar8 == *(undefined4 **)((int)this + 8))) {
      FUN_00d83c2d();
    }
  } while ((int)*key < (int)puVar8[2]);
  if (puVar8 == *(undefined4 **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  if ((int)*key <= (int)puVar8[2]) {
    *outIter = iVar6;
    outIter[1] = (int)puVar8;
    *(undefined1 *)(outIter + 2) = 0;
    return;
  }
  if (puVar8 == *(undefined4 **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  puVar8 = (undefined4 *)*puVar8;
LAB_013668ed:
  iVar5 = FUN_01352f60(puVar8,puVar8[1],key);
  FUN_01359610(1);
  puVar8[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (iVar6 == 0) {
    FUN_00d83c2d();
  }
  iVar5 = puVar8[1];
  if (iVar5 == *(int *)((int)this + 8)) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((*(int *)((int)this + 0x14) == 0) ||
       ((uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 3) <= uVar9)) {
      FUN_00d83c2d();
    }
    iVar4 = *(int *)((int)this + 0x14);
    if (*(undefined4 **)(iVar4 + 4 + uVar9 * 8) != puVar8) break;
    if ((iVar4 == 0) || ((uint)(*(int *)((int)this + 0x18) - iVar4 >> 3) <= uVar9)) {
      FUN_00d83c2d();
    }
    iVar4 = *(int *)((int)this + 0x14);
    *(int *)(iVar4 + uVar9 * 8) = iVar6;
    *(int *)(iVar4 + 4 + uVar9 * 8) = iVar5;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
  }
  *outIter = iVar6;
  outIter[1] = iVar5;
  *(undefined1 *)(outIter + 2) = 1;
  return;
}

