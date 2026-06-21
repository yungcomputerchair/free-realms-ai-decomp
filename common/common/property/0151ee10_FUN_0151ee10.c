// addr: 0x0151ee10
// name: FUN_0151ee10
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0151f1a5) */
/* Setting prototype: bool UserDataCommand_applyDeckData(void * ctx) */

bool __fastcall UserDataCommand_applyDeckData(void *ctx)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  void *pvVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  void *pvVar6;
  void *pvVar7;
  int value_;
  undefined4 *puVar8;
  uint *puVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  undefined4 *local_50;
  undefined1 auStack_4c [4];
  uint *local_48;
  uint *local_44;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  uint *local_38;
  uint *local_34;
  undefined4 local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds display/action payloads from deck data, adds missing decks to DeckDB,
                       and appends vector arguments. */
  puStack_8 = &LAB_016b850b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_50;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_c;
  local_38 = (uint *)0x0;
  local_34 = (uint *)0x0;
  local_30 = 0;
  local_48 = (uint *)0x0;
  local_44 = (uint *)0x0;
  local_40 = 0;
  local_4 = 1;
  puVar8 = *(undefined4 **)((int)ctx + 0xe0);
  if (*(undefined4 **)((int)ctx + 0xe4) < puVar8) {
    FUN_00d83c2d();
  }
  while( true ) {
    local_50 = *(undefined4 **)((int)ctx + 0xe4);
    if (local_50 < *(undefined4 **)((int)ctx + 0xe0)) {
      FUN_00d83c2d();
    }
    if (ctx == (void *)0xffffff24) {
      FUN_00d83c2d();
    }
    if (puVar8 == local_50) break;
    if (ctx == (void *)0xffffff24) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)ctx + 0xe4) <= puVar8) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)*puVar8;
    pbVar5 = Deck_getPropertyList(piVar2);
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar5,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    pbVar10 = local_2c;
    pvVar6 = (void *)FUN_012aab80();
    FixedRecordVector_removeRecordByString(pvVar6,pbVar10);
    pvVar6 = (void *)(**(code **)(*piVar2 + 0x74))();
    pvVar7 = (void *)FUN_012aab80();
    bVar3 = DeckDB_addDeckIfMissing(pvVar7,pvVar6);
    if (bVar3) {
      StdVector28_pushBack(auStack_3c,local_2c,pvVar4);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    if (*(undefined4 **)((int)ctx + 0xe4) <= puVar8) {
      FUN_00d83c2d();
    }
    puVar8 = puVar8 + 1;
  }
  puVar8 = *(undefined4 **)((int)ctx + 0xf0);
  if (*(undefined4 **)((int)ctx + 0xf4) < puVar8) {
    FUN_00d83c2d();
  }
  while( true ) {
    local_50 = *(undefined4 **)((int)ctx + 0xf4);
    if (local_50 < *(undefined4 **)((int)ctx + 0xf0)) {
      FUN_00d83c2d();
    }
    if (ctx == (void *)0xffffff14) {
      FUN_00d83c2d();
    }
    if (puVar8 == local_50) break;
    if (ctx == (void *)0xffffff14) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)ctx + 0xf4) <= puVar8) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)*puVar8;
    pbVar5 = Deck_getPropertyList(piVar2);
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar5,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,3);
    pbVar10 = local_2c;
    pvVar6 = (void *)FUN_012aab80();
    FixedRecordVector_removeRecordByString(pvVar6,pbVar10);
    pvVar6 = (void *)(**(code **)(*piVar2 + 0x74))();
    pvVar7 = (void *)FUN_012aab80();
    bVar3 = DeckDB_addDeckIfMissing(pvVar7,pvVar6);
    if (bVar3) {
      StdVector28_pushBack(auStack_4c,local_2c,pvVar4);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    if (*(undefined4 **)((int)ctx + 0xf4) <= puVar8) {
      FUN_00d83c2d();
    }
    puVar8 = puVar8 + 1;
  }
  local_50 = Mem_Alloc(0x14);
  local_4._0_1_ = 4;
  if (local_50 == (undefined4 *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)FUN_012f9eb0();
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_012f8c70(0xf9);
  DisplayActionBuilder_addIntArg(pvVar4,*(int *)((int)ctx + 8));
  DisplayActionBuilder_addVector28Arg(pvVar4,(void *)((int)ctx + 0xc));
  DisplayActionBuilder_addVector28Arg(pvVar4,(void *)((int)ctx + 0x1c));
  DisplayActionBuilder_addVector28Arg(pvVar4,(void *)((int)ctx + 0x2c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0x3c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0x4c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0x5c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0x6c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0x7c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0x8c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0x9c));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0xbc));
  DisplayActionBuilder_addObjectArg(pvVar4,(void *)((int)ctx + 0xcc));
  DisplayActionBuilder_addVector28Arg(pvVar4,auStack_3c);
  DisplayActionBuilder_addVector28Arg(pvVar4,auStack_4c);
  if (*(int *)((int)ctx + 0xb0) == 0) {
    value_ = 0;
  }
  else {
    value_ = *(int *)((int)ctx + 0xb4) - *(int *)((int)ctx + 0xb0) >> 4;
  }
  DisplayActionBuilder_addIntArg(pvVar4,value_);
  puVar8 = *(undefined4 **)((int)ctx + 0xb0);
  if (*(undefined4 **)((int)ctx + 0xb4) < puVar8) {
    FUN_00d83c2d();
  }
  while( true ) {
    local_50 = *(undefined4 **)((int)ctx + 0xb4);
    if (local_50 < *(undefined4 **)((int)ctx + 0xb0)) {
      FUN_00d83c2d();
    }
    if (puVar8 == local_50) break;
    if (*(undefined4 **)((int)ctx + 0xb4) <= puVar8) {
      FUN_00d83c2d();
    }
    DisplayActionBuilder_addObjectArg(pvVar4,puVar8);
    if (*(undefined4 **)((int)ctx + 0xb4) <= puVar8) {
      FUN_00d83c2d();
    }
    puVar8 = puVar8 + 4;
  }
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar4);
  local_4 = local_4 & 0xffffff00;
  if (local_48 != (uint *)0x0) {
    if (local_48 != local_44) {
      puVar9 = local_48 + 6;
      do {
        if (0xf < *puVar9) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar9[-5]);
        }
        *puVar9 = 0xf;
        puVar9[-1] = 0;
        *(undefined1 *)(puVar9 + -5) = 0;
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 7;
      } while (puVar1 != local_44);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  local_48 = (uint *)0x0;
  local_44 = (uint *)0x0;
  local_40 = 0;
  local_4 = 0xffffffff;
  if (local_38 == (uint *)0x0) {
    ExceptionList = local_c;
    return true;
  }
  if (local_38 != local_34) {
    puVar9 = local_38 + 6;
    do {
      if (0xf < *puVar9) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar9[-5]);
      }
      *puVar9 = 0xf;
      puVar9[-1] = 0;
      *(undefined1 *)(puVar9 + -5) = 0;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 7;
    } while (puVar1 != local_34);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_38);
}

