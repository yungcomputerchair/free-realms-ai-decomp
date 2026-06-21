// addr: 0x014cb550
// name: LobbyCommand_BulkJoin_doCommand
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandBulkJoin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int LobbyCommand_BulkJoin_doCommand(void * this) */

int __fastcall LobbyCommand_BulkJoin_doCommand(void *this)

{
  undefined4 *puVar1;
  int *piVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  void *extraout_EAX;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  uint *extraout_EDX;
  uint *extraout_EDX_00;
  uint *puVar11;
  void *pvVar12;
  uint *puVar13;
  int *piVar14;
  void *local_cc;
  void *pvStack_c8;
  uint *puStack_c4;
  void *local_c0;
  uint *local_bc [2];
  uint *local_b4;
  int *local_b0;
  undefined1 auStack_ac [4];
  int *local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_98;
  undefined1 auStack_94 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_90;
  uint *local_88;
  undefined1 auStack_84 [4];
  uint *puStack_80;
  uint *puStack_7c;
  int iStack_78;
  undefined1 auStack_74 [4];
  uint *puStack_70;
  uint *puStack_6c;
  int iStack_68;
  void *local_64;
  int *local_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_5c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_54 [4];
  void *pvStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_38 [4];
  void *pvStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
                    /* Processes a bulk join by iterating parallel account/name/property vectors,
                       sending property updates, building aggregate member lists for the group, and
                       emitting per-account join results. */
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_016ab4da;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)&local_cc;
  uVar7 = DAT_01b839d8 ^ (uint)&stack0xffffff28;
  ExceptionList = &local_14;
  local_c0 = this;
  LobbyAccount_ensureSingleton();
  local_64 = extraout_EAX;
  DisplayActionManager_ensureSingleton();
  local_bc[0] = (uint *)FUN_012cfde0(uVar7);
  if ((*(int *)((int)this + 0x2c) != 0) &&
     (iVar10 = *(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c), iVar5 = iVar10 >> 0x1f,
     iVar10 / 0x1c + iVar5 != iVar5)) {
    piVar14 = *(int **)((int)this + 0x20);
    local_b0 = piVar14;
    if (piVar14 < *(int **)((int)this + 0x1c)) {
      FUN_00d83c2d();
    }
    local_58 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x30);
    if (local_58 <
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         ((int)this + 0x2c)) {
      FUN_00d83c2d();
    }
    local_5c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x50);
    if (local_5c <
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         ((int)this + 0x4c)) {
      FUN_00d83c2d();
    }
    local_60 = *(int **)((int)this + 0x40);
    if (local_60 < *(int **)((int)this + 0x3c)) {
      FUN_00d83c2d();
    }
    local_88 = *(uint **)((int)this + 0x60);
    if (local_88 < *(uint **)((int)this + 0x5c)) {
      FUN_00d83c2d();
    }
    piVar2 = *(int **)((int)this + 0x1c);
    if (*(int **)((int)this + 0x20) < piVar2) {
      FUN_00d83c2d();
    }
    pbVar3 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              ((int)this + 0x2c);
    local_a0 = piVar2;
    if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         ((int)this + 0x30) < pbVar3) {
      FUN_00d83c2d();
    }
    pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              ((int)this + 0x4c);
    local_98 = pbVar3;
    if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         ((int)this + 0x50) < pbVar4) {
      FUN_00d83c2d();
    }
    piVar2 = *(int **)((int)this + 0x3c);
    local_90 = pbVar4;
    if (*(int **)((int)this + 0x40) < piVar2) {
      FUN_00d83c2d();
    }
    local_b4 = *(uint **)((int)this + 0x5c);
    local_a8 = piVar2;
    if (*(uint **)((int)this + 0x60) < local_b4) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_a4 = (int)this + 0x18;
      if (local_a4 == 0) {
        FUN_00d83c2d();
      }
      if (local_a0 == piVar14) break;
      local_9c = (int)this + 0x28;
      if (local_9c == 0) {
        FUN_00d83c2d();
      }
      if (local_98 == local_58) break;
      if (this == (void *)0xffffffb8) {
        FUN_00d83c2d();
      }
      if (local_90 == local_5c) break;
      if (this == (void *)0xffffffc8) {
        FUN_00d83c2d();
      }
      if (local_a8 == local_60) break;
      if (this == (void *)0xffffffa8) {
        FUN_00d83c2d();
      }
      if (local_b4 == local_88) break;
      if (local_a4 == 0) {
        FUN_00d83c2d();
      }
      piVar14 = local_a0;
      if (*(int **)(local_a4 + 8) <= local_a0) {
        FUN_00d83c2d();
      }
      local_cc = (void *)*piVar14;
      if (this == (void *)0xffffffa8) {
        FUN_00d83c2d();
      }
      if (*(uint **)((int)this + 0x60) <= local_b4) {
        FUN_00d83c2d();
      }
      pvVar9 = (void *)*local_b4;
      if (pvVar9 == (void *)0x0) {
        FUN_012f5a60("propertySet","..\\common\\networking\\lobby_command\\LobbyCommandBulkJoin.cpp"
                     ,0x54);
      }
      if (local_9c == 0) {
        FUN_00d83c2d();
      }
      pbVar3 = local_98;
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (local_9c + 8) <= local_98) {
        FUN_00d83c2d();
      }
      uStack_20 = 0xf;
      uStack_24 = 0;
      pvStack_34 = (void *)((uint)pvStack_34 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_38,pbVar3,0,0xffffffff);
      iStack_c = 0;
      if (this == (void *)0xffffffc8) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x40) <= local_a8) {
        FUN_00d83c2d();
      }
      pvVar8 = local_c0;
      iVar5 = *local_a8;
      if (local_c0 == (void *)0xffffffb8) {
        FUN_00d83c2d();
      }
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           ((int)pvVar8 + 0x50) <= local_90) {
        FUN_00d83c2d();
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_54,local_90,0,0xffffffff);
      iStack_c = CONCAT31(iStack_c._1_3_,1);
      pvVar8 = (void *)FUN_012df9f0(local_cc);
      if (pvVar8 == (void *)0x0) {
        FUN_012f5a60("account","..\\common\\networking\\lobby_command\\LobbyCommandBulkJoin.cpp",
                     0x5a);
      }
      FUN_013a7570(abStack_38);
      AccountInfo_setProperty3eValue(pvVar8,iVar5);
      Account_setLobbyAttributeString(pvVar8,abStack_54);
      Account_setFullPropertySet(pvVar8,pvVar9);
      pvStack_c8 = Mem_Alloc(0x14);
      iStack_c._0_1_ = 2;
      if (pvStack_c8 == (void *)0x0) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)FUN_012f9eb0();
      }
      iStack_c._0_1_ = 1;
      FUN_012f8c70(0x10);
      DisplayActionBuilder_addIntArg(pvVar8,(int)local_cc);
      DisplayActionBuilder_addStringArg(pvVar8,abStack_38);
      FUN_012fa0c0(pvVar9);
      DisplayActionBuilder_addStringArg(pvVar8,abStack_54);
      FUN_012d3550(pvVar8);
      this = local_c0;
      iStack_c = (uint)iStack_c._1_3_ << 8;
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_50);
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
      iStack_c = 0xffffffff;
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_34);
      }
      uStack_24 = 0;
      uStack_20 = 0xf;
      pvStack_34 = (void *)((uint)pvStack_34 & 0xffffff00);
      if (*(int **)((int)local_c0 + 0x20) <= local_a0) {
        FUN_00d83c2d();
      }
      local_a0 = local_a0 + 1;
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           ((int)this + 0x50) <= local_90) {
        FUN_00d83c2d();
      }
      local_90 = local_90 + 0x1c;
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           ((int)this + 0x30) <= local_98) {
        FUN_00d83c2d();
      }
      local_98 = local_98 + 0x1c;
      if (*(int **)((int)this + 0x40) <= local_a8) {
        FUN_00d83c2d();
      }
      local_a8 = local_a8 + 1;
      if (*(uint **)((int)this + 0x60) <= local_b4) {
        FUN_00d83c2d();
      }
      piVar14 = local_b0;
      local_b4 = local_b4 + 1;
    }
  }
  pvStack_c8 = Mem_Alloc(0x14);
  iStack_c = 3;
  if (pvStack_c8 == (void *)0x0) {
    local_cc = (void *)0x0;
  }
  else {
    local_cc = (void *)FUN_012f9eb0();
  }
  pvVar9 = local_cc;
  iStack_c = 0xffffffff;
  FUN_012f8c70(0x38);
  DisplayActionBuilder_addIntArg(pvVar9,*(int *)((int)this + 0x14));
  puStack_80 = (uint *)0x0;
  puStack_7c = (uint *)0x0;
  iStack_78 = 0;
  puStack_70 = (uint *)0x0;
  puStack_6c = (uint *)0x0;
  iStack_68 = 0;
  iStack_c = 5;
  local_b0 = (int *)FUN_012cc6b0(*(undefined4 *)((int)this + 0x14));
  if (local_b0 == (int *)0x0) {
    FUN_012f5dc0("BulkJoin: couldn\'t get group: %d",*(undefined4 *)((int)this + 0x14));
  }
  else {
    local_b4 = *(uint **)((int)this + 0xc);
    pvStack_c8 = (void *)((int)this + 8);
    puStack_c4 = (uint *)*local_b4;
    while( true ) {
      pvVar9 = pvStack_c8;
      if ((pvStack_c8 == (void *)0x0) || (pvStack_c8 != (void *)((int)this + 8))) {
        FUN_00d83c2d();
      }
      if (puStack_c4 == local_b4) break;
      if (pvVar9 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (puStack_c4 == *(uint **)((int)pvVar9 + 4)) {
        FUN_00d83c2d();
      }
      puVar11 = (uint *)puStack_c4[6];
      local_bc[0] = puStack_c4 + 4;
      local_88 = puVar11;
      if (puVar11 < (uint *)puStack_c4[5]) {
        FUN_00d83c2d();
      }
      if (puStack_c4 == *(uint **)((int)pvVar9 + 4)) {
        FUN_00d83c2d();
      }
      puVar13 = (uint *)local_bc[0][1];
      if ((uint *)local_bc[0][2] < puVar13) {
        FUN_00d83c2d();
      }
      while( true ) {
        puVar6 = puStack_c4;
        if (puStack_c4 == (uint *)0xfffffff0) {
          FUN_00d83c2d();
        }
        if (puVar13 == puVar11) break;
        if (puVar6 == (uint *)0xfffffff0) {
          FUN_00d83c2d();
        }
        if ((uint *)puVar6[6] <= puVar13) {
          FUN_00d83c2d();
        }
        puVar11 = puStack_6c;
        if ((puStack_70 == (uint *)0x0) ||
           ((uint)(iStack_68 - (int)puStack_70 >> 2) <=
            (uint)((int)puStack_6c - (int)puStack_70 >> 2))) {
          if (puStack_6c < puStack_70) {
            FUN_00d83c2d();
          }
          Vector_insertSingleAndReturnIterator_realloc(auStack_ac,auStack_74,puVar11,puVar13);
        }
        else {
          *puStack_6c = *puVar13;
          puStack_6c = puStack_6c + 1;
        }
        if (puStack_c4 == *(uint **)((int)pvStack_c8 + 4)) {
          FUN_00d83c2d();
        }
        puVar11 = puStack_7c;
        local_bc[0] = (uint *)puStack_c4[3];
        if ((puStack_80 == (uint *)0x0) ||
           ((uint)(iStack_78 - (int)puStack_80 >> 2) <=
            (uint)((int)puStack_7c - (int)puStack_80 >> 2))) {
          if (puStack_7c < puStack_80) {
            FUN_00d83c2d();
          }
          Vector_insertSingleAndReturnIterator_realloc(auStack_94,auStack_84,puVar11,local_bc);
        }
        else {
          *puStack_7c = (uint)local_bc[0];
          puStack_7c = puStack_7c + 1;
        }
        if (puStack_c4 == *(uint **)((int)pvStack_c8 + 4)) {
          FUN_00d83c2d();
        }
        if ((uint *)puStack_c4[6] <= puVar13) {
          FUN_00d83c2d();
        }
        puVar11 = puStack_c4;
        Lobby_setAccountRole(local_b0,(void *)*puVar13,puStack_c4[3]);
        if ((uint *)puVar11[6] <= puVar13) {
          FUN_00d83c2d();
        }
        puVar13 = puVar13 + 1;
        puVar11 = local_88;
      }
      FUN_01303940();
      this = local_c0;
    }
  }
  pvVar9 = local_cc;
  DisplayActionBuilder_addObjectArg(local_cc,auStack_74);
  DisplayActionBuilder_addObjectArg(pvVar9,auStack_84);
  FUN_012d3550(pvVar9);
  pvVar8 = local_c0;
  pvVar9 = (void *)((int)this + 0x68);
  local_cc = pvVar9;
  if ((*(int *)((int)this + 0x6c) != 0) &&
     (*(int *)((int)this + 0x70) - *(int *)((int)this + 0x6c) >> 2 != 0)) {
    local_bc[0] = *(uint **)((int)local_c0 + 0x20);
    pvVar12 = (void *)((int)local_c0 + 0x18);
    puVar1 = (undefined4 *)((int)local_c0 + 0x1c);
    local_c0 = pvVar12;
    if (local_bc[0] < (uint *)*puVar1) {
      FUN_00d83c2d();
    }
    local_b0 = *(int **)((int)this + 0x70);
    if (local_b0 < *(int **)((int)this + 0x6c)) {
      FUN_00d83c2d();
    }
    puVar11 = *(uint **)((int)pvVar8 + 0x1c);
    if (*(uint **)((int)pvVar8 + 0x20) < puVar11) {
      FUN_00d83c2d();
    }
    piVar14 = *(int **)((int)this + 0x6c);
    local_b4 = puVar11;
    if (*(int **)((int)this + 0x70) < piVar14) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_a8 = piVar14;
      if (pvVar12 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (local_b4 == local_bc[0]) break;
      if (pvVar9 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (local_a8 == local_b0) break;
      if (pvVar12 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (*(uint **)((int)pvVar12 + 8) <= local_b4) {
        FUN_00d83c2d();
      }
      pvVar9 = local_cc;
      uVar7 = *local_b4;
      puVar11 = local_b4;
      if (local_cc == (void *)0x0) {
        FUN_00d83c2d();
        puVar11 = extraout_EDX;
      }
      piVar14 = local_a8;
      if (*(int **)((int)pvVar9 + 8) <= local_a8) {
        FUN_00d83c2d();
        puVar11 = extraout_EDX_00;
      }
      iVar5 = *piVar14;
      pvVar9 = LobbyServiceAccountMap_findValue(local_64,(int)puVar11);
      if (pvVar9 != (void *)0x0) {
        Lobby_setAccountRoleField58(iVar5);
        pvStack_c8 = Mem_Alloc(0x14);
        iStack_c._0_1_ = 6;
        if (pvStack_c8 == (void *)0x0) {
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = (void *)FUN_012f9eb0();
        }
        iStack_c = CONCAT31(iStack_c._1_3_,5);
        FUN_012f8c70(0x19);
        DisplayActionBuilder_addIntArg(pvVar9,uVar7);
        DisplayActionBuilder_addIntArg(pvVar9,iVar5);
        DisplayActionBuilder_addBoolArg(pvVar9,true);
        FUN_012d3550(pvVar9);
        piVar14 = local_a8;
      }
      if (*(uint **)((int)local_c0 + 8) <= local_b4) {
        FUN_00d83c2d();
      }
      local_b4 = local_b4 + 1;
      if (*(int **)((int)local_cc + 8) <= piVar14) {
        FUN_00d83c2d();
      }
      pvVar12 = local_c0;
      pvVar9 = local_cc;
      piVar14 = piVar14 + 1;
    }
  }
  iStack_c = CONCAT31(iStack_c._1_3_,4);
  if (puStack_70 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_70);
  }
  puStack_70 = (uint *)0x0;
  puStack_6c = (uint *)0x0;
  iStack_68 = 0;
  iStack_c = 0xffffffff;
  if (puStack_80 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_80);
  }
  ExceptionList = local_14;
  return 1;
}

