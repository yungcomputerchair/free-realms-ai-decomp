// addr: 0x01344600
// name: PlayElement_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayElement.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayElement_deserialize(void * this, void * stream) */

bool __thiscall PlayElement_deserialize(void *this,void *stream)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  void *pvVar6;
  void *pvVar7;
  int *piVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int elementId_;
  undefined4 *extraout_EDX_01;
  undefined4 *extraout_EDX_02;
  undefined4 *extraout_EDX_03;
  undefined4 *extraout_EDX_04;
  undefined4 *extraout_EDX_05;
  undefined4 *extraout_EDX_06;
  undefined4 *extraout_EDX_07;
  undefined4 *extraout_EDX_08;
  undefined4 *extraout_EDX_09;
  undefined4 *extraout_EDX_10;
  undefined4 *extraout_EDX_11;
  undefined4 *elementId__00;
  undefined4 unaff_EBX;
  int *unaff_EBP;
  undefined1 *puVar9;
  void *local_64;
  int iStack_60;
  void *pvStack_5c;
  void *apvStack_58 [2];
  int iStack_50;
  int local_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes common PlayElement state, parent/owner references, value maps,
                       child lists, and base state before calling the derived hook. It resolves
                       serialized ids back to PlayElement pointers. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0167cb70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_64 = this;
  cVar3 = (**(code **)(*(int *)this + 0x10))(stream,&local_4c,DAT_01b839d8 ^ (uint)&stack0xffffff8c)
  ;
  if (cVar3 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x204);
  }
  bVar4 = Deserializer_readInteger(stream,&iStack_50);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x207);
  }
  bVar4 = Deserializer_readInteger(stream,&local_4c);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x20a);
  }
  bVar4 = Deserializer_readInteger(stream,(int *)&stack0xffffff98);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x20d);
  }
  *(undefined4 *)((int)this + 0x30) = unaff_EBX;
  bVar4 = Deserializer_readInteger(stream,(int *)&local_64);
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x211);
  }
  *(void **)((int)this + 0x34) = local_64;
  bVar4 = Deserializer_readInteger(stream,&iStack_60);
  elementId_ = extraout_EDX;
  if (!bVar4) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x215);
    elementId_ = extraout_EDX_00;
  }
  if (iStack_60 != 0) {
    pvVar6 = find_play_element_in_maps(*(void **)((int)this + 0x28),elementId_);
    *(void **)((int)this + 0x10) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x219);
    }
  }
  pvStack_5c = stream;
  FUN_01247380();
  local_c = (void *)0x0;
  cVar3 = GameObjectIdVector_deserialize(&uStack_30);
  if (cVar3 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x222);
  }
  puStack_3c = puStack_2c;
  puStack_44 = (undefined4 *)*puStack_2c;
  puStack_48 = &uStack_30;
  while( true ) {
    puVar2 = puStack_44;
    puVar1 = puStack_48;
    if ((puStack_48 == (undefined4 *)0x0) ||
       (elementId__00 = &uStack_30, puStack_48 != elementId__00)) {
      FUN_00d83c2d();
      elementId__00 = extraout_EDX_01;
    }
    if (puVar2 == puStack_3c) {
      piVar8 = (int *)(**(code **)(*(int *)((int)this + -8) + 0x1c))();
      cVar3 = (**(code **)(*piVar8 + 0x24))(stream);
      if (cVar3 == '\0') {
        FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x235);
      }
      Deserializer_readInteger(stream,(int *)((int)this + 0x38));
      uVar5 = (**(code **)(*(int *)this + 0x14))(stream);
      uStack_14 = 0xffffffff;
      StdRbTree_destroyAndFree(auStack_38);
      ExceptionList = pvStack_18;
      return (bool)uVar5;
    }
    if (puVar1 == (undefined4 *)0x0) {
      FUN_00d83c2d();
      elementId__00 = extraout_EDX_02;
    }
    if (puVar2 == (undefined4 *)puVar1[1]) {
      FUN_00d83c2d();
      elementId__00 = extraout_EDX_03;
    }
    pvStack_5c = (void *)puVar2[6];
    if (pvStack_5c < (void *)puVar2[5]) {
      FUN_00d83c2d();
      elementId__00 = extraout_EDX_04;
    }
    puStack_20 = (undefined4 *)0x0;
    puStack_1c = (undefined4 *)0x0;
    pvStack_18 = (void *)0x0;
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    if (puVar2 == (undefined4 *)puVar1[1]) {
      FUN_00d83c2d();
      elementId__00 = extraout_EDX_05;
    }
    pvVar6 = (void *)puVar2[5];
    if ((void *)puVar2[6] < pvVar6) {
      FUN_00d83c2d();
      elementId__00 = extraout_EDX_06;
    }
    while( true ) {
      if ((puVar2 == (undefined4 *)0xfffffff0) || (puVar2 + 4 != puStack_44 + 4)) {
        FUN_00d83c2d();
        elementId__00 = extraout_EDX_07;
      }
      puVar1 = puStack_44;
      if (pvVar6 == pvStack_5c) break;
      if (puVar2 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
        elementId__00 = extraout_EDX_08;
      }
      if ((void *)puVar2[6] <= pvVar6) {
        FUN_00d83c2d();
        elementId__00 = extraout_EDX_09;
      }
      pvVar7 = find_play_element_in_maps((void *)unaff_EBP[10],(int)elementId__00);
      apvStack_58[0] = pvVar7;
      if (pvVar7 == (void *)0x0) {
        FUN_012f5a60("false","..\\common\\common\\game\\PlayElement.cpp",0x22d);
      }
      puVar1 = puStack_1c;
      if ((puStack_20 == (undefined4 *)0x0) ||
         ((uint)((int)pvStack_18 - (int)puStack_20 >> 2) <=
          (uint)((int)puStack_1c - (int)puStack_20 >> 2))) {
        if (puStack_1c < puStack_20) {
          FUN_00d83c2d();
        }
        FUN_01342c60(auStack_38,auStack_24,puVar1,apvStack_58);
        elementId__00 = extraout_EDX_10;
      }
      else {
        *puStack_1c = pvVar7;
        elementId__00 = puStack_1c;
        puStack_1c = puStack_1c + 1;
      }
      if ((void *)puVar2[6] <= pvVar6) {
        FUN_00d83c2d();
        elementId__00 = extraout_EDX_11;
      }
      pvVar6 = (void *)((int)pvVar6 + 4);
    }
    if (puStack_44 == (undefined4 *)puStack_48[1]) {
      FUN_00d83c2d();
    }
    apvStack_58[0] = (void *)puVar1[3];
    puVar9 = auStack_24;
    FUN_01343ed0(apvStack_58);
    FUN_01342b30(puVar9);
    local_c = (void *)((uint)local_c & 0xffffff00);
    if (puStack_20 != (undefined4 *)0x0) break;
    puStack_20 = (undefined4 *)0x0;
    puStack_1c = (undefined4 *)0x0;
    pvStack_18 = (void *)0x0;
    RbTreeIterator_incrementLargeNode(&puStack_48);
    this = unaff_EBP;
    stream = pvStack_4;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_20);
}

