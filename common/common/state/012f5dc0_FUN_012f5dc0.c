// addr: 0x012f5dc0
// name: FUN_012f5dc0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012f5dc0(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  uint *local_480;
  undefined1 local_47c [4];
  uint *local_478;
  uint *local_474;
  undefined4 local_470;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_46c [4];
  void *local_468;
  void *local_464;
  undefined4 local_460;
  undefined4 local_458;
  uint local_454;
  void *local_450;
  undefined1 local_44c [4];
  void *local_448;
  undefined4 local_438;
  uint local_434;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_430 [4];
  void *local_42c;
  undefined4 local_41c;
  uint local_418;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_414 [4];
  undefined1 local_410;
  undefined4 local_400;
  undefined4 local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Deserializes a state/command object with a mix of string and integer fields
                       through virtual begin/end hooks. No class-identifying evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016748fc;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_480;
  ExceptionList = &local_c;
  WAErrorLog_vwrite("wa_error.log",&stack0x00000008,DAT_01b839d8 ^ (uint)&stack0xfffffb70);
  __vsnprintf(local_3f8,1000,param_1,&stack0x00000008);
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_414,"wa_error\n",9);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  local_450 = Game_findByID(1);
  if (local_450 != (void *)0x0) {
    FUN_01241650("# clientCommands:\n",0x12);
    FUN_01365190(local_47c);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_480 = local_474;
    if (local_474 < local_478) {
      FUN_00d83c2d();
    }
    puVar4 = local_478;
    if (local_474 < local_478) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x47c) {
        FUN_00d83c2d();
      }
      if (puVar4 == local_480) break;
      if (&stack0x00000000 == (undefined1 *)0x47c) {
        FUN_00d83c2d();
      }
      if (local_474 <= puVar4) {
        FUN_00d83c2d();
      }
      uVar2 = FUN_012326a0(local_44c,&DAT_018d65dc,puVar4);
      local_4._0_1_ = 2;
      uVar2 = FUN_01249400(local_46c,uVar2,&DAT_01770548);
      local_4._0_1_ = 3;
      StdString_appendSubstring(uVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0xf < local_454) {
                    /* WARNING: Subroutine does not return */
        _free(local_468);
      }
      local_454 = 0xf;
      local_458 = 0;
      local_468 = (void *)((uint)local_468 & 0xffffff00);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0xf < local_434) {
                    /* WARNING: Subroutine does not return */
        _free(local_448);
      }
      local_434 = 0xf;
      local_438 = 0;
      local_448 = (void *)((uint)local_448 & 0xffffff00);
      if (local_474 <= puVar4) {
        FUN_00d83c2d();
      }
      puVar4 = puVar4 + 7;
    }
    FUN_01241650("# gameCommands:\n",0x10);
    uVar2 = FUN_01365200(local_46c);
    local_4._0_1_ = 4;
    StdVector28_assign(uVar2);
    puVar4 = local_474;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (local_468 != (void *)0x0) {
      StdStringRange_destroy(local_468,local_464);
                    /* WARNING: Subroutine does not return */
      _free(local_468);
    }
    local_468 = (void *)0x0;
    local_464 = (void *)0x0;
    local_460 = 0;
    if (local_474 < local_478) {
      FUN_00d83c2d();
    }
    puVar6 = local_478;
    if (local_474 < local_478) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x47c) {
        FUN_00d83c2d();
      }
      if (puVar6 == puVar4) break;
      if (&stack0x00000000 == (undefined1 *)0x47c) {
        FUN_00d83c2d();
      }
      if (local_474 <= puVar6) {
        FUN_00d83c2d();
      }
      uVar2 = FUN_012326a0(local_46c,&DAT_018d65dc,puVar6);
      local_4._0_1_ = 5;
      uVar2 = FUN_01249400(local_44c,uVar2,&DAT_01770548);
      local_4._0_1_ = 6;
      StdString_appendSubstring(uVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (0xf < local_434) {
                    /* WARNING: Subroutine does not return */
        _free(local_448);
      }
      local_434 = 0xf;
      local_438 = 0;
      local_448 = (void *)((uint)local_448 & 0xffffff00);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0xf < local_454) {
                    /* WARNING: Subroutine does not return */
        _free(local_468);
      }
      local_454 = 0xf;
      local_458 = 0;
      local_468 = (void *)((uint)local_468 & 0xffffff00);
      if (local_474 <= puVar6) {
        FUN_00d83c2d();
      }
      puVar6 = puVar6 + 7;
    }
    FUN_01241650("StateStack:\n",0xc);
    local_418 = 0xf;
    local_41c = 0;
    local_42c = (void *)((uint)local_42c & 0xffffff00);
    local_4._0_1_ = 7;
    pbVar7 = local_430;
    pvVar3 = Game_getCurrentTurn(local_450);
    GameTurn_getCurrentStateMachine(pvVar3);
    GameTurn_describeStateStack(pbVar7);
    StdString_appendSubstring(local_430,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_418) {
                    /* WARNING: Subroutine does not return */
      _free(local_42c);
    }
    local_418 = 0xf;
    local_41c = 0;
    local_42c = (void *)((uint)local_42c & 0xffffff00);
    local_4._0_1_ = 0;
    if (local_478 != (uint *)0x0) {
      if (local_478 != local_474) {
        puVar4 = local_478 + 6;
        do {
          if (0xf < *puVar4) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar4[-5]);
          }
          *puVar4 = 0xf;
          puVar4[-1] = 0;
          *(undefined1 *)(puVar4 + -5) = 0;
          puVar6 = puVar4 + 1;
          puVar4 = puVar4 + 7;
        } while (puVar6 != local_474);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_478);
    }
    local_478 = (uint *)0x0;
    local_474 = (uint *)0x0;
    local_470 = 0;
  }
  pvVar3 = local_450;
  local_480 = Mem_Alloc(100);
  local_4._0_1_ = 8;
  if (local_480 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)Exception_ctor();
  }
  local_4._0_1_ = 0;
  pcVar5 = local_3f8;
  local_418 = 0xf;
  local_41c = 0;
  local_42c = (void *)((uint)local_42c & 0xffffff00);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_430,local_3f8,(int)pcVar5 - (int)(local_3f8 + 1));
  local_4._0_1_ = 9;
  Exception_setMessage(puVar4,local_430);
  local_4._0_1_ = 0;
  if (0xf < local_418) {
                    /* WARNING: Subroutine does not return */
    _free(local_42c);
  }
  local_418 = 0xf;
  local_41c = 0;
  local_42c = (void *)((uint)local_42c & 0xffffff00);
  Exception_setFunctionName(puVar4,local_414);
  local_454 = 0xf;
  local_458 = 0;
  local_468 = (void *)((uint)local_468 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_46c,"",0);
  local_4._0_1_ = 10;
  Exception_setSourceFile(puVar4,local_46c);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_454) {
                    /* WARNING: Subroutine does not return */
    _free(local_468);
  }
  local_454 = 0xf;
  local_458 = 0;
  local_468 = (void *)((uint)local_468 & 0xffffff00);
  Exception_setLineNumber(puVar4,0);
  if (pvVar3 != (void *)0x0) {
    Game_logException(pvVar3,puVar4);
  }
  local_480 = puVar4;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_480,&DAT_01aa602c);
}

