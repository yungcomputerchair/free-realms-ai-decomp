// addr: 0x0139c7b0
// name: CWCard_dumpDetails
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWCard_dumpDetails(void * this, void * debugStream) */

void __thiscall CWCard_dumpDetails(void *this,void *debugStream)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int *piVar11;
  void *unaff_retaddr;
  int *key;
  void *pvStack_b8;
  int *piStack_b4;
  undefined4 *puStack_b0;
  int *piStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  void *pvStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  void *local_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  undefined1 auStack_84 [12];
  void *pvStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [4];
  void *pvStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  void *pvStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Dumps a CWCard's detailed state, including archetype, in-play/discard flags,
                       use/action maps, attribute modifier maps, installed actions, and ending card
                       state. The extensive card-specific dump strings and caller CWCard_dump
                       support the name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016851ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  key = debugStream;
  local_94 = this;
  (**(code **)(*(int *)this + 8))(debugStream,DAT_01b839d8 ^ (uint)&stack0xffffff38);
  DebugStream_writeCString(debugStream,"Starting Card\n");
  PlayElement_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Archetype ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x58));
  DebugStream_writeCString(debugStream,"ignore: ");
  Serializer_appendInteger(debugStream,0);
  DebugStream_writeCString(debugStream,"InPlay: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x61));
  DebugStream_writeCString(debugStream,"Being Discarded: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x62));
  pvStack_b8 = debugStream;
  DebugStream_writeCString(debugStream,"Use Map: ");
  STLMap_dwordPair_serialize(&pvStack_b8,(void *)((int)this + 100),key);
  pvStack_b8 = debugStream;
  DebugStream_writeCString(debugStream,"ActionIntIDMap: ");
  STLMap_intTripleRecord_serialize(&pvStack_b8,(int)this + 0x70);
  pvStack_b8 = debugStream;
  DebugStream_writeCString(debugStream,"PlayerActionIDPairMap: ");
  STLMap_intTripleRecord_serialize(&pvStack_b8,(int)this + 0x7c);
  pvStack_78 = debugStream;
  STLVector_int_serialize(&pvStack_78,(int)this + 0x98);
  Card_AttributeModifierTree_ctor((int)auStack_84);
  puStack_8 = (undefined1 *)0x0;
  puStack_50 = *(undefined4 **)((int)this + 0xbc);
  puStack_b0 = (undefined4 *)*puStack_50;
  piStack_b4 = (int *)((int)this + 0xb8);
  while( true ) {
    puVar2 = puStack_b0;
    piVar5 = piStack_b4;
    if ((piStack_b4 == (int *)0x0) || (piStack_b4 != (int *)((int)this + 0xb8))) {
      FUN_00d83c2d();
    }
    if (puVar2 == puStack_50) break;
    if (piVar5 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)((int)piVar5 + 4)) {
      FUN_00d83c2d();
    }
    pvStack_b8 = (void *)puVar2[6];
    if (pvStack_b8 < (void *)puVar2[5]) {
      FUN_00d83c2d();
    }
    if (puStack_b0 == *(undefined4 **)((int)piVar5 + 4)) {
      FUN_00d83c2d();
    }
    pvVar9 = (void *)puVar2[5];
    if ((void *)puVar2[6] < pvVar9) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (puVar2 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (pvVar9 == pvStack_b8) break;
      if (puVar2 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((void *)puVar2[6] <= pvVar9) {
        FUN_00d83c2d();
      }
      piVar5 = (int *)PlayElement_getId();
      puVar2 = puStack_b0;
      piStack_ac = piVar5;
      if (puStack_b0 == *(undefined4 **)((int)piStack_b4 + 4)) {
        FUN_00d83c2d();
      }
      iVar6 = FUN_0139af90(puVar2 + 3);
      uVar1 = *(uint *)(iVar6 + 4);
      if ((uVar1 == 0) ||
         ((uint)((int)(*(int *)(iVar6 + 0xc) - uVar1) >> 2) <=
          (uint)((int)(*(int *)(iVar6 + 8) - uVar1) >> 2))) {
        uVar3 = *(uint *)(iVar6 + 8);
        if (uVar3 < uVar1) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(&uStack_74,iVar6,uVar3,&piStack_ac);
      }
      else {
        puVar2 = *(undefined4 **)(iVar6 + 8);
        *puVar2 = piVar5;
        *(undefined4 **)(iVar6 + 8) = puVar2 + 1;
      }
      puVar2 = puStack_b0;
      if ((void *)puStack_b0[6] <= pvVar9) {
        FUN_00d83c2d();
      }
      pvVar9 = (void *)((int)pvVar9 + 4);
    }
    FUN_0138cca0();
  }
  DebugStream_writeCString(debugStream,"attrModIDMap: ");
  STLMap_intToIntVector_serialize_013959c0(&stack0xffffff44,auStack_84,key);
  DebugStream_writeCString(debugStream,"attrModFilterIDMap: ");
  piVar5 = piStack_98;
  STLVector_int_serialize(&stack0xffffff44,(int)(piStack_98 + 0x31));
  piStack_ac = debugStream;
  pvStack_a0 = RbTreeNode25_allocHeader();
  *(undefined1 *)((int)pvStack_a0 + 0x25) = 1;
  *(void **)((int)pvStack_a0 + 4) = pvStack_a0;
  *(void **)pvStack_a0 = pvStack_a0;
  *(void **)((int)pvStack_a0 + 8) = pvStack_a0;
  uStack_9c = 0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  puStack_50 = (undefined4 *)piVar5[0x12];
  piStack_b4 = piVar5 + 0x11;
  puStack_b0 = (undefined4 *)*puStack_50;
  while( true ) {
    puVar2 = puStack_b0;
    piVar11 = piStack_b4;
    if ((piStack_b4 == (int *)0x0) || (piStack_b4 != piVar5 + 0x11)) {
      FUN_00d83c2d();
    }
    if (puVar2 == puStack_50) {
      DebugStream_writeCString(debugStream,"InstalledActions: ");
      InstalledActionMap_serialize(&piStack_ac,&puStack_a4,key);
      piVar5 = piStack_98;
      pvStack_b8 = debugStream;
      STLVector_intPair_serialize(&pvStack_b8,(int)(piStack_98 + 0x2a));
      STLMap_intTripleRecord_serialize_0138fbc0(&stack0xffffff44,(int)(piVar5 + 0x39));
      puStack_90 = (undefined4 *)0x0;
      puStack_8c = (undefined4 *)0x0;
      iStack_88 = 0;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x12);
      puStack_b0 = (undefined4 *)piVar5[0x3d];
      piVar11 = piVar5 + 0x3c;
      puStack_a8 = (undefined4 *)*puStack_b0;
      piStack_ac = piVar11;
      while( true ) {
        puVar2 = puStack_a8;
        piVar4 = piStack_ac;
        if ((piStack_ac == (int *)0x0) || (piStack_ac != piVar11)) {
          FUN_00d83c2d();
        }
        if (puVar2 == puStack_b0) break;
        if (piVar4 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if (puVar2 == (undefined4 *)piVar4[1]) {
          FUN_00d83c2d();
        }
        puVar10 = puStack_8c;
        if ((puStack_90 == (undefined4 *)0x0) ||
           ((uint)(iStack_88 - (int)puStack_90 >> 2) <=
            (uint)((int)puStack_8c - (int)puStack_90 >> 2))) {
          if (puStack_8c < puStack_90) {
            FUN_00d83c2d();
          }
          Vector_insertSingleAndReturnIterator_realloc(&uStack_74,&local_94,puVar10,puVar2 + 3);
          FUN_0137a9c0();
        }
        else {
          *puStack_8c = puVar2[3];
          puStack_8c = puStack_8c + 1;
          FUN_0137a9c0();
        }
      }
      STLVector_int_serialize(&pvStack_78,(int)&local_94);
      puStack_a8 = *(undefined4 **)piVar5[0x3d];
      piStack_ac = piVar11;
      while( true ) {
        piVar5 = piStack_ac;
        if ((piStack_ac == (int *)0x0) || (piStack_ac != piVar11)) {
          FUN_00d83c2d();
        }
        if (puStack_a8 == puStack_b0) break;
        if (piVar5 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if (puStack_a8 == (undefined4 *)piVar5[1]) {
          FUN_00d83c2d();
        }
        pvVar9 = (void *)IntToObjectTree_findOrCreateSlot(puStack_a8 + 3);
        STLMap_intToIntVector_serialize(&stack0xffffff44,pvVar9,key);
        FUN_0137a9c0();
      }
      STLVector_intPair_serialize(&pvStack_b8,(int)(piStack_98 + 0x3f));
      DebugStream_writeCString(debugStream,"Ending Card\n");
      (**(code **)(*piStack_98 + 0xc))();
      local_c = (void *)CONCAT31(local_c._1_3_,2);
      if (local_94 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      local_94 = (void *)0x0;
      puStack_90 = (undefined4 *)0x0;
      puStack_8c = (undefined4 *)0x0;
      local_c = (void *)((uint)local_c._1_3_ << 8);
      Game_CommandTree_eraseRange
                (&puStack_a8,&pvStack_78,&puStack_a8,(void *)*puStack_a4,&puStack_a8,puStack_a4,
                 debugStream);
                    /* WARNING: Subroutine does not return */
      _free(puStack_a4);
    }
    uStack_68 = 0;
    pvStack_60 = (void *)0x0;
    uStack_5c = 0;
    uStack_58 = 0;
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
    if (piVar11 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar2 == (undefined4 *)piVar11[1]) {
      FUN_00d83c2d();
    }
    uStack_68 = puVar2[4];
    if (puVar2 == (undefined4 *)piVar11[1]) {
      FUN_00d83c2d();
    }
    piVar5 = (int *)puVar2[7];
    if (piVar5 < (int *)puVar2[6]) {
      FUN_00d83c2d();
    }
    if (puVar2 == (undefined4 *)piVar11[1]) {
      FUN_00d83c2d();
    }
    piVar11 = (int *)puVar2[6];
    puVar10 = puVar2;
    if ((int *)puVar2[7] < piVar11) {
      FUN_00d83c2d();
    }
    while( true ) {
      if ((puVar2 == (undefined4 *)0xffffffec) || (puVar2 + 5 != puVar10 + 5)) {
        FUN_00d83c2d();
      }
      if (piVar11 == piVar5) break;
      if (puVar2 == (undefined4 *)0xffffffec) {
        FUN_00d83c2d();
      }
      if ((int *)puVar2[7] <= piVar11) {
        FUN_00d83c2d();
      }
      if (*piVar11 != 0) {
        if ((int *)puVar2[7] <= piVar11) {
          FUN_00d83c2d();
        }
        if (piVar11[1] != 0) {
          if ((int *)puVar2[7] <= piVar11) {
            FUN_00d83c2d();
          }
          uVar7 = FUN_01321f20();
          if ((int *)puVar2[7] <= piVar11) {
            FUN_00d83c2d();
          }
          uVar8 = PlayElement_getId();
          if ((int *)puVar2[7] <= piVar11) {
            FUN_00d83c2d();
          }
          iStack_6c = piVar11[2];
          uStack_74 = uVar8;
          uStack_70 = uVar7;
          FUN_013098c0(&uStack_74);
          debugStream = unaff_retaddr;
          puVar10 = puStack_b0;
        }
      }
      if ((int *)puVar2[7] <= piVar11) {
        FUN_00d83c2d();
      }
      piVar11 = piVar11 + 3;
    }
    if (puVar10 == (undefined4 *)piStack_b4[1]) {
      FUN_00d83c2d();
    }
    uStack_4c = puVar10[3];
    uStack_48 = uStack_68;
    FUN_0135e190(auStack_64);
    puStack_8._0_1_ = 8;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    FUN_0135e190(auStack_44);
    puStack_8._0_1_ = 0xb;
    Game_IntKeyTree_insertUnique(&puStack_a4,(int)auStack_1c,&uStack_34,key);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (pvStack_28 != (void *)0x0) break;
    pvStack_28 = (void *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
    if (pvStack_40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_40);
    }
    pvStack_40 = (void *)0x0;
    uStack_3c = 0;
    uStack_38 = 0;
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    if (pvStack_60 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_60);
    }
    pvStack_60 = (void *)0x0;
    uStack_5c = 0;
    uStack_58 = 0;
    FUN_0134f4a0();
    piVar5 = piStack_98;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_28);
}

