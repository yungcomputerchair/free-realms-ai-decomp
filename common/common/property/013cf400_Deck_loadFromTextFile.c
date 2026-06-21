// addr: 0x013cf400
// name: Deck_loadFromTextFile
// subsystem: common/common/property
// source (binary assert): common/common/property/Deck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* Setting prototype: bool Deck_loadFromTextFile(char * path, void * logger) */

bool Deck_loadFromTextFile(char *path,void *logger)

{
  int *piVar1;
  void *value;
  FILE *file;
  int iVar2;
  undefined4 *******pppppppuVar3;
  uint uVar4;
  long lVar5;
  char *******pppppppcVar6;
  undefined1 auStack_b0 [4];
  FILE *local_ac;
  int *local_a8;
  long lStack_a4;
  long lStack_a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_9c [4];
  char *******local_98 [4];
  uint local_88;
  uint local_84;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [4];
  undefined4 *******local_7c [4];
  uint local_6c;
  uint local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  undefined4 *******local_60 [4];
  uint local_50;
  uint local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_48 [4];
  char *******apppppppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 *******local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Parses a deck text file, filling deck id/name fields and card entries from
                       lines beginning 'Deck ID:', 'Deck Name:', and 'Card '. Evidence: Deck.cpp
                       strings include those tokens, comment skipping, parse diagnostics,
                       fopen/fclose, and assertions for card id delimiters. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ab0b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_b0;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff40);
  ExceptionList = &local_c;
  file = _fopen(path,"r");
  local_ac = file;
  if (file == (FILE *)0x0) {
    Game_logGeneral(logger,"Couldn\'t open text file: %s\n",path);
                    /* WARNING: Subroutine does not return */
    CRT_exit(0);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined4 *******)((uint)local_60[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_64,"Deck ID: ",9);
  local_4 = 0;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (undefined4 *******)((uint)local_7c[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_80,"Deck Name: ",0xb);
  local_4._0_1_ = 1;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 *******)((uint)local_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_2c,"Card ",5);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = CRT_feof(file);
  piVar1 = local_a8;
  do {
    if (iVar2 != 0) {
      _fclose(local_ac);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28[0] = (undefined4 *******)((uint)local_28[0] & 0xffffff00);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c[0]);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = (undefined4 *******)((uint)local_7c[0] & 0xffffff00);
      local_4 = 0xffffffff;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_60[0]);
      }
      ExceptionList = local_c;
      return true;
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = (char *******)((uint)local_98[0] & 0xffffff00);
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 3;
    local_a8 = piVar1;
    (**(code **)(*piVar1 + 0x68))(local_ac,local_9c);
    iVar2 = CRT_feof(local_ac);
    if (iVar2 == 0) {
      if (local_88 == 0) {
        FUN_00d81e1a();
      }
      pppppppcVar6 = local_98[0];
      if (local_84 < 0x10) {
        pppppppcVar6 = (char *******)local_98;
      }
      if (*(char *)pppppppcVar6 == '#') {
        Game_logGeneral(logger,"discarding line, is a comment\n",value);
      }
      else {
        pppppppuVar3 = local_60[0];
        if (local_4c < 0x10) {
          pppppppuVar3 = local_60;
        }
        iVar2 = FUN_01231320(pppppppuVar3,0,local_50);
        if (iVar2 != -1) {
          pppppppuVar3 = local_60[0];
          if (local_4c < 0x10) {
            pppppppuVar3 = local_60;
          }
          iVar2 = FUN_01231320(pppppppuVar3,0,local_50);
          if (iVar2 == 0) {
            Game_logGeneral(logger,"got deckID!\n",value);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                      (local_9c,0,local_50);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (piVar1 + 1),
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)local_9c,0,0xffffffff);
            if ((uint)piVar1[7] < 0x10) {
              Game_logGeneral(logger,"deckID set to: %s\n",piVar1 + 2);
            }
            else {
              Game_logGeneral(logger,"deckID set to: %s\n",piVar1[2]);
            }
            goto joined_r0x013cf961;
          }
        }
        pppppppuVar3 = local_7c[0];
        if (local_68 < 0x10) {
          pppppppuVar3 = local_7c;
        }
        iVar2 = FUN_01231320(pppppppuVar3,0,local_6c);
        if (iVar2 != -1) {
          pppppppuVar3 = local_7c[0];
          if (local_68 < 0x10) {
            pppppppuVar3 = local_7c;
          }
          iVar2 = FUN_01231320(pppppppuVar3,0,local_6c);
          if (iVar2 == 0) {
            Game_logGeneral(logger,"got deckName!\n",value);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                      (local_9c,0,local_6c);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (piVar1 + 0xf),
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)local_9c,0,0xffffffff);
            if ((uint)piVar1[0x15] < 0x10) {
              Game_logGeneral(logger,"deckName set to: %s\n",piVar1 + 0x10);
            }
            else {
              Game_logGeneral(logger,"deckName set to: %s\n",piVar1[0x10]);
            }
            goto joined_r0x013cf961;
          }
        }
        pppppppuVar3 = local_28[0];
        if (local_14 < 0x10) {
          pppppppuVar3 = local_28;
        }
        iVar2 = FUN_01231320(pppppppuVar3,0,local_18);
        if (iVar2 != -1) {
          pppppppuVar3 = local_28[0];
          if (local_14 < 0x10) {
            pppppppuVar3 = local_28;
          }
          iVar2 = FUN_01231320(pppppppuVar3,0,local_18);
          if (iVar2 == 0) {
            Game_logGeneral(logger,"got Card!\n",value);
            auStack_b0[0] = 0x28;
            iVar2 = FUN_01231320(auStack_b0,0,1);
            if (iVar2 == -1) {
              FUN_012f5a60("idpos != std::string::npos","..\\common\\common\\property\\Deck.cpp",
                           0x1eb);
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                      (local_9c,0,iVar2 + 1);
            auStack_b0[0] = 0x29;
            uVar4 = FUN_01231320(auStack_b0,0,1);
            if (uVar4 == 0xffffffff) {
              FUN_012f5a60("idpos != std::string::npos","..\\common\\common\\property\\Deck.cpp",
                           0x1ee);
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                      (local_9c,uVar4,0xffffffff);
            uStack_30 = 0xf;
            uStack_34 = 0;
            apppppppcStack_44[0] = (char *******)((uint)apppppppcStack_44[0] & 0xffffff00);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (abStack_48,
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)local_9c,0,0xffffffff);
            local_4._0_1_ = 4;
            auStack_b0[0] = 0x2c;
            iVar2 = FUN_01231320(auStack_b0,0,1);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                      (abStack_48,0,iVar2 + 1);
            auStack_b0[0] = 0x2c;
            uVar4 = FUN_01231320(auStack_b0,0,1);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                      (local_9c,uVar4,local_88);
            pppppppcVar6 = local_98[0];
            if (local_84 < 0x10) {
              pppppppcVar6 = (char *******)local_98;
            }
            lVar5 = _atol((char *)pppppppcVar6);
            Game_logGeneral(logger,"got ID = %d (%s)\n",lVar5);
            pppppppcVar6 = apppppppcStack_44[0];
            if (uStack_30 < 0x10) {
              pppppppcVar6 = (char *******)apppppppcStack_44;
            }
            lVar5 = _atol((char *)pppppppcVar6);
            Game_logGeneral(logger,"got Instance = %d (%s)\n",lVar5);
            pppppppcVar6 = local_98[0];
            if (local_84 < 0x10) {
              pppppppcVar6 = (char *******)local_98;
            }
            lStack_a4 = _atol((char *)pppppppcVar6);
            pppppppcVar6 = apppppppcStack_44[0];
            if (uStack_30 < 0x10) {
              pppppppcVar6 = (char *******)apppppppcStack_44;
            }
            lStack_a0 = _atol((char *)pppppppcVar6);
            StdRbTree_insertValueMaybeRebalance(local_a8 + 0x1e,&lStack_a4,value);
            local_4._0_1_ = 3;
            if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
              _free(apppppppcStack_44[0]);
            }
            uStack_30 = 0xf;
            uStack_34 = 0;
            apppppppcStack_44[0] = (char *******)((uint)apppppppcStack_44[0] & 0xffffff00);
          }
        }
      }
    }
joined_r0x013cf961:
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_98[0]);
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = (char *******)((uint)local_98[0] & 0xffffff00);
    iVar2 = CRT_feof(local_ac);
    piVar1 = local_a8;
  } while( true );
}

