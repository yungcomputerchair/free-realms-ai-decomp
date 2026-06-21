// addr: 0x0133f420
// name: Game_updatePlayerElementIndexMaps_copying
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall Game_updatePlayerElementIndexMaps_copying(void *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  void *this;
  int iVar3;
  int *piVar4;
  int *extraout_EAX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int **key;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  int *piStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  undefined1 auStack_30 [4];
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Variant of the player/play-element map update routine that also moves/copies
                       stored record data while updating int-keyed records and default-map entries.
                        */
  iVar6 = param_2;
  puStack_8 = &LAB_0167c2b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_0133f1f0(DAT_01b839d8 ^ (uint)&stack0xffffff9c);
  local_4 = 0;
  this = PlayArea_findPlayerElementById(param_1,param_3);
  if (this != (void *)0x0) {
    uVar12 = 0;
    pTVar10 = &CWDeck::RTTI_Type_Descriptor;
    pTVar9 = &Deck::RTTI_Type_Descriptor;
    uVar8 = 0;
    iVar3 = unknown_getField28(this);
    piVar4 = (int *)FUN_00d8d382(iVar3,uVar8,pTVar9,pTVar10,uVar12);
    if (piVar4 != (int *)0x0) {
      local_28 = (int *)0x0;
      local_24 = 0;
      local_20 = 0;
      local_4 = 1;
      key = &local_2c;
      (**(code **)(*piVar4 + 0x4c))();
      FUN_005258fb();
      piVar4 = local_28;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      if (local_28 < local_2c) {
        FUN_00d83c2d();
      }
      piVar7 = local_2c;
      if (local_28 < local_2c) {
        FUN_00d83c2d();
      }
      puStack_4c = auStack_30;
      while( true ) {
        puVar1 = puStack_4c;
        if ((puStack_4c == (undefined1 *)0x0) || (puStack_4c != auStack_30)) {
          FUN_00d83c2d();
        }
        if (piVar7 == piVar4) break;
        if (puVar1 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)(puVar1 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        param_2 = *piVar7;
        StdRbTreeInt_find(auStack_3c,auStack_44,&param_2,(int *)key);
        piVar2 = piStack_38;
        piVar5 = (int *)extraout_EAX[1];
        if (((undefined1 *)*extraout_EAX == (undefined1 *)0x0) ||
           ((undefined1 *)*extraout_EAX != auStack_3c)) {
          FUN_00d83c2d();
        }
        if (piVar5 == piVar2) {
          piVar5 = IntDefaultMap_getOrInsert(auStack_3c,&param_2);
          *piVar5 = 0;
        }
        piVar5 = IntDefaultMap_getOrInsert(auStack_3c,&param_2);
        *piVar5 = *piVar5 + 1;
        if (*(int **)(puStack_4c + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        piVar7 = piVar7 + 1;
      }
      pvStack_1c = (void *)0x0;
      uStack_18 = 0;
      uStack_14 = 0;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
      piStack_40 = piStack_38;
      piVar4 = (int *)*piStack_38;
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x3c) {
          FUN_00d83c2d();
        }
        if (piVar4 == piStack_40) break;
        if (&stack0x00000000 == (undefined1 *)0x3c) {
          FUN_00d83c2d();
        }
        if (piVar4 == piStack_38) {
          FUN_00d83c2d();
        }
        puVar1 = (undefined1 *)piVar4[3];
        if (piVar4 == piStack_38) {
          FUN_00d83c2d();
        }
        uStack_48 = piVar4[4];
        puStack_4c = puVar1;
        StdRbTree_insertValueMaybeRebalance(&local_20,&puStack_4c,key);
        FUN_004d21f9();
      }
      puVar11 = &local_20;
      param_2 = 0;
      Game_IntKeyTree_getOrInsertRecord_0133e1a0(&param_2);
      FUN_01334b40(puVar11);
      piVar4 = local_28;
      if ((local_28 < local_2c) && (FUN_00d83c2d(), local_28 < local_2c)) {
        FUN_00d83c2d();
      }
      piVar7 = local_28;
      if (local_2c != piVar4) {
        iVar6 = (int)local_28 - (int)piVar4 >> 2;
        piVar7 = local_2c + iVar6;
        if (0 < iVar6) {
          _memmove_s(local_2c,iVar6 * 4,piVar4,iVar6 * 4);
        }
      }
      local_28 = piVar7;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      if (pvStack_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_1c);
      }
      pvStack_1c = (void *)0x0;
      uStack_18 = 0;
      uStack_14 = 0;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      FUN_005152ac(auStack_44,auStack_3c,*piStack_38,auStack_3c,piStack_38);
                    /* WARNING: Subroutine does not return */
      _free(piStack_38);
    }
  }
  ExceptionList = local_c;
  return iVar6;
}

