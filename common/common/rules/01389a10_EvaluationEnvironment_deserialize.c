// addr: 0x01389a10
// name: EvaluationEnvironment_deserialize
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EvaluationEnvironment_deserialize(void * env, void * serializer) */

bool __thiscall EvaluationEnvironment_deserialize(void *this,void *env,void *serializer)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  void *pvVar10;
  int *piVar11;
  int *piVar12;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  TypeDescriptor *pTVar16;
  TypeDescriptor *pTVar17;
  undefined4 uVar18;
  void *local_6c;
  int iStack_68;
  int iStack_64;
  void *local_60;
  int *piStack_5c;
  int *piStack_58;
  int aiStack_54 [2];
  undefined1 *puStack_4c;
  undefined1 auStack_44 [4];
  void *pvStack_40;
  void *pvStack_3c;
  void *pvStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  void *pvStack_28;
  undefined1 auStack_24 [4];
  int *piStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes the EvaluationEnvironment state, resolves game/player/card ids
                       back to objects, rebuilds target card lists, restores precondition value,
                       debug flags, and return values. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01683770;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_6c = this;
  cVar7 = (**(code **)(*(int *)this + 0x10))(env,&local_60,DAT_01b839d8 ^ (uint)&stack0xffffff84);
  if (cVar7 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x72c);
  }
  bVar8 = Deserializer_readInteger(env,(int *)&local_6c);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x72f);
  }
  pvVar10 = Game_findByID((int)local_6c);
  *(void **)((int)this + 4) = pvVar10;
  if (pvVar10 == (void *)0x0) {
    WAErrorLog_write("couldn\'t get game for gameID: %d");
  }
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x734);
  }
  bVar8 = Deserializer_readInteger(env,(int *)((int)this + 8));
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x737);
  }
  bVar8 = Deserializer_readInteger(env,(int *)((int)this + 0xc));
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x73a);
  }
  bVar8 = Deserializer_readInteger(env,(int *)((int)this + 0x10));
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x73d);
  }
  bVar8 = Deserializer_readInteger(env,&iStack_64);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x740);
  }
  if (iStack_64 != 0) {
    pvVar10 = PlayArea_findPlayerElementById(*(void **)((int)this + 4),iStack_64);
    *(void **)((int)this + 0x14) = pvVar10;
    if (pvVar10 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x744);
    }
  }
  bVar8 = Deserializer_readInteger(env,(int *)&local_60);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x74d);
  }
  *(void **)((int)this + 0x18) = local_60;
  bVar8 = Deserializer_readIntegerVector(&stack0xffffff90,(void *)((int)this + 0x1c));
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x751);
  }
  bVar8 = Deserializer_readIntegerVector(&stack0xffffff90,(void *)((int)this + 0x2c));
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x754);
  }
  if (iStack_68 < 0x12) {
    pvStack_40 = (void *)0x0;
    pvStack_3c = (void *)0x0;
    pvStack_38 = (void *)0x0;
    local_c = (void *)0x0;
    piStack_5c = env;
    cVar7 = EvaluationEnvironment_readStringPairs(auStack_44);
    if (cVar7 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x75c);
    }
    local_c = (void *)0xffffffff;
    FUN_012ce9d0();
  }
  if (iStack_68 < 0x13) {
    pvStack_40 = (void *)0x0;
    pvStack_3c = (void *)0x0;
    pvStack_38 = (void *)0x0;
    local_c = (void *)0x1;
    piStack_5c = env;
    bVar8 = Deserializer_readStringVector(&piStack_5c,auStack_44);
    if (!bVar8) {
      FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x765);
    }
    local_c = (void *)0xffffffff;
    if (pvStack_40 != (void *)0x0) {
      StdStringRange_destroy(pvStack_40,pvStack_3c);
                    /* WARNING: Subroutine does not return */
      _free(pvStack_40);
    }
    pvStack_40 = (void *)0x0;
    pvStack_3c = (void *)0x0;
    pvStack_38 = (void *)0x0;
  }
  piStack_20 = (int *)0x0;
  piStack_1c = (int *)0x0;
  uStack_18 = 0;
  local_c = (void *)0x2;
  bVar8 = Deserializer_readIntegerVector(&stack0xffffff90,auStack_24);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x76a);
  }
  piStack_5c = piStack_1c;
  if (piStack_1c < piStack_20) {
    FUN_00d83c2d();
  }
  piVar12 = piStack_20;
  if (piStack_1c < piStack_20) {
    FUN_00d83c2d();
  }
  puStack_4c = auStack_24;
  while( true ) {
    puVar6 = puStack_4c;
    if ((puStack_4c == (undefined1 *)0x0) || (puStack_4c != auStack_24)) {
      FUN_00d83c2d();
    }
    if (piVar12 == piStack_5c) break;
    if (puVar6 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)(puVar6 + 8) <= piVar12) {
      FUN_00d83c2d();
    }
    uVar18 = 0;
    pTVar17 = &Card::RTTI_Type_Descriptor;
    pTVar16 = &PlayElement::RTTI_Type_Descriptor;
    uVar15 = 0;
    pvVar10 = find_play_element_in_maps(*(void **)((int)this + 4),*piVar12);
    piVar11 = (int *)FUN_00d8d382(pvVar10,uVar15,pTVar16,pTVar17,uVar18);
    piStack_58 = piVar11;
    if (piVar11 == (int *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x771);
    }
    uVar1 = *(uint *)((int)this + 0x40);
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x48) - uVar1) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x44) - uVar1) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x44);
      if (uVar3 < uVar1) {
        FUN_00d83c2d();
      }
      FUN_012619f0(auStack_44,(int)this + 0x3c,uVar3,&piStack_58);
    }
    else {
      piVar2 = *(int **)((int)this + 0x44);
      *piVar2 = (int)piVar11;
      *(int **)((int)this + 0x44) = piVar2 + 1;
    }
    if (*(int **)(puStack_4c + 8) <= piVar12) {
      FUN_00d83c2d();
    }
    piVar12 = piVar12 + 1;
  }
  piStack_30 = (int *)0x0;
  piStack_2c = (int *)0x0;
  pvStack_28 = (void *)0x0;
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  bVar8 = Deserializer_readIntegerVector(&stack0xffffff90,&uStack_34);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x778);
  }
  piStack_58 = piStack_2c;
  if (piStack_2c < piStack_30) {
    FUN_00d83c2d();
  }
  piVar12 = piStack_30;
  if (piStack_2c < piStack_30) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x34) {
      FUN_00d83c2d();
    }
    pvVar10 = pvStack_4;
    if (piVar12 == piStack_58) break;
    if (&stack0x00000000 == (undefined1 *)0x34) {
      FUN_00d83c2d();
    }
    if (piStack_2c <= piVar12) {
      FUN_00d83c2d();
    }
    uVar18 = 0;
    pTVar17 = &Card::RTTI_Type_Descriptor;
    pTVar16 = &PlayElement::RTTI_Type_Descriptor;
    uVar15 = 0;
    pvVar10 = find_play_element_in_maps((void *)unaff_EBP[1],*piVar12);
    piVar11 = (int *)FUN_00d8d382(pvVar10,uVar15,pTVar16,pTVar17,uVar18);
    piStack_5c = piVar11;
    if (piVar11 == (int *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x77d);
    }
    uVar1 = unaff_EBP[0x14];
    if ((uVar1 == 0) ||
       ((uint)((int)(unaff_EBP[0x16] - uVar1) >> 2) <= (uint)((int)(unaff_EBP[0x15] - uVar1) >> 2)))
    {
      uVar3 = unaff_EBP[0x15];
      if (uVar3 < uVar1) {
        FUN_00d83c2d();
      }
      FUN_012619f0(auStack_44,unaff_EBP + 0x13,uVar3,&piStack_5c);
    }
    else {
      puVar13 = (undefined4 *)unaff_EBP[0x15];
      *puVar13 = piVar11;
      unaff_EBP[0x15] = (int)(puVar13 + 1);
    }
    if (piStack_2c <= piVar12) {
      FUN_00d83c2d();
    }
    piVar12 = piVar12 + 1;
  }
  cVar7 = (**(code **)(unaff_EBP[0x19] + 0x24))(pvStack_4);
  if (cVar7 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x783);
  }
  bVar8 = Deserializer_readInteger(pvVar10,unaff_EBP + 0x1d);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x786);
  }
  bVar8 = Deserializer_readInteger(pvVar10,(int *)&piStack_58);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x789);
  }
  *(bool *)(unaff_EBP + 0x1e) = piStack_58 != (int *)0x0;
  Deserializer_readInteger(pvVar10,aiStack_54);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x78d);
  }
  *(bool *)((int)unaff_EBP + 0x79) = aiStack_54[0] != 0;
  puVar13 = (undefined4 *)unaff_EBP[0x21];
  local_60 = pvVar10;
  if (puVar13 < (undefined4 *)unaff_EBP[0x20]) {
    FUN_00d83c2d();
  }
  puVar4 = (undefined4 *)unaff_EBP[0x20];
  if ((undefined4 *)unaff_EBP[0x21] < puVar4) {
    FUN_00d83c2d();
  }
  if (puVar4 != puVar13) {
    puVar5 = (undefined4 *)unaff_EBP[0x21];
    iVar14 = (int)puVar5 - (int)puVar13;
    if (puVar13 != puVar5) {
      piStack_5c = (int *)((int)puVar4 - (int)puVar13);
      do {
        *(undefined4 *)((int)puVar13 + (int)piStack_5c) = *puVar13;
        FUN_013010e0(puVar13 + 1);
        puVar13 = puVar13 + 4;
      } while (puVar13 != puVar5);
    }
    ValueDataVector_destroyRange16(puVar4 + (iVar14 >> 4) * 4,(void *)unaff_EBP[0x21]);
    unaff_EBP[0x21] = (int)(puVar4 + (iVar14 >> 4) * 4);
    unaff_EBP = unaff_ESI;
  }
  bVar8 = ReturnValueMap_deserialize(&local_60);
  if (!bVar8) {
    FUN_012f5a60("false","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x796);
  }
  uVar9 = (**(code **)(*unaff_EBP + 0x14))(puStack_8);
  uStack_14 = CONCAT31(uStack_14._1_3_,2);
  if (pvStack_38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_38);
  }
  pvStack_38 = (void *)0x0;
  uStack_34 = 0;
  piStack_30 = (int *)0x0;
  uStack_14 = 0xffffffff;
  if (pvStack_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_28);
  }
  ExceptionList = piStack_1c;
  return (bool)uVar9;
}

