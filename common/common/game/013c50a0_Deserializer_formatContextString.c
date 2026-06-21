// addr: 0x013c50a0
// name: Deserializer_formatContextString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall Deserializer_formatContextString(int *param_1)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  undefined4 ***pppuVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined1 *puVar4;
  int unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_b4;
  undefined1 auStack_b0 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_ac;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_a0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *puStack_90;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_8c;
  undefined4 uStack_88;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_84;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_80;
  undefined1 auStack_7c [32];
  undefined4 uStack_5c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_4c [4];
  undefined4 **appuStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_30 [4];
  undefined4 **appuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds or formats a diagnostic/context string from deserializer state by
                       appending substrings and traversing related string containers. Exact message
                       format is not evident from the truncated decompile. */
  puStack_8 = &LAB_01689a19;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pbStack_b4;
  ExceptionList = &local_c;
  local_9c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_98 = 0;
  local_94 = 0;
  local_4 = 0;
  (**(code **)(*param_1 + 8))(&local_a0,DAT_01b839d8 ^ (uint)&stack0xffffff3c);
  FUN_013c4f70();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  pbStack_80 = local_9c;
  if (local_9c < local_a0) {
    FUN_00d83c2d();
  }
  if (local_9c < local_a0) {
    FUN_00d83c2d();
  }
  pbStack_b4 = local_a0;
  while( true ) {
    pbVar3 = pbStack_b4;
    if (&stack0x00000000 == (undefined1 *)0xa4) {
      FUN_00d83c2d();
    }
    if (pbVar3 == pbStack_80) {
      pbStack_84 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )pbStack_ac;
      puStack_90 = auStack_b0;
      iVar1 = 0;
      local_94 = 0;
      pbStack_8c = pbStack_ac;
      while( true ) {
        pbVar3 = pbStack_8c;
        puVar4 = puStack_90;
        if ((puStack_90 == (undefined1 *)0x0) || (puStack_90 != auStack_b0)) {
          FUN_00d83c2d();
        }
        if ((pbVar3 == pbStack_84) || (unaff_retaddr <= iVar1)) break;
        iVar1 = iVar1 + 1;
        FUN_013c2f80();
      }
      while( true ) {
        if ((puVar4 == (undefined1 *)0x0) || (puVar4 != auStack_b0)) {
          FUN_00d83c2d();
        }
        if (pbVar3 == pbStack_84) {
          puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
          FUN_013c49c0(&stack0xffffff48,auStack_b0,*(undefined4 *)pbStack_ac,auStack_b0,pbStack_ac);
                    /* WARNING: Subroutine does not return */
          _free(pbStack_ac);
        }
        pbStack_b4 = pbVar3;
        FUN_013c2f80();
        if (puVar4 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        pbVar3 = pbStack_b4;
        if (pbStack_b4 ==
            *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
             (puVar4 + 4)) {
          FUN_00d83c2d();
        }
        uStack_34 = 0xf;
        uStack_38 = 0;
        appuStack_48[0] = (undefined4 **)((uint)appuStack_48[0] & 0xffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (abStack_4c,pbVar3 + 0x10,0,0xffffffff);
        puStack_8._0_1_ = 4;
        pppuVar2 = (undefined4 ***)appuStack_48[0];
        if (uStack_34 < 0x10) {
          pppuVar2 = appuStack_48;
        }
        FUN_00d8e520(pppuVar2);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        if (0xf < uStack_34) break;
        uStack_34 = 0xf;
        uStack_38 = 0;
        appuStack_48[0] = (undefined4 **)((uint)appuStack_48[0] & 0xffffff00);
        FUN_013c2f80();
        pbVar3 = pbStack_8c;
        puVar4 = puStack_90;
      }
                    /* WARNING: Subroutine does not return */
      _free(appuStack_48[0]);
    }
    if (&stack0x00000000 == (undefined1 *)0xa4) {
      FUN_00d83c2d();
    }
    if (local_9c <= pbVar3) {
      FUN_00d83c2d();
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    appuStack_48[0] = (undefined4 **)((uint)appuStack_48[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_4c,pbVar3,0,0xffffffff);
    puStack_8._0_1_ = 2;
    StdString_appendSubstring(param_1 + 9,0,0xffffffff);
    uStack_18 = 0xf;
    uStack_1c = 0;
    appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_30,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 2),0,0xffffffff);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
    FUN_01241650(&DAT_01770234,1);
    StdString_appendSubstring(abStack_4c,0,0xffffffff);
    pppuVar2 = (undefined4 ***)appuStack_2c[0];
    if (uStack_18 < 0x10) {
      pppuVar2 = appuStack_2c;
    }
    iVar1 = FUN_00d8dd48(pppuVar2,auStack_7c);
    if (-1 < iVar1) {
      uStack_88 = uStack_5c;
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_013c4db0(&uStack_88);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)abStack_30,0,0xffffffff);
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    if (0xf < uStack_18) break;
    uStack_18 = 0xf;
    uStack_1c = 0;
    appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(appuStack_48[0]);
    }
    appuStack_48[0] = (undefined4 **)((uint)appuStack_48[0] & 0xffffff00);
    uStack_38 = 0;
    uStack_34 = 0xf;
    if (local_9c <= pbStack_b4) {
      FUN_00d83c2d();
    }
    pbStack_b4 = pbStack_b4 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  _free(appuStack_2c[0]);
}

