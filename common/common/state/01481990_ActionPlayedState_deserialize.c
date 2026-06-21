// addr: 0x01481990
// name: ActionPlayedState_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/state/ActionPlayedState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionPlayedState_deserialize(void * this, void * reader) */

bool __thiscall ActionPlayedState_deserialize(void *this,void *reader)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int actionId_;
  int unaff_EBX;
  undefined8 uVar10;
  void *pvStack_bc;
  undefined1 local_b8 [4];
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_2c [12];
  void *pvStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Deserializes/restores ActionPlayedState fields from a stream-like object by
                       invoking base state read logic, reading many scalar/boolean members,
                       resolving a card id, and deserializing child objects. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_016a0aeb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar2 = (**(code **)(*(int *)this + 0x10))(reader,local_b8,DAT_01b839d8 ^ (uint)&stack0xffffff38);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = StateMachineState_deserializeWithPlayer(this,reader);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  pvStack_bc = reader;
  bVar3 = Deserializer_readInteger(reader,(int *)((int)this + 0xf8));
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(reader,(int *)((int)this + 0xfc));
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(reader,(int *)((int)this + 0x100));
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(reader,(int *)((int)this + 0x104));
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(reader,(int *)((int)this + 0x108));
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(reader,&iStack_50);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x10c) = iStack_50 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_4c);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x10c) = iStack_4c != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_40);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(int *)((int)this + 0x110) = iStack_40;
  bVar3 = Deserializer_readInteger(reader,&iStack_90);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(int *)((int)this + 0x114) = iStack_90;
  bVar3 = Deserializer_readInteger(reader,&iStack_60);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(int *)((int)this + 0x118) = iStack_60;
  bVar3 = Deserializer_readInteger(reader,&iStack_88);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x11c) = iStack_88 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_48);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x11d) = iStack_48 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_80);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x11e) = iStack_80 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_58);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  if (iStack_58 != 0) {
    pvVar5 = (void *)StateMachineState_getGame();
    pvVar5 = PlayArea_findPlayerElementById(pvVar5,iStack_58);
    *(void **)((int)this + 0x120) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      ExceptionList = pvStack_1c;
      return false;
    }
  }
  bVar3 = Deserializer_readInteger(reader,&iStack_78);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x124) = iStack_78 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_44);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  pcVar1 = *(code **)(*(int *)((int)this + 0x128) + 0x24);
  *(bool *)((int)this + 0x125) = iStack_44 != 0;
  cVar2 = (*pcVar1)(reader);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return false;
  }
  cVar2 = (**(code **)(*(int *)((int)this + 0x144) + 0x24))(reader);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(reader,&iStack_70);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x160) = iStack_70 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_98);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x161) = iStack_98 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_68);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(bool *)((int)this + 0x162) = iStack_68 != 0;
  bVar3 = Deserializer_readInteger(reader,&iStack_3c);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  *(uint *)((int)this + 0x164) = (uint)(iStack_3c != 0);
  bVar3 = Deserializer_readInteger(reader,&iStack_94);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  if (iStack_94 != 0) {
    uVar10 = StateMachineState_getGame(iStack_94);
    pvVar5 = find_play_element_in_maps((void *)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    *(void **)((int)this + 0x168) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      ExceptionList = pvStack_1c;
      return false;
    }
  }
  bVar3 = Deserializer_readInteger(reader,&iStack_8c);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  if (iStack_8c != 0) {
    uVar10 = StateMachineState_getGame(iStack_8c);
    pvVar5 = find_play_element_in_maps((void *)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    *(void **)((int)this + 0x16c) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      ExceptionList = pvStack_1c;
      return false;
    }
  }
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_14 = (void *)0x0;
  bVar3 = Deserializer_readIntegerVector(&pvStack_bc,auStack_b4);
  if (bVar3) {
    puVar6 = (undefined4 *)FUN_0041f5d2(&uStack_a4);
    uStack_38 = *puVar6;
    uStack_34 = puVar6[1];
    puVar6 = (undefined4 *)FUN_0041f3a1(&pvStack_bc);
    uStack_a4 = *puVar6;
    uStack_a0 = puVar6[1];
    cVar2 = FUN_00416f86(&uStack_38);
    while (cVar2 != '\0') {
      piVar7 = (int *)FUN_01240910();
      iVar9 = *piVar7;
      pvVar5 = (void *)StateMachineState_getGame();
      pvStack_bc = PlayArea_findPlayerElementById(pvVar5,iVar9);
      if (pvStack_bc == (void *)0x0) goto LAB_01481d45;
      FUN_01336350(&pvStack_bc);
      FUN_012fb740(auStack_2c,0);
      cVar2 = FUN_00416f86(&uStack_38);
    }
    bVar3 = Deserializer_readInteger(reader,&iStack_9c);
    if (bVar3) {
      if (-1 < iStack_9c) {
        pvStack_bc = (void *)0x0;
        puVar6 = (undefined4 *)FUN_014693d0(auStack_2c);
        *(undefined4 *)((int)this + 0x180) = *puVar6;
        *(undefined4 *)((int)this + 0x184) = puVar6[1];
        *(undefined4 *)((int)this + 0x188) = puVar6[2];
        uVar8 = FUN_01469400(auStack_2c);
        cVar2 = FUN_014694d0((int)this + 0x180,uVar8);
        while ((cVar2 != '\0' && ((int)pvStack_bc < iStack_9c))) {
          pvStack_bc = (void *)((int)pvStack_bc + 1);
          FUN_01469460(&uStack_38,0);
          uVar8 = FUN_01469400(auStack_2c);
          cVar2 = FUN_014694d0((int)this + 0x180,uVar8);
        }
      }
      bVar3 = Deserializer_readInteger(reader,&iStack_84);
      if (bVar3) {
        *(int *)((int)this + 0x18c) = iStack_84;
        bVar3 = Deserializer_readInteger(reader,&iStack_7c);
        if (bVar3) {
          if (iStack_7c != 0) {
            uVar10 = StateMachineState_getGame
                               (iStack_7c,0,&PlayElement::RTTI_Type_Descriptor,
                                &Card::RTTI_Type_Descriptor,0);
            pvVar5 = find_play_element_in_maps((void *)uVar10,(int)((ulonglong)uVar10 >> 0x20));
            iVar9 = FUN_00d8d382(pvVar5);
            *(int *)((int)this + 400) = iVar9;
            if (iVar9 == 0) goto LAB_01481d45;
          }
          bVar3 = Deserializer_readInteger(reader,&iStack_74);
          if (bVar3) {
            if ((iStack_74 != 0) && (*(void **)((int)this + 400) != (void *)0x0)) {
              pvVar5 = Card_getActionByID(*(void **)((int)this + 400),actionId_);
              *(void **)((int)this + 0x194) = pvVar5;
              if (pvVar5 == (void *)0x0) goto LAB_01481d45;
            }
            if (1 < unaff_EBX) {
              bVar3 = Deserializer_readInteger(reader,&iStack_6c);
              if (!bVar3) {
                FUN_012f5a60("false","..\\common\\common\\state\\ActionPlayedState.cpp",0x591);
              }
              *(bool *)((int)this + 0x198) = iStack_6c != 0;
            }
            if (2 < unaff_EBX) {
              bVar3 = Deserializer_readInteger(reader,&iStack_64);
              if (!bVar3) {
                FUN_012f5a60("false","..\\common\\common\\state\\ActionPlayedState.cpp",0x596);
              }
              *(bool *)((int)this + 0x199) = iStack_64 != 0;
            }
            if (3 < unaff_EBX) {
              bVar3 = Deserializer_readInteger(reader,&iStack_5c);
              if (!bVar3) {
                FUN_012f5a60("false","..\\common\\common\\state\\ActionPlayedState.cpp",0x59b);
              }
              *(bool *)((int)this + 0x19a) = iStack_5c != 0;
            }
            if (4 < unaff_EBX) {
              bVar3 = Deserializer_readInteger(reader,&iStack_54);
              if (!bVar3) {
                FUN_012f5a60("false","..\\common\\common\\state\\ActionPlayedState.cpp",0x5a0);
              }
              *(bool *)((int)this + 0x19b) = iStack_54 != 0;
            }
            uVar4 = (**(code **)(*(int *)this + 0x14))(reader);
            uStack_18 = 0xffffffff;
            StdVector_clearStorage(local_b8);
            ExceptionList = pvStack_20;
            return (bool)uVar4;
          }
        }
      }
    }
  }
LAB_01481d45:
  local_14 = (void *)0xffffffff;
  StdVector_clearStorage(auStack_b4);
  ExceptionList = pvStack_1c;
  return false;
}

