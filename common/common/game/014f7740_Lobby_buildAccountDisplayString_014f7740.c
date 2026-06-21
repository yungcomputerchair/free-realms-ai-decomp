// addr: 0x014f7740
// name: Lobby_buildAccountDisplayString_014f7740
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
Lobby_buildAccountDisplayString_014f7740(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a lobby/account-related display string by consulting LobbyAccount
                       singleton data, appending substrings, and scanning vector/list records. Not
                       core game logic despite placement. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2cc8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_8c;
  ExceptionList = &local_c;
  local_84 = param_3;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    LobbyAccount_ensureSingleton();
    switch(param_2) {
    case 0xff1:
      FUN_012df3f0();
      local_4 = 0;
      PropertyValue_setString();
      local_4 = 0xffffffff;
      FUN_0041f1d7();
      uVar4 = 1;
      break;
    default:
      uVar4 = FUN_013111d0();
      break;
    case 0x1013:
      FUN_01251720();
      uVar4 = 1;
      break;
    case 0x1014:
      PropertyValue_setString();
      uVar4 = 1;
      break;
    case 0x103c:
      StdVector_size((void *)(param_1 + 0x30));
      FUN_01251720();
      uVar4 = 1;
      break;
    case 0x103d:
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      local_4 = 1;
      piVar3 = (int *)FUN_005e29d5();
      local_8c = *piVar3;
      local_88 = piVar3[1];
      piVar3 = (int *)FUN_005e29c1();
      iVar2 = *piVar3;
      uVar5 = piVar3[1];
      while( true ) {
        if ((iVar2 == 0) || (iVar2 != local_8c)) {
          FUN_00d83c2d();
        }
        if (uVar5 == local_88) break;
        if (iVar2 == 0) {
          FUN_00d83c2d();
        }
        if (*(uint *)(iVar2 + 8) <= uVar5) {
          FUN_00d83c2d();
        }
        FUN_012df3f0();
        local_4 = CONCAT31(local_4._1_3_,2);
        StdString_appendSubstring();
        uVar1 = uVar5 + 4;
        local_70 = uVar5;
        if ((*(uint *)(iVar2 + 8) < uVar1) || (uVar1 < *(uint *)(iVar2 + 4))) {
          FUN_00d83c2d();
        }
        if (iVar2 != local_8c) {
          FUN_00d83c2d();
        }
        if (uVar1 != local_88) {
          FUN_01241650();
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28);
        }
        bVar6 = *(uint *)(iVar2 + 8) <= uVar5;
        local_14 = 0xf;
        local_18 = 0;
        local_28 = (void *)((uint)local_28 & 0xffffff00);
        param_3 = local_84;
        uVar5 = uVar1;
        if (bVar6) {
          FUN_00d83c2d();
          param_3 = local_84;
        }
      }
      FUN_01300680();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_3 + 8),
                 local_48,0,0xffffffff);
      local_4 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      uVar4 = 1;
      break;
    case 0x103e:
      FUN_01251720();
      uVar4 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

