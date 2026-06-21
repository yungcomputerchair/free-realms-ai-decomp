// addr: 0x01373e40
// name: CWGame_dumpDetails
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_dumpDetails(void * this, void * debugStream) */

void __thiscall CWGame_dumpDetails(void *this,void *debugStream)

{
  char cVar1;
  int *stream;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *key;
  void **outData;
  size_t *outSize;
  int **ppiVar7;
  undefined1 *puVar8;
  uint uStack_68c;
  undefined1 local_638 [12];
  undefined1 local_62c [12];
  undefined1 local_620 [12];
  undefined1 local_614 [12];
  void *local_608;
  int *local_604;
  undefined4 local_600;
  undefined1 local_5fc [12];
  int local_5f0 [2];
  int *local_5e8;
  size_t local_5e4;
  undefined1 local_5e0 [4];
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined1 local_5d0 [4];
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined1 local_5c0 [4];
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined1 local_5b0 [4];
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined1 local_5a0 [4];
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  int local_590 [2];
  undefined1 local_588 [8];
  undefined1 local_580 [4];
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_54c [5];
  int local_538;
  undefined4 local_534;
  undefined4 local_530;
  int *local_52c;
  undefined4 local_528;
  int *local_524;
  int *local_520;
  void *local_51c;
  int local_518 [2];
  undefined4 local_510 [2];
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  int local_4fc;
  undefined4 *local_4f8;
  int *local_4f4;
  int *local_4f0;
  int local_4ec;
  undefined4 *local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  int *local_4d8;
  int local_4d4;
  undefined4 *local_4d0;
  int local_4cc;
  undefined4 *local_4c8;
  undefined1 local_4c4 [4];
  undefined4 *local_4c0;
  undefined1 local_4b8 [4];
  undefined4 *local_4b4;
  undefined4 local_4ac;
  int *local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined1 *local_49c;
  undefined4 *local_498;
  int local_494;
  undefined4 local_490;
  int local_48c;
  undefined4 local_488;
  int local_484;
  undefined4 local_480;
  int *local_47c;
  int local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  int *local_468 [2];
  int local_460;
  undefined4 local_45c;
  int *local_458;
  int *local_454;
  undefined4 local_450;
  undefined4 local_44c;
  int local_448 [2];
  undefined1 *local_440;
  undefined4 local_43c;
  void *local_438;
  size_t local_434;
  void *local_430;
  void *local_42c;
  void *local_428;
  undefined4 local_424;
  undefined4 local_420;
  int *local_41c;
  int *local_418;
  int *local_414;
  int *local_410;
  undefined4 local_40c;
  undefined4 local_408;
  int *local_404;
  undefined1 *local_400;
  void *local_3fc;
  undefined1 *puStack_3f8;
  int local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Dumps comprehensive CWGame state: game IDs, player/order data, reveal/turn
                       maps, timers, command trees, state machines, persistence buffers, and play
                       elements. Caller CWGame_dump and numerous game-specific dump strings identify
                       this as the main game dump body. */
  puStack_3f8 = &LAB_016812fa;
  local_3fc = ExceptionList;
  uStack_68c = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = (undefined1 *)&uStack_68c;
  ExceptionList = &local_3fc;
  local_458 = debugStream;
  local_3f4 = 0;
  local_428 = this;
  local_8 = uStack_68c;
  if (debugStream == (void *)0x0) {
    debugStream = (int *)0x1373ea5;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    local_400 = (undefined1 *)&uStack_68c;
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  local_458 = stream;
  DebugStream_writeCString(stream,"Starting Game\n");
  DebugStream_writeCString(stream,"GameID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"MatchID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x54));
  DebugStream_writeCString(stream,"ServerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"mFirstPlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x104));
  DebugStream_writeCString(stream,"mGameStarted: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x108));
  DebugStream_writeCString(stream,"AI Enabled: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x120));
  DebugStream_writeCString(stream,"Game Ended: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x121));
  DebugStream_writeCString(stream,"Out of Sync: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x13c));
  DebugStream_writeCString(stream,"Batch Control Status: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x140));
  DebugStream_writeCString(stream,"Player Count: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x144));
  DebugStream_writeCString(stream,"Original Player Count: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x148));
  DebugStream_writeCString(stream,"Game Is Setup: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x16c));
  DebugStream_writeCString(stream,"Game Is Ready For Start: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x16d));
  DebugStream_writeCString(stream,"Random Seed: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x170));
  DebugStream_writeCString(stream,"Version: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x178));
  DebugStream_writeCString(stream,"QueueMode: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x17c));
  DebugStream_writeCString(stream,"display state: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x180));
  DebugStream_writeCString(stream,"Match Directory: ");
  Serializer_appendString(stream,(void *)((int)this + 0x184));
  DebugStream_writeCString(stream,"Reveal ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x1b8));
  DebugStream_writeCString(stream,"Game Over: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x1c8));
  DebugStream_writeCString(stream,"EventID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x1d8));
  DebugStream_writeCString(stream,"Get Target ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x1dc));
  local_5dc = 0;
  local_5d8 = 0;
  local_5d4 = 0;
  local_5bc = 0;
  local_5b8 = 0;
  local_5b4 = 0;
  local_3f4._1_3_ = (uint3)((uint)local_3f4 >> 8);
  local_5ac = 0;
  local_5a8 = 0;
  local_5a4 = 0;
  local_3f4._0_1_ = 3;
  local_41c = stream;
  local_404 = stream;
  DebugStream_writeCString(stream,"Player Order Data: ");
  STLVector_int_serialize(&local_404,(int)this + 0x14c);
  DebugStream_writeCString(stream,"OrderedAccountIDs: ");
  STLVector_int_serialize(&local_404,(int)this + 0x15c);
  local_4a8 = stream;
  FUN_005258fb();
  local_3f4._0_1_ = 4;
  DebugStream_writeCString(stream,"PlayerIDList: ");
  FUN_01365f40();
  local_3f4 = CONCAT31(local_3f4._1_3_,5);
  local_40c = 0;
  local_450 = 0;
  puVar2 = (undefined4 *)FUN_01269090(local_448);
  local_450 = *puVar2;
  local_44c = puVar2[1];
  puVar2 = (undefined4 *)FUN_01269060(local_448);
  local_40c = *puVar2;
  local_408 = puVar2[1];
  while( true ) {
    cVar1 = FUN_01268ea0(&local_450);
    if (cVar1 == '\0') break;
    piVar3 = (int *)FUN_01268e40();
    if (*piVar3 != 0) {
      FUN_01268e40();
      local_4e4 = GamePlayer_getPlayerId();
      FUN_0042c155(&local_4e4);
      FUN_01268e40();
      local_538 = GamePlayer_getPlayerId();
      puVar2 = (undefined4 *)FUN_01268e40();
      local_418 = (int *)*puVar2;
      local_454 = IntDefaultMap_getOrInsert(local_62c,&local_538);
      iVar4 = (**(code **)(*local_418 + 0x18))();
      *local_454 = iVar4;
      local_430 = (void *)0x0;
      puVar2 = (undefined4 *)FUN_01268e40();
      local_414 = (int *)(**(code **)(*(int *)*puVar2 + 0x28))(0);
      PacketBuffer_getDataAndSize(local_414,&local_438,&local_430,debugStream);
      local_418 = Mem_Alloc((int)local_430 + 1);
      _memcpy(local_418,local_438,(size_t)local_430);
      FUN_01268e40();
      uVar5 = GamePlayer_getPlayerId(local_430);
      Game_logGeneral((void *)((int)this + -0x10),"Serializing Player: %d, size: %d",uVar5);
      local_520 = local_418;
      local_51c = local_430;
      FUN_01268e40();
      local_510[0] = GamePlayer_getPlayerId();
      puVar2 = (undefined4 *)StateMachineMap_findOrInsertByInt(local_510);
      *puVar2 = local_520;
      puVar2[1] = local_51c;
      if (local_414 != (int *)0x0) {
        PropertyObject_scalarDeletingDtor(local_414,'\x01');
      }
    }
    FUN_0132e500(local_448,0);
  }
  STLVector_int_serialize(&local_404,(int)local_5e0);
  puVar2 = (undefined4 *)FUN_01269090(local_448);
  local_450 = *puVar2;
  local_44c = puVar2[1];
  puVar2 = (undefined4 *)FUN_01269060(local_448);
  local_40c = *puVar2;
  local_408 = puVar2[1];
  while( true ) {
    cVar1 = FUN_01268ea0(&local_450);
    if (cVar1 == '\0') break;
    piVar3 = (int *)FUN_01268e40();
    if (*piVar3 != 0) {
      FUN_01268e40();
      local_42c = (void *)GamePlayer_getPlayerId();
      FUN_0042c155(&local_42c);
      FUN_01268e40();
      local_410 = (int *)GamePlayer_getAccountId();
      FUN_0042c155(&local_410);
    }
    FUN_0132e500(local_448,0);
  }
  STLVector_int_serialize(&local_404,(int)local_5c0);
  STLVector_int_serialize(&local_404,(int)local_5b0);
  STLMap_dwordPair_serialize(&local_4a8,local_62c,debugStream);
  local_454 = stream;
  DebugStream_writeCString(stream,"Player Serialization Data: ");
  STLMap_intBlob_serialize(&local_454,local_4b8,debugStream);
  local_49c = local_4b8;
  local_498 = local_4b4;
  local_43c = *local_4b4;
  local_440 = local_49c;
  cVar1 = FUN_0134dbd0(&local_49c);
  if (cVar1 != '\0') {
    iVar4 = FUN_01351470();
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar4 + 4));
  }
  local_414 = stream;
  DebugStream_writeCString(stream,"RevealMap: ");
  STLMap_intToBool_serialize_01356ef0(&local_414,(void *)((int)this + 0x1bc),(int)debugStream);
  DebugStream_writeCString(stream,"PlayerDrawMap: ");
  STLMap_intToBool_serialize_01356ef0(&local_414,(void *)((int)this + 0x1cc),(int)debugStream);
  local_484 = 0;
  FUN_005258fb();
  local_3f4._0_1_ = 6;
  FUN_01365f40();
  local_3f4._0_1_ = 7;
  local_4cc = (int)this + 0x70;
  local_4c8 = *(undefined4 **)((int)this + 0x74);
  local_45c = *local_4c8;
  local_460 = local_4cc;
  while( true ) {
    cVar1 = FUN_0132e750(&local_4cc);
    if (cVar1 == '\0') break;
    piVar3 = (int *)FUN_01351050();
    if (*piVar3 != 0) {
      iVar4 = FUN_01351050();
      if (*(int *)(iVar4 + 4) != 0) {
        puVar2 = (undefined4 *)FUN_01351050();
        local_438 = (void *)*puVar2;
        iVar4 = FUN_01351050();
        piVar3 = (int *)(*(int *)(iVar4 + 4) + 8);
        local_410 = IntDefaultMap_getOrInsert(local_614,(int *)&local_438);
        iVar4 = (**(code **)(*piVar3 + 0x18))();
        *local_410 = iVar4;
        local_434 = 0;
        PacketBuffer_init(local_54c);
        local_3f4._0_1_ = 8;
        outSize = &local_434;
        outData = &local_42c;
        puVar2 = local_54c;
        pvVar6 = (void *)(**(code **)(*piVar3 + 0x28))();
        PacketBuffer_getDataAndSize(pvVar6,puVar2,outData,(int *)outSize);
        local_410 = Mem_Alloc(local_434 + 1);
        _memcpy(local_410,local_42c,local_434);
        (**(code **)(*piVar3 + 0x18))(local_434);
        Game_logGeneral((void *)((int)this + -0x10),"Serializing Element: %d, class: %d, size: %d",
                        local_438);
        piVar3 = local_410;
        local_484 = local_484 + local_434;
        local_5e8 = local_410;
        local_5e4 = local_434;
        puVar2 = (undefined4 *)StateMachineMap_findOrInsertByInt(&local_438);
        *puVar2 = piVar3;
        puVar2[1] = local_5e4;
        local_3f4._0_1_ = 7;
        RawBuffer_free(local_54c);
      }
    }
    FUN_013510b0(local_448,0);
  }
  Game_logGeneral((void *)((int)this + -0x10),"total size of play elements: %d",local_484);
  DebugStream_writeCString(stream,"PersistanceElementMap: ");
  local_418 = stream;
  STLMap_dwordPair_serialize(&local_418,local_614,debugStream);
  DebugStream_writeCString(stream,"Persistance Buffer Map: ");
  STLMap_intBlob_serialize(&local_454,local_4c4,debugStream);
  local_49c = local_4c4;
  local_498 = local_4c0;
  local_43c = *local_4c0;
  local_440 = local_49c;
  cVar1 = FUN_0134dbd0(&local_49c);
  if (cVar1 != '\0') {
    iVar4 = FUN_01351470();
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar4 + 4));
  }
  DebugStream_writeCString(stream,"test: ");
  Serializer_appendInteger(stream,99999);
  local_4f4 = stream;
  Game_CommandTree_ctor((int)local_638);
  local_3f4._0_1_ = 9;
  local_4fc = (int)this + -0xc;
  local_4f8 = *(undefined4 **)((int)this + -8);
  local_474 = *local_4f8;
  local_478 = local_4fc;
  while( true ) {
    cVar1 = FUN_0134dc30(&local_4fc);
    if (cVar1 == '\0') break;
    FUN_01361ae0();
    local_3f4 = CONCAT31(local_3f4._1_3_,10);
    iVar4 = FUN_01354d80();
    local_54c[0] = *(undefined4 *)(iVar4 + 4);
    local_424 = 0;
    local_504 = 0;
    piVar3 = local_448;
    FUN_01354d80(piVar3);
    puVar2 = (undefined4 *)FUN_01330560(piVar3);
    local_504 = *puVar2;
    local_500 = puVar2[1];
    piVar3 = local_518;
    FUN_01354d80(piVar3);
    puVar2 = (undefined4 *)FUN_01330530(piVar3);
    local_424 = *puVar2;
    local_420 = puVar2[1];
    while( true ) {
      cVar1 = FUN_0132e6b0(&local_504);
      if (cVar1 == '\0') break;
      piVar3 = (int *)FUN_0134d920();
      if (*piVar3 != 0) {
        iVar4 = FUN_0134d920();
        if (*(int *)(iVar4 + 4) != 0) {
          FUN_0134d920();
          local_410 = (int *)FUN_01321f20();
          FUN_0134d920();
          local_42c = (void *)PlayElement_getId();
          iVar4 = FUN_0134d920();
          local_468[0] = local_410;
          local_600 = *(undefined4 *)(iVar4 + 8);
          local_608 = local_42c;
          local_604 = local_410;
          FUN_013098c0(&local_608);
          local_410 = (int *)FUN_0134d920();
          FUN_0134d920();
          uVar5 = FUN_01321f20();
          uVar5 = PackedActionId_getLow12Bits(uVar5);
          FUN_0134d920(uVar5);
          uVar5 = FUN_01321f20();
          uVar5 = PackedActionId_getHighBits(uVar5);
          uVar5 = PlayElement_getId(uVar5);
          Game_logGeneral((void *)((int)this + -0x10),"ElementID: %d, actionID: %d (%d)",uVar5);
        }
      }
      FUN_013512f0(local_5f0,0);
    }
    puVar2 = (undefined4 *)FUN_01354d80();
    local_528 = *puVar2;
    uVar5 = FUN_01366330(&local_528,local_54c);
    local_3f4._0_1_ = 0xb;
    FUN_013629c0(uVar5);
    local_3f4._0_1_ = 0xc;
    FUN_0136be70(local_590,local_588);
    local_3f4._0_1_ = 0xb;
    FUN_0135adc0();
    local_3f4._0_1_ = 10;
    FUN_0135ad70();
    local_3f4._0_1_ = 9;
    EmbeddedVector_clearAt08_alt(local_54c);
    FUN_0134f4a0();
  }
  DebugStream_writeCString(stream,"InstalledActions: ");
  InstalledActionMap_serialize(&local_4f4,local_638,debugStream);
  local_4a4 = 0;
  local_534 = 0;
  puVar2 = (undefined4 *)FUN_01258ef0(local_468);
  local_534 = *puVar2;
  local_530 = puVar2[1];
  local_5cc = 0;
  local_5c8 = 0;
  local_5c4 = 0;
  local_3f4 = CONCAT31(local_3f4._1_3_,0xe);
  puVar2 = (undefined4 *)FUN_01258ec0(local_468);
  local_4a4 = *puVar2;
  local_4a0 = puVar2[1];
  while( true ) {
    cVar1 = FUN_012586d0(&local_534);
    if (cVar1 == '\0') break;
    piVar3 = (int *)FUN_01258670();
    if (*piVar3 != 0) {
      FUN_01258670();
      local_480 = PlayElement_getId();
      FUN_0042c155(&local_480);
    }
    PointerVectorIterator_postIncrement(&local_4a4,(int *)local_468,(int *)0x0);
  }
  DebugStream_writeCString(stream,"Ignore Active: ");
  STLVector_int_serialize(&local_404,(int)local_5d0);
  DebugStream_writeCString(stream,"mValidActionFilters");
  STLVector_int_serialize(&local_404,(int)this + 0x10c);
  FUN_0133f1f0();
  local_3f4._0_1_ = 0xf;
  local_5f0[0] = (int)this + 0xf8;
  local_4d0 = *(undefined4 **)((int)this + 0xfc);
  local_488 = *local_4d0;
  local_590[0] = local_5f0[0];
  local_4d4 = local_5f0[0];
  local_48c = local_5f0[0];
  while( true ) {
    cVar1 = FUN_013490a0(&local_4d4);
    if (cVar1 == '\0') break;
    local_57c = 0;
    local_578 = 0;
    local_574 = 0;
    local_3f4 = CONCAT31(local_3f4._1_3_,0x11);
    local_470 = 0;
    local_4e0 = 0;
    ppiVar7 = local_468;
    FUN_01354d00(ppiVar7);
    puVar2 = (undefined4 *)FUN_0134da70(ppiVar7);
    local_4e0 = *puVar2;
    local_4dc = puVar2[1];
    piVar3 = local_448;
    FUN_01354d00(piVar3);
    puVar2 = (undefined4 *)FUN_0134da10(piVar3);
    local_470 = *puVar2;
    local_46c = puVar2[1];
    while( true ) {
      cVar1 = FUN_0134db20(&local_4e0);
      if (cVar1 == '\0') break;
      piVar3 = (int *)FUN_01349180();
      if (*piVar3 != 0) {
        iVar4 = FUN_01349180();
        if (*(int *)(iVar4 + 4) != 0) {
          FUN_01349180();
          local_480 = PlayElement_getId();
          FUN_01349180();
          local_570 = PlayElement_getId();
          local_56c = local_480;
          StdRbTree_insertValueMaybeRebalance(local_580,&local_570,debugStream);
        }
      }
      FUN_0134db90(local_518,0);
    }
    puVar2 = (undefined4 *)FUN_01354d00();
    local_508 = *puVar2;
    puVar8 = local_580;
    Game_IntKeyTree_getOrInsertRecord_0133e1a0(&local_508);
    FUN_01334b40(puVar8);
    local_3f4._0_1_ = 0xf;
    FUN_0050848b();
    FUN_0134a830();
  }
  local_4d8 = stream;
  DebugStream_writeCString(stream,"CommandCardDuration: ");
  STLMap_intToIntPairVector_serialize(&local_4d8,local_620,debugStream);
  if (*(int *)((int)this + 0x58) == 0) {
    pvVar6 = (void *)(**(code **)(*(int *)((int)this + -0x10) + 0x14))();
    *(void **)((int)this + 0x58) = pvVar6;
    set_field_4(pvVar6,(int)this - 0x10);
  }
  DebugStream_writeCString(stream,"Current Turn: ");
  piVar3 = stream;
  (**(code **)(**(int **)((int)this + 0x58) + 0x28))();
  DebugStream_writeCString(stream,"RevealedCards Map: ");
  local_47c = stream;
  FUN_01361c90((int)this + 0x1f0);
  DebugStream_writeCString(stream,"IgnorePlayerList: ");
  STLVector_int_serialize(&local_404,(int)this + 0x20c);
  DebugStream_writeCString(stream,"WinMap: ");
  STLMap_dwordPair_serialize(&local_41c,(void *)((int)this + 0x220),piVar3);
  DebugStream_writeCString(stream,"ElapsedTime: ");
  STLMap_dwordPair_serialize(&local_41c,(void *)((int)this + 0x238),piVar3);
  DebugStream_writeCString(stream,"Duration: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x234));
  DebugStream_writeCString(stream,"RunTimer: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x254));
  DebugStream_writeCString(stream,"ClonePlayElementMap");
  FUN_005258fb();
  local_3f4._0_1_ = 0x12;
  local_518[0] = (int)this + 0x98;
  local_4e8 = *(undefined4 **)((int)this + 0x9c);
  local_490 = *local_4e8;
  local_4ec = local_518[0];
  local_494 = local_518[0];
  local_448[0] = local_518[0];
  while( true ) {
    cVar1 = FUN_0132e750(&local_4ec);
    if (cVar1 == '\0') break;
    key = (int *)FUN_01351050();
    local_47c = IntDefaultMap_getOrInsert(local_5fc,key);
    FUN_01351050();
    iVar4 = PlayElement_getId();
    *local_47c = iVar4;
    FUN_013510b0(local_468,0);
  }
  STLMap_dwordPair_serialize(&local_418,local_5fc,piVar3);
  DebugStream_writeCString(stream,"PlayType: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x278));
  DebugStream_writeCString(stream,"LossTypeMap: ");
  STLMap_dwordPair_serialize(&local_41c,(void *)((int)this + 0x28c),piVar3);
  DebugStream_writeCString(stream,"WhoSelectedCard: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x29c));
  DebugStream_writeCString(stream,"InstalledActionCardMap: ");
  STLMap_dwordPair_serialize(&local_41c,(void *)((int)this + 0x2a0),piVar3);
  DebugStream_writeCString(stream,"PrePassMap: ");
  STLMap_dwordPair_serialize(&local_41c,(void *)((int)this + 0x2ac),piVar3);
  local_4f0 = stream;
  DebugStream_writeCString(stream,"PlayerActionCountMap: ");
  STLMap_intToDwordTriple_serialize(&local_4f0,(void *)((int)this + 0x2b8),(int)piVar3);
  DebugStream_writeCString(stream,"ExtraFormatFlag: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c4));
  DebugStream_writeCString(stream,"suppressedGameTextCards: ");
  STLVector_int_serialize(&local_404,(int)this + 0x2c8);
  DebugStream_writeCString(stream,"GameNum: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2d8));
  DebugStream_writeCString(stream,"leagueID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2dc));
  STLMap_dwordPair_serialize(&local_4a8,(void *)((int)this + 0xbc),piVar3);
  DebugStream_writeCString(stream,"TurnNumber: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2f8));
  local_524 = stream;
  STLMap_intToInt_serialize_012fc6a0(&local_524,(void *)((int)this + 0x2fc),(int)piVar3);
  STLVector_int_serialize(&local_404,(int)this + 0x24);
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x308));
  local_52c = stream;
  FUN_013587f0((int)this + 0x30c);
  DebugStream_writeCString(stream,"CurrentStateMachine: ");
  PersistentComponent_serializePointer(stream,*(void **)((int)this + 0x31c));
  DebugStream_writeCString(stream,"MatchStructure: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x33c));
  local_59c = 0;
  local_598 = 0;
  local_594 = 0;
  local_3f4 = CONCAT31(local_3f4._1_3_,0x14);
  puVar2 = (undefined4 *)FUN_01269090(local_468);
  local_450 = *puVar2;
  local_44c = puVar2[1];
  puVar2 = (undefined4 *)FUN_01269060(local_468);
  local_40c = *puVar2;
  local_408 = puVar2[1];
  while( true ) {
    cVar1 = FUN_01268ea0(&local_450);
    if (cVar1 == '\0') break;
    FUN_01268e40();
    local_4ac = GamePlayer_getPlayerId();
    FUN_0042c155(&local_4ac);
    FUN_0132e500(local_468,0);
  }
  STLVector_int_serialize(&local_404,(int)local_5a0);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x374));
  STLMap_intToBool_serialize_01356ef0(&local_414,(void *)((int)this + 0x248),(int)piVar3);
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x37a));
  DebugStream_writeCString(stream,"NoActionTime: ");
  STLMap_dwordPair_serialize(&local_41c,(void *)((int)this + 600),piVar3);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x270));
  Serializer_appendInteger(stream,(uint)(*(char *)((int)this + 0x352) != '\0'));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  local_3f4._0_1_ = 0x12;
  StdVector_clearStorage(local_5a0);
  local_3f4._0_1_ = 0xf;
  FUN_00521a9c();
  local_3f4._0_1_ = 0xe;
  FUN_0133e600();
  local_3f4._0_1_ = 9;
  StdVector_clearStorage(local_5d0);
  local_3f4._0_1_ = 7;
  Game_CommandTree_dtor((int)local_638);
  local_3f4._0_1_ = 6;
  FUN_01365810();
  local_3f4._0_1_ = 5;
  FUN_00521a9c();
  local_3f4._0_1_ = 4;
  FUN_01365810();
  local_3f4._0_1_ = 3;
  FUN_00521a9c();
  local_3f4._0_1_ = 2;
  StdVector_clearStorage(local_5b0);
  local_3f4._0_1_ = 1;
  StdVector_clearStorage(local_5c0);
  local_3f4 = (uint)local_3f4._1_3_ << 8;
  StdVector_clearStorage(local_5e0);
  local_3f4 = 0xffffffff;
  Game_dumpEpilogue();
  return;
}

