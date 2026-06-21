// addr: 0x013fd740
// name: GameTurn_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/game/GameTurn.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameTurn_deserialize(void * this, void * stream) */

void __thiscall GameTurn_deserialize(void *this,void *stream)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  char cVar6;
  bool bVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int unaff_EBP;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  undefined4 uVar17;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 **ppuStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes a GameTurn, resolving current player/card references,
                       state/history fields, card lists, and archived modifier maps. It uses
                       version-dependent reads and RTTI casts to Card. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01690168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar6 = (**(code **)(*(int *)this + 0x10))(stream,&local_78,DAT_01b839d8 ^ (uint)&stack0xffffff78)
  ;
  if (cVar6 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x315);
  }
  bVar7 = Deserializer_readInteger(stream,&local_78);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x318);
  }
  if (*(int *)((int)this + 4) == 0) {
    pvVar8 = Game_findByID(local_78);
    *(void **)((int)this + 4) = pvVar8;
  }
  bVar7 = Deserializer_readInteger(stream,&iStack_74);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x31e);
  }
  if (iStack_74 != 0) {
    pvVar8 = PlayArea_findPlayerElementById(*(void **)((int)this + 4),iStack_74);
    *(void **)((int)this + 8) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x322);
    }
  }
  bVar7 = Deserializer_readInteger(stream,&iStack_70);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x327);
  }
  *(int *)((int)this + 0xc) = iStack_70;
  bVar7 = Deserializer_readInteger(stream,&iStack_6c);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x32b);
  }
  *(int *)((int)this + 0x10) = iStack_6c;
  bVar7 = Deserializer_readInteger(stream,(int *)((int)this + 0x14));
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x32f);
  }
  if ((unaff_EBP < 0xf) &&
     (bVar7 = ComponentFactory_deserializeObjectPointer(stream,(void **)((int)this + 0x18)), !bVar7)
     ) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x338);
  }
  bVar7 = GameTurn_deserializeIntPairMap(&stack0xffffff84);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x341);
  }
  bVar7 = Deserializer_readInteger(stream,(int *)((int)this + 0x28));
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x344);
  }
  bVar7 = GameTurn_deserializeIntPairMap(&stack0xffffff84);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x34a);
  }
  GameTurn_ctor();
  local_c = (void *)0x0;
  bVar7 = GameTurn_deserializeIntPairMap(&stack0xffffff84);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x34e);
  }
  puStack_40 = (undefined4 *)*puStack_1c;
  ppuStack_44 = &puStack_20;
  while( true ) {
    puVar9 = puStack_40;
    ppuVar5 = ppuStack_44;
    if ((ppuStack_44 == (undefined4 **)0x0) || (ppuStack_44 != &puStack_20)) {
      FUN_00d83c2d();
    }
    if (puVar9 == puStack_1c) break;
    if (ppuVar5 == (undefined4 **)0x0) {
      FUN_00d83c2d();
    }
    if (puVar9 == ppuVar5[1]) {
      FUN_00d83c2d();
    }
    if (puVar9[4] == 0) {
      if (puVar9 == ppuVar5[1]) {
        FUN_00d83c2d();
      }
      puVar9 = (undefined4 *)FUN_013fbc20(&stack0xffffff84);
      *puVar9 = 0;
      FUN_013f9330();
    }
    else {
      if (puVar9 == ppuVar5[1]) {
        FUN_00d83c2d();
      }
      if (puVar9 == ppuVar5[1]) {
        FUN_00d83c2d();
      }
      uVar13 = FUN_013fbc20(&stack0xffffff84);
      uVar17 = 0;
      pTVar16 = &Card::RTTI_Type_Descriptor;
      pTVar15 = &PlayElement::RTTI_Type_Descriptor;
      uVar14 = 0;
      pvVar8 = find_play_element_in_maps(*(void **)((int)this + 4),(int)((ulonglong)uVar13 >> 0x20))
      ;
      uVar14 = FUN_00d8d382(pvVar8,uVar14,pTVar15,pTVar16,uVar17);
      *(undefined4 *)uVar13 = uVar14;
      FUN_013f9330();
    }
  }
  bVar7 = Deserializer_readInteger(pvStack_4,&iStack_68);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x35a);
  }
  *(bool *)((int)this + 0x44) = iStack_68 != 0;
  puStack_28 = (undefined4 *)FUN_01240fa0();
  *(undefined1 *)((int)puStack_28 + 0x21) = 1;
  puStack_28[1] = puStack_28;
  *puStack_28 = puStack_28;
  puStack_28[2] = puStack_28;
  uStack_24 = 0;
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  cVar6 = GameObjectIdVector_deserialize(&puStack_2c);
  if (cVar6 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x362);
  }
  puStack_38 = puStack_28;
  puStack_40 = (undefined4 *)*puStack_28;
  ppuStack_44 = &puStack_2c;
  while( true ) {
    pvVar8 = pvStack_4;
    puVar9 = puStack_40;
    ppuVar5 = ppuStack_44;
    if ((ppuStack_44 == (undefined4 **)0x0) || (ppuStack_44 != &puStack_2c)) {
      FUN_00d83c2d();
    }
    if (puVar9 == puStack_38) break;
    if (ppuVar5 == (undefined4 **)0x0) {
      FUN_00d83c2d();
    }
    if (puVar9 == ppuVar5[1]) {
      FUN_00d83c2d();
    }
    piVar1 = (int *)puVar9[6];
    if (piVar1 < (int *)puVar9[5]) {
      FUN_00d83c2d();
    }
    if (puVar9 == ppuVar5[1]) {
      FUN_00d83c2d();
    }
    piVar12 = (int *)puVar9[5];
    if ((int *)puVar9[6] < piVar12) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar9 = puStack_40;
      if (puStack_40 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (piVar12 == piVar1) break;
      if (puVar9 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((int *)puVar9[6] <= piVar12) {
        FUN_00d83c2d();
      }
      uVar17 = 0;
      pTVar16 = &Card::RTTI_Type_Descriptor;
      pTVar15 = &PlayElement::RTTI_Type_Descriptor;
      uVar14 = 0;
      pvVar8 = find_play_element_in_maps(*(void **)((int)this + 4),*piVar12);
      iVar10 = FUN_00d8d382(pvVar8,uVar14,pTVar15,pTVar16,uVar17);
      iStack_60 = iVar10;
      if (iVar10 == 0) {
        FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x36c);
      }
      if (puStack_40 == ppuStack_44[1]) {
        FUN_00d83c2d();
      }
      uStack_64 = puStack_40[3];
      iVar11 = GameTurn_CommandTree_getOrInsert(&uStack_64);
      uVar2 = *(uint *)(iVar11 + 4);
      if ((uVar2 == 0) ||
         ((uint)((int)(*(int *)(iVar11 + 0xc) - uVar2) >> 2) <=
          (uint)((int)(*(int *)(iVar11 + 8) - uVar2) >> 2))) {
        uVar4 = *(uint *)(iVar11 + 8);
        if (uVar4 < uVar2) {
          FUN_00d83c2d();
        }
        FUN_012619f0(auStack_34,iVar11,uVar4,&iStack_60);
      }
      else {
        piVar3 = *(int **)(iVar11 + 8);
        *piVar3 = iVar10;
        *(int **)(iVar11 + 8) = piVar3 + 1;
      }
      if ((int *)puStack_40[6] <= piVar12) {
        FUN_00d83c2d();
      }
      piVar12 = piVar12 + 1;
    }
    RbTreeIterator_incrementLargeNode(&ppuStack_44);
  }
  bVar7 = Deserializer_readInteger(pvVar8,&iStack_5c);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x373);
  }
  *(bool *)((int)this + 0x54) = iStack_5c != 0;
  bVar7 = Deserializer_readInteger(pvVar8,&iStack_58);
  if (!bVar7) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x377);
  }
  *(bool *)((int)this + 0x68) = iStack_58 != 0;
  if (5 < unaff_EBP) {
    bVar7 = Deserializer_readInteger(pvVar8,&iStack_54);
    if (!bVar7) {
      FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x37c);
    }
    *(bool *)((int)this + 0x69) = iStack_54 != 0;
  }
  pvStack_4 = pvVar8;
  if (6 < unaff_EBP) {
    bVar7 = Deserializer_readIntegerVector(&pvStack_4,(void *)((int)this + 0x6c));
    if (!bVar7) {
      FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",899);
    }
    bVar7 = Deserializer_readInteger(pvVar8,&iStack_50);
    if (!bVar7) {
      FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x385);
    }
    *(bool *)((int)this + 0x7c) = iStack_50 != 0;
  }
  if (8 < unaff_EBP) {
    bVar7 = Deserializer_readInteger(pvVar8,&iStack_4c);
    if (!bVar7) {
      FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x38b);
    }
    *(int *)((int)this + 0x80) = iStack_4c;
  }
  if (9 < unaff_EBP) {
    bVar7 = Deserializer_readInteger(pvVar8,&iStack_48);
    if (!bVar7) {
      FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x391);
    }
    *(bool *)((int)this + 0x84) = iStack_48 != 0;
  }
  if ((0x10 < unaff_EBP) &&
     (bVar7 = Deserializer_readString(pvVar8,(void *)((int)this + 0x8c)), !bVar7)) {
    FUN_012f5a60("false","..\\common\\common\\game\\GameTurn.cpp",0x397);
  }
  (**(code **)(*(int *)this + 0x14))();
  uStack_10 = 0;
  StdRbTree_eraseRange
            (auStack_30,&puStack_38,auStack_30,(void *)*puStack_2c,auStack_30,puStack_2c,pvVar8);
                    /* WARNING: Subroutine does not return */
  _free(puStack_2c);
}

