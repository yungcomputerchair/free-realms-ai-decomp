// addr: 0x01375680
// name: Game_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_deserialize(void * this, void * stream) */

bool __thiscall Game_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 extraout_AL;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 *extraout_EAX;
  undefined4 *extraout_EAX_00;
  int iVar8;
  undefined4 *extraout_EAX_01;
  void *src;
  int elementId_;
  int elementId__00;
  int actionId_;
  int elementId__01;
  int elementId__02;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  undefined4 uVar11;
  undefined4 **ppuVar12;
  undefined1 **ppuVar13;
  undefined1 *puVar14;
  void **item;
  undefined1 local_7dc [148];
  undefined1 *local_748;
  undefined1 *local_73c;
  undefined1 *local_734;
  undefined1 *local_72c;
  undefined1 *local_724;
  undefined1 *local_71c;
  undefined1 *local_714;
  undefined1 *local_70c;
  void *local_704;
  undefined4 *local_700;
  undefined4 local_6fc;
  undefined1 local_6ec [4];
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 *local_6dc;
  int local_6d8;
  undefined1 *local_6d4 [2];
  undefined1 local_6cc [8];
  undefined1 local_6c4 [4];
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined1 local_6b4 [4];
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined1 local_6a0 [8];
  undefined1 local_698 [4];
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  void *local_688;
  int local_684;
  int local_680;
  undefined1 *local_67c;
  undefined4 *local_678;
  undefined4 *local_674;
  int local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 *local_660;
  undefined4 local_65c;
  undefined4 local_658;
  int local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 *local_648;
  int local_644;
  undefined4 local_640;
  int local_63c;
  undefined1 *local_638;
  undefined4 local_634;
  int local_630;
  int local_62c;
  int local_628;
  undefined1 *local_624;
  undefined4 *local_620;
  undefined4 local_61c;
  undefined4 *local_618;
  undefined4 *local_614;
  int local_610;
  int local_60c;
  int local_608;
  undefined4 *local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  int local_5f8;
  undefined1 *local_5f4;
  undefined4 *local_5f0;
  int local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined1 *local_5e0 [2];
  undefined4 local_5d8;
  undefined4 local_5d4;
  int local_5d0;
  int local_5cc;
  int local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  int local_5bc;
  int local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 *local_5ac [2];
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined1 *local_594 [2];
  undefined4 *local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  void *local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined1 *local_554;
  undefined4 local_550;
  int local_54c;
  int local_548;
  undefined1 local_53c [4];
  undefined1 local_538 [4];
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 *local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 *local_51c;
  void *local_518;
  undefined4 *local_514;
  undefined4 local_510;
  undefined1 local_50c [4];
  undefined4 *local_508 [2];
  undefined1 *local_500;
  undefined4 local_4fc;
  undefined4 *local_4f8 [2];
  undefined1 *local_4f0;
  undefined4 local_4ec;
  undefined1 *local_4e8;
  undefined4 *local_4e4;
  void *local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 *local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  void *local_4c8;
  undefined4 *local_4c4;
  undefined4 *local_4c0;
  void *local_4bc;
  undefined4 *local_4b8;
  undefined4 *local_4b4;
  undefined1 *local_4b0 [2];
  undefined1 local_4a8 [4];
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 *local_498;
  undefined1 local_494 [12];
  undefined4 local_488;
  undefined4 *local_484;
  void *local_47c;
  undefined1 *local_478;
  undefined4 local_474;
  undefined1 local_470 [4];
  undefined4 *local_46c;
  undefined1 local_464 [4];
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined1 local_454 [4];
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined1 local_444 [4];
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined1 local_434 [4];
  undefined4 *local_430;
  undefined1 local_428 [4];
  undefined4 *local_424;
  undefined1 local_41c [4];
  undefined4 *local_418;
  undefined1 local_410 [4];
  undefined4 local_40c;
  int local_404;
  undefined1 *local_400;
  void *local_3fc;
  undefined1 *puStack_3f8;
  int local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Deserializes a full Game object from a stream, reading versioned fields,
                       players, play elements, cards, command objects, and turn state while
                       resolving RTTI-cast references. Returns false on failed read/assert paths. */
  puStack_3f8 = &LAB_016814a9;
  local_3fc = ExceptionList;
  local_8 = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = &stack0xfffff814;
  ExceptionList = &local_3fc;
  local_4b4 = stream;
  local_3f4._0_1_ = 0;
  local_3f4._1_3_ = 0;
  local_4e0 = this;
  Game_logGeneral((void *)((int)this + -0x10),"foo",local_8);
  item = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_404);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2011);
    ExceptionList = local_3fc;
    return false;
  }
  Game_logGeneral((void *)((int)this + -0x10),"foo1.1",item);
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 4));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2014);
    ExceptionList = local_3fc;
    return false;
  }
  FUN_0135ce40(*(undefined4 *)((int)this + 4));
  Game_logGeneral((void *)((int)this + -0x10),"foo1.2",item);
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x54));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2018);
    ExceptionList = local_3fc;
    return false;
  }
  if (local_404 < 0x19) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0xc));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x201b);
      ExceptionList = local_3fc;
      return false;
    }
  }
  Game_logGeneral((void *)((int)this + -0x10),"foo1.3",item);
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x104));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2021);
    ExceptionList = local_3fc;
    return false;
  }
  Game_logGeneral((void *)((int)this + -0x10),"foo1.7",item);
  bVar2 = Deserializer_readInteger(stream,&local_628);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2024);
    ExceptionList = local_3fc;
    return false;
  }
  *(bool *)((int)this + 0x108) = local_628 != 0;
  Game_logGeneral((void *)((int)this + -0x10),"foo1.8",item);
  bVar2 = Deserializer_readInteger(stream,&local_5c8);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2028);
    ExceptionList = local_3fc;
    return false;
  }
  *(bool *)((int)this + 0x120) = local_5c8 != 0;
  Game_logGeneral((void *)((int)this + -0x10),"foo1.9",item);
  bVar2 = Deserializer_readInteger(stream,&local_5b8);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x202c);
    ExceptionList = local_3fc;
    return false;
  }
  *(bool *)((int)this + 0x121) = local_5b8 != 0;
  bVar2 = Deserializer_readInteger(stream,&local_684);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2030);
    ExceptionList = local_3fc;
    return false;
  }
  *(bool *)((int)this + 0x13c) = local_684 != 0;
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x140));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2034);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x144));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2037);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x148));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x203a);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readInteger(stream,&local_610);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x203d);
    ExceptionList = local_3fc;
    return false;
  }
  *(bool *)((int)this + 0x16c) = local_610 != 0;
  bVar2 = Deserializer_readInteger(stream,&local_5bc);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2041);
    ExceptionList = local_3fc;
    return false;
  }
  *(bool *)((int)this + 0x16d) = local_5bc != 0;
  bVar2 = Deserializer_readInteger(stream,&local_5cc);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2045);
    ExceptionList = local_3fc;
    return false;
  }
  *(int *)((int)this + 0x170) = local_5cc;
  if (*(int *)((int)this + 0x124) == 0) {
    local_4c4 = Mem_Alloc(0x9cc);
    local_3f4._0_1_ = 1;
    if (local_4c4 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = MersenneTwister_ctor();
    }
    local_3f4._0_1_ = 0;
    *(undefined4 *)((int)this + 0x124) = uVar3;
  }
  MTRandom_seed(*(void **)((int)this + 0x124),*(uint *)((int)this + 0x170));
  if (*(int *)((int)this + 0x128) == 0) {
    local_4c4 = Mem_Alloc(0x9cc);
    local_3f4._0_1_ = 2;
    if (local_4c4 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = MersenneTwister_ctor();
    }
    local_3f4._0_1_ = 0;
    *(undefined4 *)((int)this + 0x128) = uVar3;
  }
  MTRandom_seed(*(void **)((int)this + 0x128),*(uint *)((int)this + 0x170));
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x178));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2051);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readInteger(stream,&local_62c);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2054);
    ExceptionList = local_3fc;
    return false;
  }
  *(int *)((int)this + 0x17c) = local_62c;
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x180));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2058);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readString(stream,(void *)((int)this + 0x184));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x205b);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x1b8));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x205e);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readInteger(stream,&local_5d0);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2061);
    ExceptionList = local_3fc;
    return false;
  }
  *(bool *)((int)this + 0x1c8) = local_5d0 != 0;
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x1d8));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2065);
    ExceptionList = local_3fc;
    return false;
  }
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x1dc));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2068);
    ExceptionList = local_3fc;
    return false;
  }
  local_4c8 = stream;
  Game_logGeneral((void *)((int)this + -0x10),"foo2",item);
  local_47c = stream;
  local_578 = stream;
  FUN_00420fb6();
  bVar2 = Deserializer_readIntegerVector(&local_47c,(void *)((int)this + 0x14c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2078);
    ExceptionList = local_3fc;
    return false;
  }
  if (*(char *)((int)this + 0x2f4) == '\0') {
    FUN_00420fb6();
    bVar2 = Deserializer_readIntegerVector(&local_47c,(void *)((int)this + 0x15c));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x207d);
      ExceptionList = local_3fc;
      return false;
    }
  }
  else {
    local_534 = 0;
    local_530 = 0;
    local_52c = 0;
    local_3f4._0_1_ = 3;
    bVar2 = Deserializer_readIntegerVector(&local_47c,local_538);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2086);
      local_3f4 = (uint)local_3f4._1_3_ << 8;
      StdVector_clearStorage(local_538);
      ExceptionList = local_3fc;
      return false;
    }
    local_3f4._0_1_ = 0;
    StdVector_clearStorage(local_538);
  }
  local_460 = 0;
  local_45c = 0;
  local_458 = 0;
  local_450 = 0;
  local_44c = 0;
  local_448 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_3f4._0_1_ = 6;
  bVar2 = Deserializer_readIntegerVector(&local_47c,local_464);
  if (bVar2) {
    bVar2 = Deserializer_readIntegerVector(&local_47c,local_454);
    if (bVar2) {
      bVar2 = Deserializer_readIntegerVector(&local_47c,local_444);
      if (bVar2) {
        FUN_005258fb();
        local_3f4._0_1_ = 7;
        uVar4 = Game_deserializeIntPairVector_0135d6e0(&local_578,local_410);
        if ((char)uVar4 == '\0') {
          FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2095);
          local_3f4._0_1_ = 6;
          FUN_00521a9c();
          goto LAB_01375e22;
        }
        Game_logGeneral((void *)((int)this + -0x10),"foo3",item);
        local_59c = 0;
        local_524 = 0;
        puVar5 = (undefined4 *)FUN_01269090(local_4b0);
        local_524 = *puVar5;
        local_520 = puVar5[1];
        puVar5 = (undefined4 *)FUN_01269060(local_4b0);
        local_59c = *puVar5;
        local_598 = puVar5[1];
        while (cVar1 = FUN_01268ea0(&local_524), cVar1 != '\0') {
          piVar6 = (int *)FUN_01268e40();
          if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar6)(1);
          }
          FUN_0132e500(local_4b0,0);
        }
        FUN_01356b70();
        local_4dc = 0;
        local_55c = 0;
        puVar5 = (undefined4 *)FUN_0041f5d2(local_4b0);
        local_55c = *puVar5;
        local_558 = puVar5[1];
        puVar5 = (undefined4 *)FUN_0041f3a1(local_4b0);
        local_4dc = *puVar5;
        local_4d8 = puVar5[1];
        while (cVar1 = FUN_00416f86(&local_55c), cVar1 != '\0') {
          local_5a4 = 0;
          pvVar7 = (void *)FUN_01240910();
          StdRbTreeInt_find(local_410,local_4b0,pvVar7,(int *)item);
          local_5a4 = *extraout_EAX;
          local_5a0 = extraout_EAX[1];
          local_518 = (void *)0x0;
          local_634 = local_40c;
          local_638 = local_410;
          bVar2 = CheckedTreeIterator_notEquals(&local_5a4,&local_638);
          if (bVar2) {
            ComponentFactory_initSingleton();
            local_498 = (undefined4 *)*extraout_EAX_00;
            iVar8 = CheckedTreeIterator_derefValue_nodeFlag15();
            uVar3 = (*(code *)*local_498)(*(undefined4 *)(iVar8 + 4));
            pvVar7 = (void *)FUN_00d8d382(uVar3,0,&PersistentComponent::RTTI_Type_Descriptor,
                                          &Player::RTTI_Type_Descriptor,0);
            local_518 = pvVar7;
            if (pvVar7 == (void *)0x0) goto LAB_0137609b;
          }
          else {
LAB_0137609b:
            local_4c4 = Mem_Alloc(0x4c);
            local_3f4._0_1_ = 8;
            if (local_4c4 == (undefined4 *)0x0) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = Player_ctor(local_4c4);
            }
            local_3f4._0_1_ = 7;
          }
          local_518 = pvVar7;
          piVar6 = (int *)FUN_01240910();
          local_4c0 = (undefined4 *)*piVar6;
          PlayElement_setField34_01344e90(pvVar7,(int)local_4c0);
          if ((local_4c0 != (undefined4 *)0x0) &&
             (iVar8 = StdVector_size((void *)((int)this + 0x15c)), (int)local_4c0 <= iVar8)) {
            puVar5 = StdVector_atElementPtr4((void *)((int)this + 0x15c),(int)local_4c0 + -1);
            GamePlayer_setAccountId(*puVar5);
          }
          StateMachine_setCurrentState(pvVar7,(void *)((int)this + -0x10));
          PlayElement_setField3C(pvVar7,*(int *)((int)this + 4));
          local_4d4 = PlayArea_findPlayerElementById((void *)((int)this + -0x10),(int)local_4c0);
          if (local_4d4 != (undefined4 *)0x0) {
            local_498 = (undefined4 *)FUN_01269090(local_594);
            puVar5 = (undefined4 *)FUN_01269060(local_508);
            StdFind_dword_returnPair
                      (&local_524,(void *)*puVar5,(int *)puVar5[1],(void *)*local_498,
                       (int *)local_498[1],(int *)&local_4d4);
            uVar3 = FUN_01269090(local_5ac);
            cVar1 = FUN_01268ea0(uVar3);
            if (cVar1 != '\0') {
              FUN_01331280(local_5e0,local_524,local_520);
            }
            (**(code **)*local_4d4)(1);
          }
          FUN_01336350(&local_518);
          FUN_012fb740(local_6d4,0);
          stream = local_4b4;
        }
        local_564 = 0;
        local_5e8 = 0;
        puVar5 = (undefined4 *)FUN_0041f5d2(local_4b0);
        local_5e8 = *puVar5;
        local_5e4 = puVar5[1];
        puVar5 = (undefined4 *)FUN_0041f5d2(local_4b0);
        local_55c = *puVar5;
        local_558 = puVar5[1];
        puVar5 = (undefined4 *)FUN_0041f3a1(local_4b0);
        local_564 = *puVar5;
        local_560 = puVar5[1];
        puVar5 = (undefined4 *)FUN_0041f3a1(local_4b0);
        local_4dc = *puVar5;
        local_4d8 = puVar5[1];
        while ((cVar1 = FUN_00416f86(&local_55c), cVar1 != '\0' &&
               (cVar1 = FUN_00416f86(&local_5e8), cVar1 != '\0'))) {
          local_4d4 = (undefined4 *)FUN_01240910();
          local_4d4 = (undefined4 *)*local_4d4;
          local_498 = (undefined4 *)FUN_01240910();
          local_498 = (undefined4 *)*local_498;
          local_588 = 0;
          local_668 = 0;
          puVar5 = (undefined4 *)FUN_01269090(local_4b0);
          local_668 = *puVar5;
          local_664 = puVar5[1];
          puVar5 = (undefined4 *)FUN_01269060(local_594);
          local_588 = *puVar5;
          local_584 = puVar5[1];
          while (cVar1 = FUN_01268ea0(&local_668), cVar1 != '\0') {
            piVar6 = (int *)CheckedIndexIterator_getIndex(&local_588);
            if ((*piVar6 != 0) &&
               (puVar5 = (undefined4 *)GamePlayer_getPlayerId(), local_4d4 == puVar5))
            goto LAB_013763f5;
            CheckedBufferIterator_postIncrement4(&local_588,local_508);
          }
          pvVar7 = (void *)(**(code **)(*(int *)((int)this + -0x10) + 0x1cc))();
          local_4bc = pvVar7;
          PlayElement_setField34_01344e90(pvVar7,(int)local_4d4);
          GamePlayer_setAccountId(local_498);
          StateMachine_setCurrentState(pvVar7,(void *)((int)this + -0x10));
          PlayElement_setField3C(pvVar7,*(int *)((int)this + 4));
          FUN_01336350(&local_4bc);
LAB_013763f5:
          FUN_012fb740(local_5ac,0);
          FUN_012fb740(local_5e0,0);
          stream = local_4b4;
        }
        Game_logGeneral((void *)((int)this + -0x10),"foo4",item);
        local_4b8 = stream;
        FUN_01365f40();
        local_3f4._0_1_ = 9;
        cVar1 = FUN_0135d780(local_41c);
        if (cVar1 == '\0') {
          uVar3 = 0x20f6;
LAB_01376461:
          FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",uVar3);
        }
        else {
          local_4c0 = stream;
          uVar4 = Game_deserializeIntBoolMap_0135d8b0(&local_4c0);
          if ((char)uVar4 == '\0') {
            uVar3 = 0x20fc;
            goto LAB_01376461;
          }
          RbTree_clearForGameMap((void *)((int)this + 0x1cc));
          uVar4 = Game_deserializeIntBoolMap_0135d8b0(&local_4c0);
          if ((char)uVar4 == '\0') {
            uVar3 = 0x2100;
            goto LAB_01376461;
          }
          FUN_005258fb();
          local_3f4 = CONCAT31(local_3f4._1_3_,10);
          local_58c = stream;
          uVar4 = Game_deserializeIntPairVector_01300190(&local_58c,local_434);
          if ((char)uVar4 == '\0') {
            uVar3 = 0x2108;
LAB_01376505:
            FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",uVar3);
            local_3f4._0_1_ = 9;
            FUN_00521a9c();
          }
          else {
            Game_logGeneral((void *)((int)this + -0x10),"foo5",item);
            local_714 = local_434;
            local_5f0 = local_430;
            local_4ec = *local_430;
            local_70c = local_714;
            local_5f4 = local_714;
            local_4f0 = local_714;
            while (bVar2 = CheckedTreeIterator_notEquals(&local_4f0,&local_5f4), bVar2) {
              iVar8 = CheckedTreeIterator_derefValue_nodeFlag15();
              uVar3 = *(undefined4 *)(iVar8 + 4);
              ComponentFactory_initSingleton();
              uVar3 = (**(code **)*extraout_EAX_01)(uVar3);
              pvVar7 = (void *)FUN_00d8d382(uVar3,0,&PersistentComponent::RTTI_Type_Descriptor,
                                            &PlayElement::RTTI_Type_Descriptor,0);
              if (pvVar7 == (void *)0x0) {
                uVar3 = 0x2112;
                goto LAB_01376505;
              }
              piVar6 = (int *)CheckedTreeIterator_derefValue_nodeFlag15();
              PlayElement_setField34(pvVar7,*piVar6);
              PlayElement_setField30(pvVar7,(int)this + -0x10);
              PlayElement_setField2C(pvVar7,*(int *)((int)this + 4));
              local_600 = 0;
              src = (void *)CheckedTreeIterator_derefValue_nodeFlag15();
              puVar5 = RbTree_copyOrAssignWrapper(local_4b0,src);
              local_600 = *puVar5;
              local_5fc = puVar5[1];
              local_644 = (int)this + 0x70;
              local_640 = *(undefined4 *)((int)this + 0x74);
              cVar1 = FUN_0132e750(&local_644);
              if (cVar1 != '\0') {
                uVar3 = CheckedTreeIterator_derefValue_nodeFlag15();
                piVar6 = (int *)Game_IntMap_findOrInsertValueSlot(uVar3);
                if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
                  (*(code *)**(undefined4 **)*piVar6)(1);
                }
              }
              uVar3 = CheckedTreeIterator_derefValue_nodeFlag15();
              puVar5 = (undefined4 *)Game_IntMap_findOrInsertValueSlot(uVar3);
              *puVar5 = pvVar7;
              FUN_004d21f9();
              stream = local_4b4;
            }
            Game_logGeneral((void *)((int)this + -0x10),"foo6",item);
            FUN_01365f40();
            local_3f4 = CONCAT31(local_3f4._1_3_,0xb);
            cVar1 = FUN_0135d780(local_428);
            if (cVar1 == '\0') {
              uVar3 = 0x2122;
LAB_013766e9:
              FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",uVar3);
            }
            else {
              local_734 = local_428;
              local_4e4 = local_424;
              local_474 = *local_424;
              local_724 = local_734;
              local_4e8 = local_734;
              local_478 = local_734;
              while (cVar1 = FUN_0134dbd0(&local_4e8), cVar1 != '\0') {
                FUN_01351470();
                local_4b8 = find_play_element_in_maps((void *)((int)this + -0x10),elementId_);
                if (local_4b8 == (undefined4 *)0x0) {
                  uVar3 = 0x212a;
                  goto LAB_013766e9;
                }
                iVar8 = FUN_00d8d382(local_4b8,0,&PlayElement::RTTI_Type_Descriptor,
                                     &Card::RTTI_Type_Descriptor,0);
                if (iVar8 != 0) {
                  PacketBuffer_init(local_53c);
                  local_3f4 = CONCAT31(local_3f4._1_3_,0xc);
                  iVar8 = FUN_01351470();
                  local_4bc = *(void **)(iVar8 + 4);
                  iVar8 = FUN_01351470();
                  RawBuffer_assign(local_53c,local_4bc,*(void **)(iVar8 + 8),(uint)item);
                  iVar8 = FUN_01351470();
                    /* WARNING: Subroutine does not return */
                  _free(*(void **)(iVar8 + 4));
                }
                FUN_0134f3a0();
              }
              local_73c = local_428;
              local_4e4 = local_424;
              local_474 = *local_424;
              local_71c = local_73c;
              local_4e8 = local_73c;
              local_478 = local_73c;
              while (cVar1 = FUN_0134dbd0(&local_4e8), cVar1 != '\0') {
                FUN_01351470();
                pvVar7 = find_play_element_in_maps((void *)((int)this + -0x10),elementId__00);
                if (pvVar7 == (void *)0x0) {
                  uVar3 = 0x213f;
                  goto LAB_013766e9;
                }
                iVar8 = FUN_00d8d382(pvVar7,0,&PlayElement::RTTI_Type_Descriptor,
                                     &Card::RTTI_Type_Descriptor,0);
                if (iVar8 == 0) {
                  PacketBuffer_init(local_53c);
                  local_3f4 = CONCAT31(local_3f4._1_3_,0xd);
                  iVar8 = FUN_01351470();
                  local_4bc = *(void **)(iVar8 + 4);
                  iVar8 = FUN_01351470();
                  RawBuffer_assign(local_53c,local_4bc,*(void **)(iVar8 + 8),(uint)item);
                  iVar8 = FUN_01351470();
                    /* WARNING: Subroutine does not return */
                  _free(*(void **)(iVar8 + 4));
                }
                FUN_0134f3a0();
                stream = local_4b4;
              }
              Game_logGeneral((void *)((int)this + -0x10),"foo7",item);
              local_748 = local_41c;
              local_4e4 = local_418;
              local_474 = *local_418;
              local_72c = local_748;
              local_4e8 = local_748;
              local_478 = local_748;
              cVar1 = FUN_0134dbd0(&local_4e8);
              if (cVar1 != '\0') {
                piVar6 = (int *)FUN_01351470();
                pvVar7 = PlayArea_findPlayerElementById((void *)((int)this + -0x10),*piVar6);
                if (pvVar7 != (void *)0x0) {
                  PacketBuffer_init(local_53c);
                  local_3f4 = CONCAT31(local_3f4._1_3_,0xe);
                  iVar8 = FUN_01351470();
                  local_4bc = *(void **)(iVar8 + 4);
                  iVar8 = FUN_01351470();
                  RawBuffer_assign(local_53c,local_4bc,*(void **)(iVar8 + 8),(uint)item);
                  iVar8 = FUN_01351470();
                    /* WARNING: Subroutine does not return */
                  _free(*(void **)(iVar8 + 4));
                }
                uVar3 = 0x2155;
                goto LAB_013766e9;
              }
              Game_logGeneral((void *)((int)this + -0x10),"foo8",item);
              Deserializer_readInteger(stream,&local_5ec);
              if (local_5ec != 99999) {
                FUN_012f5a60("foo == 99999","..\\common\\common\\game\\Game.cpp",0x2166);
              }
              local_604 = stream;
              Game_CommandTree_ctor((int)local_470);
              local_3f4._0_1_ = 0xf;
              Card_AttributeModifierTree_clear((int)this + -0xc);
              uVar4 = Game_IntKeyTree_deserialize(&local_604,local_470);
              if ((char)uVar4 == '\0') {
                FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2174);
                local_3f4 = CONCAT31(local_3f4._1_3_,0xb);
                Game_CommandTree_dtor((int)local_470);
              }
              else {
                local_6d4[0] = local_470;
                local_678 = local_46c;
                local_4fc = *local_46c;
                local_67c = local_6d4[0];
                local_5e0[0] = local_6d4[0];
                local_500 = local_6d4[0];
                while (bVar2 = CheckedIterator_notEqual2(&local_500,(int *)&local_67c,(int *)item),
                      bVar2) {
                  local_4d0 = 0;
                  local_60c = 0;
                  ppuVar13 = local_4b0;
                  CheckedIterator12_deref_B((int *)&local_500);
                  piVar6 = (int *)FUN_01303500(ppuVar13);
                  local_60c = *piVar6;
                  local_608 = piVar6[1];
                  local_6b0 = 0;
                  local_6ac = 0;
                  local_6a8 = 0;
                  local_3f4 = CONCAT31(local_3f4._1_3_,0x10);
                  ppuVar13 = local_594;
                  CheckedIterator12_deref_B((int *)&local_500);
                  puVar5 = (undefined4 *)FUN_013034a0(ppuVar13);
                  local_4d0 = *puVar5;
                  local_4cc = puVar5[1];
                  while (bVar2 = CheckedIterator_notEqual(&local_4d0,&local_60c,(int *)item), bVar2)
                  {
                    piVar6 = (int *)FUN_013514f0();
                    uVar11 = 0;
                    pTVar10 = &Card::RTTI_Type_Descriptor;
                    pTVar9 = &PlayElement::RTTI_Type_Descriptor;
                    uVar3 = 0;
                    pvVar7 = find_play_element_in_maps((void *)((int)this + -0x10),*piVar6);
                    pvVar7 = (void *)FUN_00d8d382(pvVar7,uVar3,pTVar9,pTVar10,uVar11);
                    if (pvVar7 == (void *)0x0) {
                      FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x2180);
                      local_3f4._0_1_ = 0xf;
                      StdVector_clearAndFreeStorage_01332730(local_6b4);
                      local_3f4 = CONCAT31(local_3f4._1_3_,0xb);
                      Game_CommandTree_dtor((int)local_470);
                      goto LAB_013766fb;
                    }
                    FUN_013514f0();
                    local_4b8 = Card_getActionByID(pvVar7,actionId_);
                    if (local_4b8 == (undefined4 *)0x0) {
                      uVar3 = *(undefined4 *)((int)this + 0x10);
                      iVar8 = FUN_013514f0(uVar3);
                      uVar11 = *(undefined4 *)(iVar8 + 4);
                      ActionDB_ensureSingleton();
                      local_4b8 = (undefined4 *)ActionDB_getAction(uVar11,uVar3);
                      if (local_4b8 != (undefined4 *)0x0) goto LAB_01376dc1;
                      iVar8 = FUN_013514f0();
                      iVar8 = FUN_013514f0(*(undefined4 *)(iVar8 + 8));
                      uVar3 = PackedActionId_getLow12Bits(*(undefined4 *)(iVar8 + 4));
                      iVar8 = FUN_013514f0(uVar3);
                      uVar3 = PackedActionId_getHighBits(*(undefined4 *)(iVar8 + 4));
                      Game_logGeneral((void *)((int)this + -0x10),
                                      "Couldn\'t get action for actionID: %d (%d), %d",uVar3);
                    }
                    else {
LAB_01376dc1:
                      iVar8 = FUN_013514f0();
                      local_6fc = *(undefined4 *)(iVar8 + 8);
                      local_4f8[0] = local_4b8;
                      local_700 = local_4b8;
                      local_704 = pvVar7;
                      FUN_01336520(&local_704);
                    }
                    FUN_01351520(local_508,0);
                    stream = local_4b4;
                  }
                  pvVar7 = CheckedIterator12_deref_B((int *)&local_500);
                  local_5d4 = *(undefined4 *)((int)pvVar7 + 4);
                  puVar5 = CheckedIterator12_deref_B((int *)&local_500);
                  local_5d8 = *puVar5;
                  puVar5 = (undefined4 *)FUN_01361b30(&local_5d4,local_6b4);
                  local_3f4._0_1_ = 0x11;
                  puVar5 = Game_PlayElementRange_copyFromMember(local_6cc,&local_5d8,puVar5,item);
                  local_3f4._0_1_ = 0x12;
                  Game_PlayElementRange_copyConstruct2(local_6a0,puVar5,item);
                  local_3f4._0_1_ = 0x13;
                  Game_IntKeyTree_findIterator(local_5ac,local_6a0);
                  local_3f4._0_1_ = 0x12;
                  VectorBuffer8_ehDtor_C();
                  local_3f4._0_1_ = 0x11;
                  VectorBuffer8_ehDtor_B();
                  local_3f4._0_1_ = 0x10;
                  FUN_0135abf0();
                  local_3f4._0_1_ = 0xf;
                  StdVector_clearAndFreeStorage_01332730(local_6b4);
                  RbTreeIterator25_increment((int *)&local_500);
                }
                Game_logGeneral((void *)((int)this + -0x10),"foo9",item);
                Game_ArchivedTurnTree_ctor((int)local_494);
                local_4a4 = 0;
                local_4a0 = 0;
                local_49c = 0;
                local_3f4 = CONCAT31(local_3f4._1_3_,0x15);
                bVar2 = Deserializer_readIntegerVector(&local_47c,local_4a8);
                if (bVar2) {
                  local_56c = 0;
                  local_650 = 0;
                  puVar5 = (undefined4 *)FUN_0041f5d2(local_4f8);
                  local_650 = *puVar5;
                  local_64c = puVar5[1];
                  puVar5 = (undefined4 *)FUN_0041f3a1(local_4b0);
                  local_56c = *puVar5;
                  local_568 = puVar5[1];
                  while (cVar1 = FUN_00416f86(&local_650), cVar1 != '\0') {
                    piVar6 = (int *)FUN_01240910();
                    uVar11 = 0;
                    pTVar10 = &Card::RTTI_Type_Descriptor;
                    pTVar9 = &PlayElement::RTTI_Type_Descriptor;
                    uVar3 = 0;
                    pvVar7 = find_play_element_in_maps((void *)((int)this + -0x10),*piVar6);
                    local_5f8 = FUN_00d8d382(pvVar7,uVar3,pTVar9,pTVar10,uVar11);
                    if (local_5f8 == 0) {
                      uVar3 = 0x21a4;
                      goto LAB_01376f3b;
                    }
                    PointerVector_pushBack((void *)((int)this + 0x1a0),&local_5f8,item);
                    FUN_012fb740(local_4f8,0);
                  }
                  Game_logGeneral((void *)((int)this + -0x10),"foo10",item);
                  FUN_00420fb6();
                  bVar2 = Deserializer_readIntegerVector(&local_47c,(void *)((int)this + 0x10c));
                  if (!bVar2) {
                    uVar3 = 0x21ac;
                    goto LAB_01376f3b;
                  }
                  local_51c = stream;
                  FUN_0133f1f0();
                  local_3f4 = CONCAT31(local_3f4._1_3_,0x16);
                  cVar1 = Game_deserializeObjectRecordList(&local_488);
                  if (cVar1 == '\0') {
                    uVar3 = 0x21b5;
LAB_013770b8:
                    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",uVar3);
                    local_3f4 = CONCAT31(local_3f4._1_3_,0x15);
                    FUN_0133e600();
                  }
                  else {
                    local_618 = &local_488;
                    local_614 = local_484;
                    local_510 = *local_484;
                    local_5ac[0] = local_618;
                    local_514 = local_618;
                    local_508[0] = local_618;
                    while (bVar2 = CheckedBufferIterator_notEqual
                                             (&local_514,(int *)&local_618,(int *)item), bVar2) {
                      local_54c = 0;
                      local_5b4 = 0;
                      local_6c0 = 0;
                      local_6bc = 0;
                      local_6b8 = 0;
                      local_3f4 = CONCAT31(local_3f4._1_3_,0x17);
                      ppuVar12 = local_4f8;
                      CheckedIterator12_deref((int *)&local_514);
                      puVar5 = (undefined4 *)FUN_004fa96b(ppuVar12);
                      local_5b4 = *puVar5;
                      local_5b0 = puVar5[1];
                      ppuVar13 = local_4b0;
                      CheckedIterator12_deref((int *)&local_514);
                      piVar6 = (int *)FUN_004fa957(ppuVar13);
                      local_54c = *piVar6;
                      local_548 = piVar6[1];
                      while (bVar2 = CheckedTreeIterator_notAtEnd_alt(&local_5b4), bVar2) {
                        piVar6 = (int *)CheckedArrayIterator8_get(&local_54c);
                        uVar11 = 0;
                        pTVar10 = &Card::RTTI_Type_Descriptor;
                        pTVar9 = &PlayElement::RTTI_Type_Descriptor;
                        uVar3 = 0;
                        pvVar7 = find_play_element_in_maps((void *)((int)this + -0x10),*piVar6);
                        local_51c = (undefined4 *)FUN_00d8d382(pvVar7,uVar3,pTVar9,pTVar10,uVar11);
                        if (local_51c == (undefined4 *)0x0) {
                          uVar3 = 0x21c0;
LAB_01377226:
                          FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",uVar3);
                          local_3f4._0_1_ = 0x16;
                          EmbeddedVector_clearAt04(local_6c4);
                          local_3f4 = CONCAT31(local_3f4._1_3_,0x15);
                          FUN_0133e600();
                          goto LAB_01376f4d;
                        }
                        uVar11 = 0;
                        pTVar10 = &CommandObject::RTTI_Type_Descriptor;
                        pTVar9 = &PlayElement::RTTI_Type_Descriptor;
                        uVar3 = 0;
                        CheckedArrayIterator8_get(&local_54c);
                        pvVar7 = find_play_element_in_maps
                                           ((void *)((int)this + -0x10),elementId__01);
                        iVar8 = FUN_00d8d382(pvVar7,uVar3,pTVar9,pTVar10,uVar11);
                        if (iVar8 == 0) {
                          uVar3 = 0x21c4;
                          goto LAB_01377226;
                        }
                        local_6dc = local_51c;
                        local_6d8 = iVar8;
                        FUN_01361a10(&local_6dc);
                        CheckedArrayIterator8_postIncrement(&local_54c,(int *)local_594,(int *)0x0);
                        stream = local_4b4;
                      }
                      puVar5 = CheckedIterator12_deref((int *)&local_514);
                      local_61c = *puVar5;
                      puVar14 = local_6c4;
                      Game_IntKeyTree_getOrInsertRecord(&local_61c);
                      FUN_0135d5b0(puVar14);
                      local_3f4 = CONCAT31(local_3f4._1_3_,0x16);
                      EmbeddedVector_clearAt04(local_6c4);
                      CheckedBufferIterator_postIncrement(&local_514,local_508);
                    }
                    Game_logGeneral((void *)((int)this + -0x10),"foo13",item);
                    if (*(undefined4 **)((int)this + 0x58) != (undefined4 *)0x0) {
                      (**(code **)**(undefined4 **)((int)this + 0x58))(1);
                      *(undefined4 *)((int)this + 0x58) = 0;
                    }
                    if (*(int *)((int)this + 0x58) == 0) {
                      pvVar7 = (void *)(**(code **)(*(int *)((int)this + -0x10) + 0x14))();
                      *(void **)((int)this + 0x58) = pvVar7;
                      set_field_4(pvVar7,(int)this - 0x10);
                    }
                    cVar1 = (**(code **)(**(int **)((int)this + 0x58) + 0x24))(stream);
                    if (cVar1 == '\0') {
                      uVar3 = 0x21d6;
                      goto LAB_013770b8;
                    }
                    if (1 < local_404) {
                      local_528 = stream;
                      Game_RbTree_clearNodes21((int)this + 0x1f0);
                      cVar1 = Game_deserializeNestedRecordList((int)this + 0x1f0);
                      if (cVar1 == '\0') {
                        uVar3 = 0x21de;
                        goto LAB_013770b8;
                      }
                    }
                    if (2 < local_404) {
                      FUN_00420fb6();
                      bVar2 = Deserializer_readIntegerVector(&local_47c,(void *)((int)this + 0x20c))
                      ;
                      if (!bVar2) {
                        uVar3 = 0x21e4;
                        goto LAB_013770b8;
                      }
                    }
                    if (4 < local_404) {
                      FUN_004fb6c2();
                      uVar4 = Game_deserializeIntPairVector_01300190
                                        (&local_4c8,(void *)((int)this + 0x220));
                      if ((char)uVar4 == '\0') {
                        uVar3 = 0x21e9;
                      }
                      else {
                        FUN_004fb6c2();
                        uVar4 = Game_deserializeIntPairVector_01300190
                                          (&local_4c8,(void *)((int)this + 0x238));
                        if ((char)uVar4 != '\0') goto LAB_0137744a;
                        uVar3 = 0x21ed;
                      }
                      goto LAB_013770b8;
                    }
LAB_0137744a:
                    if ((5 < local_404) &&
                       (bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x234)), !bVar2)
                       ) {
                      uVar3 = 0x21f2;
                      goto LAB_013770b8;
                    }
                    if (6 < local_404) {
                      bVar2 = Deserializer_readInteger(stream,&local_630);
                      if (!bVar2) {
                        uVar3 = 0x21f6;
                        goto LAB_013770b8;
                      }
                      *(bool *)((int)this + 0x254) = local_630 != 0;
                    }
                    if (local_404 < 8) {
LAB_013775c6:
                      if (9 < local_404) {
                        bVar2 = Deserializer_readInteger(stream,&local_63c);
                        if (!bVar2) {
                          uVar3 = 0x2205;
                          goto LAB_013770b8;
                        }
                        *(int *)((int)this + 0x278) = local_63c;
                      }
                      if (10 < local_404) {
                        FUN_004fb6c2();
                        uVar4 = Game_deserializeIntPairVector_01300190
                                          (&local_4c8,(void *)((int)this + 0x28c));
                        if ((char)uVar4 == '\0') {
                          uVar3 = 0x220b;
                          goto LAB_013770b8;
                        }
                      }
                      if ((local_404 < 0xc) ||
                         (bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x29c)), bVar2
                         )) {
                        if (0xc < local_404) {
                          FUN_004fb6c2();
                          uVar4 = Game_deserializeIntPairVector_01300190
                                            (&local_4c8,(void *)((int)this + 0x2a0));
                          if ((char)uVar4 == '\0') {
                            uVar3 = 0x2215;
                            goto LAB_013770b8;
                          }
                        }
                        if (0xd < local_404) {
                          FUN_004fb6c2();
                          uVar4 = Game_deserializeIntPairVector_01300190
                                            (&local_4c8,(void *)((int)this + 0x2ac));
                          if ((char)uVar4 == '\0') {
                            uVar3 = 0x221a;
                            goto LAB_013770b8;
                          }
                        }
                        if (local_404 < 0xf) {
LAB_01377708:
                          if (0xf < local_404) {
                            FUN_00420fb6();
                            bVar2 = Deserializer_readIntegerVector
                                              (&local_47c,(void *)((int)this + 0x2c8));
                            if (!bVar2) {
                              uVar3 = 0x222c;
                              goto LAB_013770b8;
                            }
                          }
                          if ((local_404 < 0x12) ||
                             (bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x2d8)),
                             bVar2)) {
                            if ((local_404 < 0x15) ||
                               (bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x2dc)),
                               bVar2)) {
                              FUN_004fb6c2();
                              uVar4 = Game_deserializeIntPairVector_0135d6e0
                                                (&local_578,(void *)((int)this + 0xbc));
                              if ((char)uVar4 == '\0') {
                                uVar3 = 0x223b;
                              }
                              else {
                                bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x2f8));
                                if (bVar2) {
                                  local_660 = stream;
                                  FUN_004fb6c2();
                                  uVar4 = Game_deserializeIntPairVector_01300190
                                                    (&local_660,(void *)((int)this + 0x2fc));
                                  if ((char)uVar4 == '\0') {
                                    uVar3 = 0x2244;
                                  }
                                  else {
                                    if (0x19 < local_404) {
                                      FUN_00420fb6();
                                      bVar2 = Deserializer_readIntegerVector
                                                        (&local_47c,(void *)((int)this + 0x24));
                                      if (!bVar2) {
                                        uVar3 = 0x2249;
                                        goto LAB_013770b8;
                                      }
                                    }
                                    if (local_404 < 0x1d) {
LAB_01377882:
                                      if (local_404 < 0x1f) {
                                        pvVar7 = GameTurn_getCurrentStateMachine
                                                           (*(void **)((int)this + 0x58));
                                        *(void **)((int)this + 0x31c) = pvVar7;
                                      }
                                      else {
                                        bVar2 = ComponentFactory_deserializeObjectPointer
                                                          (stream,(void **)((int)this + 0x31c));
                                        if (!bVar2) {
                                          FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",
                                                       0x225d);
                                        }
                                        GameTurn_setTurnNumber(*(undefined4 *)((int)this + 0x31c));
                                      }
                                      if (0x1f < local_404) {
                                        bVar2 = Deserializer_readInteger(stream,&local_680);
                                        if (!bVar2) {
                                          FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",
                                                       0x2263);
                                        }
                                        *(int *)((int)this + 0x33c) = local_680;
                                      }
                                      if (0x24 < local_404) {
                                        local_694 = 0;
                                        local_690 = 0;
                                        local_68c = 0;
                                        local_3f4 = CONCAT31(local_3f4._1_3_,0x19);
                                        bVar2 = Deserializer_readIntegerVector(&local_47c,local_698)
                                        ;
                                        if (!bVar2) {
                                          FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",
                                                       0x226a);
                                        }
                                        local_574 = 0;
                                        local_65c = 0;
                                        puVar5 = (undefined4 *)FUN_0041f5d2(local_4f8);
                                        local_65c = *puVar5;
                                        local_658 = puVar5[1];
                                        FUN_01356b70();
                                        puVar5 = (undefined4 *)FUN_0041f3a1(local_4b0);
                                        local_574 = *puVar5;
                                        local_570 = puVar5[1];
                                        while (cVar1 = FUN_00416f86(&local_65c), cVar1 != '\0') {
                                          piVar6 = (int *)BinaryStreamCursor_checkReadableDword
                                                                    (&local_574);
                                          local_688 = PlayArea_findPlayerElementById
                                                                ((void *)((int)this + -0x10),*piVar6
                                                                );
                                          if (local_688 != (void *)0x0) {
                                            FUN_01336350(&local_688);
                                          }
                                          BinaryStreamCursor_readDwordCursor
                                                    (&local_574,local_4f8,(void *)0x0);
                                        }
                                        local_3f4 = CONCAT31(local_3f4._1_3_,0x16);
                                        StdVector_clearStorage(local_698);
                                      }
                                      if ((0x2a < local_404) &&
                                         (bVar2 = Deserializer_readInteger
                                                            (stream,(int *)((int)this + 0x374)),
                                         !bVar2)) {
                                        FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",
                                                     0x2279);
                                      }
                                      if (0x2e < local_404) {
                                        local_4c4 = stream;
                                        RbTree_clearForGameMap((void *)((int)this + 0x248));
                                        uVar4 = Game_deserializeIntBoolMap_0135d9e0(&local_4c4);
                                        if ((char)uVar4 == '\0') {
                                          FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",
                                                       0x2281);
                                        }
                                      }
                                      if (0x2f < local_404) {
                                        bVar2 = Deserializer_readInteger(stream,(int *)&local_4c4);
                                        if (!bVar2) {
                                          uVar3 = 0x2287;
                                          goto LAB_013770b8;
                                        }
                                        *(bool *)((int)this + 0x37a) =
                                             local_4c4 != (undefined4 *)0x0;
                                      }
                                      if (local_404 < 0x31) {
LAB_01377b1d:
                                        if (0x32 < local_404) {
                                          local_498 = (undefined4 *)0x0;
                                          bVar2 = Deserializer_readInteger(stream,(int *)&local_498)
                                          ;
                                          if (!bVar2) {
                                            uVar3 = 0x2297;
                                            goto LAB_013770b8;
                                          }
                                          *(bool *)((int)this + 0x352) =
                                               local_498 == (undefined4 *)0x1;
                                        }
                                        if ((local_404 < 0x34) ||
                                           (bVar2 = Deserializer_readInteger
                                                              (stream,(int *)((int)this + 0x10)),
                                           bVar2)) {
                                          local_6e8 = 0;
                                          local_6e4 = 0;
                                          local_6e0 = 0;
                                          local_3f4 = CONCAT31(local_3f4._1_3_,0x1a);
                                          puVar14 = local_6ec;
                                          (**(code **)(*(int *)((int)this + -0x10) + 0x144))();
                                          local_580 = 0;
                                          local_5c4 = 0;
                                          puVar5 = (undefined4 *)FUN_01258ef0(local_4f8);
                                          local_5c4 = *puVar5;
                                          local_5c0 = puVar5[1];
                                          puVar5 = (undefined4 *)FUN_01258ec0(local_4b0);
                                          local_580 = *puVar5;
                                          local_57c = puVar5[1];
                                          while (cVar1 = FUN_012586d0(&local_5c4), cVar1 != '\0') {
                                            puVar5 = (undefined4 *)FUN_01258670();
                                            piVar6 = (int *)*puVar5;
                                            if (piVar6 != (int *)0x0) {
                                              EvaluationEnvironment_ctor();
                                              local_3f4._0_1_ = 0x1b;
                                              EvaluationEnvironment_setGame((int)this + -0x10);
                                              set_play_element_id_field(local_7dc,piVar6);
                                              iVar8 = (**(code **)(*piVar6 + 0x28))();
                                              pvVar7 = PlayArea_findPlayerElementById
                                                                 ((void *)((int)this + -0x10),iVar8)
                                              ;
                                              FUN_013815b0(pvVar7);
                                              Card_callWithSuppressNotifications(local_7dc);
                                              local_3f4 = CONCAT31(local_3f4._1_3_,0x1a);
                                              FUN_01385460();
                                            }
                                            PointerVectorIterator_postIncrement
                                                      (&local_580,(int *)local_4f8,(int *)0x0);
                                          }
                                          Game_logGeneral((void *)((int)this + -0x10),"foo14",
                                                          puVar14);
                                          local_3f4._0_1_ = 0x16;
                                          STLVector_int_clear(local_6ec);
                                          local_3f4._0_1_ = 0x15;
                                          FUN_0133e600();
                                          local_3f4._0_1_ = 0x14;
                                          StdVector_clearStorage(local_4a8);
                                          local_3f4._0_1_ = 0xf;
                                          Game_StringCommandTree_dtor((int)local_494);
                                          local_3f4._0_1_ = 0xb;
                                          Game_CommandTree_dtor((int)local_470);
                                          local_3f4._0_1_ = 10;
                                          FUN_01365810();
                                          local_3f4._0_1_ = 9;
                                          FUN_00521a9c();
                                          local_3f4._0_1_ = 7;
                                          FUN_01365810();
                                          local_3f4._0_1_ = 6;
                                          FUN_00521a9c();
                                          local_3f4._0_1_ = 5;
                                          StdVector_clearStorage(local_444);
                                          local_3f4._0_1_ = 4;
                                          StdVector_clearStorage(local_454);
                                          local_3f4 = (uint)local_3f4._1_3_ << 8;
                                          StdVector_clearStorage(local_464);
                                          local_3f4 = 0xffffffff;
                                          cleanup_thunk_01377f32();
                                          return (bool)extraout_AL;
                                        }
                                        uVar3 = 0x229e;
                                      }
                                      else {
                                        FUN_004fb6c2();
                                        uVar4 = Game_deserializeIntPairVector_01300190
                                                          (&local_4c8,(void *)((int)this + 600));
                                        if ((char)uVar4 == '\0') {
                                          uVar3 = 0x228e;
                                        }
                                        else {
                                          bVar2 = Deserializer_readInteger
                                                            (stream,(int *)((int)this + 0x270));
                                          if (bVar2) goto LAB_01377b1d;
                                          uVar3 = 0x2291;
                                        }
                                      }
                                    }
                                    else {
                                      bVar2 = Deserializer_readInteger(stream,&local_66c);
                                      if (bVar2) {
                                        *(bool *)((int)this + 0x308) = local_66c != 0;
                                        local_674 = stream;
                                        StdTree_clearStringNodes((void *)((int)this + 0x30c));
                                        cVar1 = Game_deserializeStringRecordList((int)this + 0x30c);
                                        if (cVar1 != '\0') goto LAB_01377882;
                                        uVar3 = 0x2255;
                                      }
                                      else {
                                        uVar3 = 0x224e;
                                      }
                                    }
                                  }
                                }
                                else {
                                  uVar3 = 0x223e;
                                }
                              }
                            }
                            else {
                              uVar3 = 0x2235;
                            }
                          }
                          else {
                            uVar3 = 0x2230;
                          }
                        }
                        else {
                          local_648 = stream;
                          RbTree29_clear((void *)((int)this + 0x2b8));
                          uVar4 = Game_deserializeIntDwordTripleMap(&local_648);
                          if ((char)uVar4 == '\0') {
                            uVar3 = 0x2223;
                          }
                          else {
                            bVar2 = Deserializer_readInteger(stream,&local_654);
                            if (bVar2) {
                              *(int *)((int)this + 0x2c4) = local_654;
                              goto LAB_01377708;
                            }
                            uVar3 = 0x2226;
                          }
                        }
                      }
                      else {
                        uVar3 = 0x220f;
                      }
                      goto LAB_013770b8;
                    }
                    FUN_005258fb();
                    local_3f4._0_1_ = 0x18;
                    uVar4 = Game_deserializeIntPairVector_01300190(&local_58c,local_50c);
                    if ((char)uVar4 != '\0') {
                      local_624 = local_50c;
                      local_620 = local_508[0];
                      local_550 = *local_508[0];
                      local_594[0] = local_624;
                      local_554 = local_624;
                      local_4b0[0] = local_624;
                      while (bVar2 = CheckedTreeIterator_notEquals(&local_554,&local_624), bVar2) {
                        uVar3 = CheckedTreeIterator_derefValue_nodeFlag15();
                        local_528 = (undefined4 *)Game_IntMap_findOrInsertValueSlot(uVar3);
                        CheckedTreeIterator_derefValue_nodeFlag15();
                        pvVar7 = find_play_element_in_maps
                                           ((void *)((int)this + -0x10),elementId__02);
                        *local_528 = pvVar7;
                        CheckedTreeIterator_copyAndIncrement(local_4f8,0);
                      }
                      local_3f4 = CONCAT31(local_3f4._1_3_,0x16);
                      FUN_00521a9c();
                      goto LAB_013775c6;
                    }
                    FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",0x21fc);
                    local_3f4._0_1_ = 0x16;
                    FUN_00521a9c();
                    local_3f4 = CONCAT31(local_3f4._1_3_,0x15);
                    FUN_0133e600();
                  }
                }
                else {
                  uVar3 = 0x219d;
LAB_01376f3b:
                  FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",uVar3);
                }
LAB_01376f4d:
                local_3f4._0_1_ = 0x14;
                StdVector_clearStorage(local_4a8);
                local_3f4._0_1_ = 0xf;
                Game_StringCommandTree_dtor((int)local_494);
                local_3f4 = CONCAT31(local_3f4._1_3_,0xb);
                Game_CommandTree_dtor((int)local_470);
              }
            }
LAB_013766fb:
            local_3f4._0_1_ = 10;
            FUN_01365810();
            local_3f4._0_1_ = 9;
            FUN_00521a9c();
          }
        }
        local_3f4._0_1_ = 7;
        FUN_01365810();
        local_3f4._0_1_ = 6;
        FUN_00521a9c();
        goto LAB_01375e22;
      }
      uVar3 = 0x2091;
    }
    else {
      uVar3 = 0x208e;
    }
  }
  else {
    uVar3 = 0x208b;
  }
  FUN_012f5a60("false","..\\common\\common\\game\\Game.cpp",uVar3);
LAB_01375e22:
  local_3f4._0_1_ = 5;
  StdVector_clearStorage(local_444);
  local_3f4._0_1_ = 4;
  StdVector_clearStorage(local_454);
  local_3f4 = (uint)local_3f4._1_3_ << 8;
  StdVector_clearStorage(local_464);
  ExceptionList = local_3fc;
  return false;
}

