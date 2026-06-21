// addr: 0x0130cb40
// name: Lobby_dump
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Lobby_dump(int *param_1,void *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  void *pvStack_40;
  undefined1 auStack_3c [4];
  int iStack_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_30 [4];
  void *pvStack_2c;
  undefined4 uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Dumps a Lobby object to a debug/serializer stream, including property sets,
                       role sets, group IDs, lobby type, deck, tournament round, and substate
                       between "Starting Lobby" and "Ending Lobby" markers. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01676f00;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_40;
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 8))(param_2,DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  DebugStream_writeCString(param_2,"Starting Lobby\n");
  DebugStream_writeCString(param_2,"Property sets:\n");
  piVar1 = (int *)param_1[0xb];
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(param_2,1);
  }
  else {
    bVar2 = Serializer_appendInteger(param_2,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(param_2);
    }
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(param_2,1);
  }
  else {
    bVar2 = Serializer_appendInteger(param_2,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(param_2);
    }
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(param_2,1);
  }
  else {
    bVar2 = Serializer_appendInteger(param_2,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(param_2);
    }
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(param_2,1);
  }
  else {
    bVar2 = Serializer_appendInteger(param_2,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(param_2);
    }
  }
  piVar1 = (int *)param_1[0xf];
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(param_2,1);
  }
  else {
    bVar2 = Serializer_appendInteger(param_2,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(param_2);
    }
  }
  pvStack_40 = param_2;
  DebugStream_writeCString(param_2,"General Roles:\n");
  iVar3 = LobbyRoleMap_getOrCreateRoleSet(&stack0xffffffbc);
  STLVector_int_serialize(&pvStack_40,iVar3);
  DebugStream_writeCString(param_2,"Player Roles:\n");
  iVar3 = LobbyRoleMap_getOrCreateRoleSet(&stack0xffffffbc);
  STLVector_int_serialize(&pvStack_40,iVar3);
  DebugStream_writeCString(param_2,"Observer Roles:\n");
  iVar3 = LobbyRoleMap_getOrCreateRoleSet(&stack0xffffffbc);
  STLVector_int_serialize(&pvStack_40,iVar3);
  DebugStream_writeCString(param_2,"Moderator Roles:\n");
  iVar3 = LobbyRoleMap_getOrCreateRoleSet(&stack0xffffffbc);
  STLVector_int_serialize(&pvStack_40,iVar3);
  DebugStream_writeCString(param_2,"Staff Roles:\n");
  iVar3 = LobbyRoleMap_getOrCreateRoleSet(&stack0xffffffbc);
  STLVector_int_serialize(&pvStack_40,iVar3);
  DebugStream_writeCString(param_2,"Containing GroupID:\n");
  Serializer_appendInteger(param_2,param_1[5]);
  DebugStream_writeCString(param_2,"GroupID:\n");
  Serializer_appendInteger(param_2,param_1[6]);
  DebugStream_writeCString(param_2,"eLobbyTypeID:\n");
  Serializer_appendInteger(param_2,param_1[7]);
  DebugStream_writeCString(param_2,"deck:\n");
  if ((param_1[0x15] == 0) && (param_1[0xb] != 0)) {
    FUN_012fa910();
    puStack_8 = (undefined1 *)0x0;
    FUN_013111d0(0xfb0,auStack_3c);
    if (iStack_38 == 3) {
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0123c310();
      uStack_18 = 0xf;
      uStack_1c = 0;
      pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_30,pbVar4,0,0xffffffff);
      puStack_8._0_1_ = 1;
      pbVar5 = abStack_30;
      FUN_012aab80(pbVar5);
      iVar3 = DeckDB_getDeckByName(pbVar5);
      param_1[0x15] = iVar3;
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_2c);
      }
      uStack_18 = 0xf;
      uStack_1c = 0;
      pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_01300cd0();
  }
  piVar1 = (int *)param_1[0x15];
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(param_2,1);
  }
  else {
    bVar2 = Serializer_appendInteger(param_2,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(param_2);
    }
  }
  DebugStream_writeCString(param_2,"tournamentRound:\n");
  Serializer_appendInteger(param_2,param_1[0x1a]);
  DebugStream_writeCString(param_2,"subState: \n");
  Serializer_appendInteger(param_2,param_1[0x1b]);
  DebugStream_writeCString(param_2,"Ending Lobby\n");
  (**(code **)(*param_1 + 0xc))(param_2);
  ExceptionList = pvStack_14;
  return;
}

