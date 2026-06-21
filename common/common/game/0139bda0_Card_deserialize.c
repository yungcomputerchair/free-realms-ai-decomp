// addr: 0x0139bda0
// name: Card_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_deserialize(void * this, void * stream) */

void __thiscall Card_deserialize(void *this,void *stream)

{
  rsize_t _DstSize;
  uint uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  void *pvVar10;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *extraout_EDX_01;
  undefined4 *extraout_EDX_02;
  undefined4 *extraout_EDX_03;
  undefined4 *extraout_EDX_04;
  undefined4 *extraout_EDX_05;
  undefined4 *extraout_EDX_06;
  undefined4 *extraout_EDX_07;
  undefined4 *puVar11;
  undefined4 *extraout_EDX_08;
  undefined4 *extraout_EDX_09;
  void *extraout_EDX_10;
  void *extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  void *extraout_EDX_14;
  int unaff_EBX;
  undefined4 *puVar12;
  int *unaff_EBP;
  int *piVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  TypeDescriptor *pTVar16;
  TypeDescriptor *pTVar17;
  int iVar18;
  undefined4 uVar19;
  void *local_84;
  int local_80;
  int *piStack_7c;
  undefined4 *puStack_78;
  int *piStack_74;
  int iStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined1 auStack_64 [4];
  undefined4 *puStack_60;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
                    /* Deserializes Card state after PlayElement, including archetype/action data,
                       flags, modifier groups, target/action maps, and child card references. It
                       resolves serialized PlayElement ids to AttributeModifier and Card instances.
                        */
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_016850c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_84 = this;
  cVar3 = (**(code **)(*(int *)this + 0x10))(stream,&local_80,DAT_01b839d8 ^ (uint)&stack0xffffff6c)
  ;
  if (cVar3 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x1174);
  }
  PlayElement_deserialize(this,stream);
  *(undefined1 *)((int)this + 0x3c) = 1;
  bVar4 = Deserializer_readInteger(stream,(int *)((int)this + 0x58));
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x117c);
  }
  bVar4 = Deserializer_readInteger(stream,&iStack_70);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x1180);
  }
  iVar9 = *(int *)((int)this + 0x58);
  if (iVar9 != 0) {
    uVar5 = *(undefined4 *)((int)this + 0x54);
    ArchetypeDB_getInstance();
    uVar5 = ArchetypeDB_getArchetype(iVar9,uVar5);
    *(undefined4 *)((int)this + 0x5c) = uVar5;
  }
  bVar4 = Deserializer_readInteger(stream,(int *)&local_84);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x1189);
  }
  *(bool *)((int)this + 0x61) = local_84 != (void *)0x0;
  bVar4 = Deserializer_readInteger(stream,&local_80);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x118d);
  }
  *(bool *)((int)this + 0x62) = local_80 != 0;
  piStack_7c = stream;
  FUN_004ef7fa(*(undefined4 *)(*(int *)((int)this + 0x68) + 4));
  *(int *)(*(int *)((int)this + 0x68) + 4) = *(int *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x68);
  *(int *)(*(int *)((int)this + 0x68) + 8) = *(int *)((int)this + 0x68);
  uVar6 = Game_deserializeIntPairVector_01300190(&piStack_7c,(void *)((int)this + 100));
  if ((char)uVar6 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x1195);
  }
  piStack_7c = stream;
  FUN_0138d8c0(*(undefined4 *)(*(int *)((int)this + 0x74) + 4));
  *(int *)(*(int *)((int)this + 0x74) + 4) = *(int *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x74);
  *(int *)(*(int *)((int)this + 0x74) + 8) = *(int *)((int)this + 0x74);
  uVar6 = Card_deserializeTripleDwordVector(&piStack_7c);
  if ((char)uVar6 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x119c);
  }
  piStack_7c = stream;
  FUN_0138d8c0(*(undefined4 *)(*(int *)((int)this + 0x80) + 4));
  *(int *)(*(int *)((int)this + 0x80) + 4) = *(int *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x80);
  *(int *)(*(int *)((int)this + 0x80) + 8) = *(int *)((int)this + 0x80);
  uVar6 = Card_deserializeTripleDwordVector(&piStack_7c);
  if ((char)uVar6 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11a4);
  }
  if (1 < unaff_EBX) {
    pvVar7 = (void *)((int)this + 0x98);
    piStack_7c = stream;
    uVar6 = *(uint *)((int)this + 0xa0);
    if (uVar6 < *(uint *)((int)this + 0x9c)) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)this + 0x9c);
    if (*(uint *)((int)this + 0xa0) < uVar1) {
      FUN_00d83c2d();
    }
    FUN_0041f5e6(auStack_64,pvVar7,uVar1,pvVar7,uVar6);
    bVar4 = Deserializer_readIntegerVector(&piStack_7c,pvVar7);
    stream = piStack_4;
    if (!bVar4) {
      FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11aa);
      stream = piStack_4;
    }
  }
  Card_AttributeModifierTree_ctor((int)&uStack_40);
  local_c = (void *)0x0;
  piStack_7c = stream;
  bVar4 = Card_deserializeArchetypeEntries(&piStack_7c);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11b2);
  }
  puStack_60 = puStack_3c;
  puStack_68 = (undefined4 *)*puStack_3c;
  puStack_6c = &uStack_40;
  while( true ) {
    puVar12 = puStack_68;
    puVar14 = puStack_6c;
    if ((puStack_6c == (undefined4 *)0x0) || (puVar11 = &uStack_40, puStack_6c != puVar11)) {
      FUN_00d83c2d();
      puVar11 = extraout_EDX;
    }
    if (puVar12 == puStack_60) break;
    if (puVar14 == (undefined4 *)0x0) {
      FUN_00d83c2d();
      puVar11 = extraout_EDX_00;
    }
    if (puVar12 == (undefined4 *)puVar14[1]) {
      FUN_00d83c2d();
      puVar11 = extraout_EDX_01;
    }
    piStack_7c = (int *)puVar12[6];
    if (piStack_7c < (int *)puVar12[5]) {
      FUN_00d83c2d();
      puVar11 = extraout_EDX_02;
    }
    if (puVar12 == (undefined4 *)puVar14[1]) {
      FUN_00d83c2d();
      puVar11 = extraout_EDX_03;
    }
    piVar13 = (int *)puVar12[5];
    if ((int *)puVar12[6] < piVar13) {
      FUN_00d83c2d();
      puVar11 = extraout_EDX_04;
    }
    while( true ) {
      puVar14 = puStack_68;
      if (puStack_68 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
        puVar11 = extraout_EDX_05;
      }
      if (piVar13 == piStack_7c) break;
      if (puVar14 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
        puVar11 = extraout_EDX_06;
      }
      if ((int *)puVar14[6] <= piVar13) {
        FUN_00d83c2d();
        puVar11 = extraout_EDX_07;
      }
      uVar19 = 0;
      pTVar17 = &AttributeModifier::RTTI_Type_Descriptor;
      pTVar16 = &PlayElement::RTTI_Type_Descriptor;
      uVar5 = 0;
      pvVar7 = find_play_element_in_maps(*(void **)((int)this + 0x28),(int)puVar11);
      piVar8 = (int *)FUN_00d8d382(pvVar7,uVar5,pTVar16,pTVar17,uVar19);
      piStack_74 = piVar8;
      if (piVar8 == (int *)0x0) {
        FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11bc);
      }
      if (puStack_68 == (undefined4 *)puStack_6c[1]) {
        FUN_00d83c2d();
      }
      iVar9 = Card_IntKeyTree_getOrInsertRecord(puStack_68 + 3);
      uVar6 = *(uint *)(iVar9 + 4);
      if ((uVar6 == 0) ||
         (puVar11 = (undefined4 *)((int)(*(int *)(iVar9 + 8) - uVar6) >> 2),
         (undefined4 *)((int)(*(int *)(iVar9 + 0xc) - uVar6) >> 2) <= puVar11)) {
        uVar1 = *(uint *)(iVar9 + 8);
        if (uVar1 < uVar6) {
          FUN_00d83c2d();
        }
        FUN_01335180(auStack_5c,iVar9,uVar1,&piStack_74);
        puVar11 = extraout_EDX_08;
      }
      else {
        piVar2 = *(int **)(iVar9 + 8);
        *piVar2 = (int)piVar8;
        *(int **)(iVar9 + 8) = piVar2 + 1;
      }
      if ((int *)puStack_68[6] <= piVar13) {
        FUN_00d83c2d();
        puVar11 = extraout_EDX_09;
      }
      piVar13 = piVar13 + 1;
    }
    FUN_0138ce10();
    stream = piStack_4;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  pvVar7 = *(void **)((int)this + 0xcc);
  piStack_74 = stream;
  if (pvVar7 < *(void **)((int)this + 200)) {
    FUN_00d83c2d();
  }
  pvVar10 = *(void **)((int)this + 200);
  if (*(void **)((int)this + 0xcc) < pvVar10) {
    FUN_00d83c2d();
  }
  if (pvVar10 != pvVar7) {
    iVar9 = *(int *)((int)this + 0xcc) - (int)pvVar7 >> 2;
    _DstSize = iVar9 * 4;
    if (0 < iVar9) {
      _memmove_s(pvVar10,_DstSize,pvVar7,_DstSize);
    }
    *(void **)((int)this + 0xcc) = (void *)(_DstSize + (int)pvVar10);
  }
  bVar4 = Deserializer_readIntegerVector(&piStack_74,(void *)((int)this + 0xc4));
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11c8);
  }
  piStack_74 = piStack_4;
  puStack_48 = RbTreeNode25_allocHeader();
  *(undefined1 *)((int)puStack_48 + 0x25) = 1;
  puStack_48[1] = puStack_48;
  *puStack_48 = puStack_48;
  puStack_48[2] = puStack_48;
  uStack_44 = 0;
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  uVar6 = Game_IntKeyTree_deserialize(&piStack_74,&iStack_4c);
  if ((char)uVar6 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11d2);
  }
  Card_AttributeModifierTree_destroyNodes(*(void **)(unaff_EBP[0x12] + 4));
  *(int *)(unaff_EBP[0x12] + 4) = unaff_EBP[0x12];
  unaff_EBP[0x13] = 0;
  *(int *)unaff_EBP[0x12] = unaff_EBP[0x12];
  *(int *)(unaff_EBP[0x12] + 8) = unaff_EBP[0x12];
  puStack_60 = puStack_48;
  puStack_78 = (undefined4 *)*puStack_48;
  piStack_7c = &iStack_4c;
  pvVar7 = extraout_EDX_10;
  do {
    puVar14 = puStack_78;
    piVar13 = piStack_7c;
    if ((piStack_7c == (int *)0x0) || (piStack_7c != &iStack_4c)) {
      FUN_00d83c2d();
      pvVar7 = extraout_EDX_11;
    }
    if (puVar14 == puStack_60) {
      if (3 < unaff_EBX) {
        piStack_74 = piStack_4;
        bVar4 = StdVectorPairBool_deserialize(&piStack_74,pvVar7);
        if (!bVar4) {
          FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11f4);
        }
      }
      piVar13 = piStack_4;
      piStack_74 = piStack_4;
      uVar6 = Card_deserializeTripleDwordVector(&piStack_74);
      if ((char)uVar6 == '\0') {
        FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11fb);
      }
      piStack_30 = (int *)0x0;
      piStack_2c = (int *)0x0;
      uStack_28 = 0;
      local_c = (void *)CONCAT31(local_c._1_3_,7);
      piStack_74 = piVar13;
      bVar4 = Deserializer_readIntegerVector(&piStack_74,&uStack_34);
      if (!bVar4) {
        FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x1200);
      }
      piStack_7c = piVar13;
      piStack_74 = piStack_2c;
      if (piStack_2c < piStack_30) {
        FUN_00d83c2d();
      }
      piVar13 = piStack_30;
      if (piStack_2c < piStack_30) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x34) {
          FUN_00d83c2d();
        }
        if (piVar13 == piStack_74) break;
        if (&stack0x00000000 == (undefined1 *)0x34) {
          FUN_00d83c2d();
        }
        if (piStack_2c <= piVar13) {
          FUN_00d83c2d();
        }
        uVar5 = IntToObjectTree_findOrCreateSlot(piVar13);
        cVar3 = GameObjectIdVector_deserialize(uVar5);
        if (cVar3 == '\0') {
          FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x1209);
        }
        if (piStack_2c <= piVar13) {
          FUN_00d83c2d();
        }
        piVar13 = piVar13 + 1;
      }
      if (4 < unaff_EBX) {
        piStack_74 = piStack_4;
        bVar4 = StdVectorPairBool_deserialize(&piStack_74,piStack_4);
        if (!bVar4) {
          FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x1210);
        }
      }
      (**(code **)(unaff_EBP[-2] + 4))(0x1c,unaff_EBP + 0x44);
      FUN_01392560();
      pvVar7 = local_c;
      (**(code **)(*unaff_EBP + 0x14))();
      uStack_18 = CONCAT31(uStack_18._1_3_,3);
      if (puStack_3c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_3c);
      }
      puStack_3c = (undefined4 *)0x0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_18 = CONCAT31(uStack_18._1_3_,1);
      Game_CommandTree_eraseRange
                (&uStack_58,&puStack_68,&uStack_58,(void *)*puStack_54,&uStack_58,puStack_54,pvVar7)
      ;
                    /* WARNING: Subroutine does not return */
      _free(puStack_54);
    }
    if (piVar13 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar14 == (undefined4 *)piVar13[1]) {
      FUN_00d83c2d();
    }
    piStack_74 = (int *)puVar14[7];
    if (piStack_74 < (int *)puVar14[6]) {
      FUN_00d83c2d();
    }
    uStack_58 = 0;
    puStack_54 = (undefined4 *)0x0;
    uStack_50 = 0;
    local_c = (void *)CONCAT31(local_c._1_3_,5);
    if (puVar14 == (undefined4 *)piVar13[1]) {
      FUN_00d83c2d();
    }
    piVar13 = (int *)puVar14[6];
    puVar12 = puVar14 + 5;
    puVar11 = puVar12;
    if ((int *)puVar14[7] < piVar13) {
      FUN_00d83c2d();
    }
    while( true ) {
      puStack_6c = puVar11;
      if ((puVar12 == (undefined4 *)0x0) || (puVar12 != puVar14 + 5)) {
        FUN_00d83c2d();
      }
      if (piVar13 == piStack_74) break;
      if (puVar12 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if ((int *)puVar12[2] <= piVar13) {
        FUN_00d83c2d();
      }
      uVar19 = 0;
      pTVar17 = &Card::RTTI_Type_Descriptor;
      pTVar16 = &PlayElement::RTTI_Type_Descriptor;
      uVar5 = 0;
      pvVar7 = find_play_element_in_maps((void *)unaff_EBP[10],*piVar13);
      uVar15 = FUN_00d8d382(pvVar7,uVar5,pTVar16,pTVar17,uVar19);
      iVar9 = (int)((ulonglong)uVar15 >> 0x20);
      pvVar7 = (void *)uVar15;
      if (pvVar7 == (void *)0x0) {
        FUN_012f5a60("false","..\\common\\common\\game\\Card.cpp",0x11e0);
        iVar9 = extraout_EDX_12;
      }
      if (unaff_EBP[0x16] != 0) {
        if ((int *)puVar12[2] <= piVar13) {
          FUN_00d83c2d();
          iVar9 = extraout_EDX_13;
        }
        pvVar10 = Card_getActionByID(pvVar7,iVar9);
        if (pvVar10 == (void *)0x0) {
          if ((int *)puVar12[2] <= piVar13) {
            FUN_00d83c2d();
          }
          iVar9 = unaff_EBP[0x15];
          iVar18 = piVar13[1];
          ActionDB_ensureSingleton();
          pvVar10 = (void *)ActionDB_getAction(iVar18,iVar9);
          puVar14 = puStack_78;
          if (pvVar10 == (void *)0x0) goto LAB_0139c4cb;
        }
        if ((int *)puVar12[2] <= piVar13) {
          FUN_00d83c2d();
        }
        iVar9 = piVar13[2];
        if (puStack_78 == (undefined4 *)piStack_7c[1]) {
          FUN_00d83c2d();
        }
        if (puStack_78 == (undefined4 *)piStack_7c[1]) {
          FUN_00d83c2d();
        }
        (**(code **)(unaff_EBP[0x10] + 4))(puStack_78[3],puStack_78[4],pvVar7,pvVar10,iVar9);
        puVar12 = puStack_6c;
        puVar14 = puStack_78;
      }
LAB_0139c4cb:
      if ((int *)puVar12[2] <= piVar13) {
        FUN_00d83c2d();
      }
      piVar13 = piVar13 + 3;
      puVar11 = puStack_6c;
    }
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    uStack_58 = 0;
    puStack_54 = (undefined4 *)0x0;
    uStack_50 = 0;
    RbTreeIterator25_increment((int *)&piStack_7c);
    pvVar7 = extraout_EDX_14;
  } while( true );
}

