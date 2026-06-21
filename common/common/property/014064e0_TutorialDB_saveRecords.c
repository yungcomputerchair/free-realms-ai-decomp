// addr: 0x014064e0
// name: TutorialDB_saveRecords
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void TutorialDB_saveRecords(void * this) */

void __fastcall TutorialDB_saveRecords(void *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  char *pcVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_130 [4];
  void *local_12c;
  undefined4 local_11c;
  uint local_118;
  int local_114;
  undefined4 *local_110;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_10c [4];
  void *pvStack_108;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined1 local_f0 [20];
  undefined1 local_dc [20];
  undefined1 local_c8 [20];
  undefined1 local_b4 [20];
  uint local_a0 [3];
  undefined4 *local_94;
  char acStack_90 [128];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Serializes TutorialDB version/time data, initial values, decks, and each rule
                       set into packet buffers, storing them in ODB records named version,
                       initial_values, deck__1, deck__2, and rule__%d. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016914de;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_130;
  ExceptionList = &local_c;
  PacketBuffer_init(local_b4);
  local_4 = 0;
  Serializer_appendInteger(local_b4,*(uint *)((int)this + 0x18));
  __time64((__time64_t *)local_a0);
  Serializer_appendInteger(local_b4,local_a0[0]);
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_130,"version",7);
  local_4._0_1_ = 1;
  TutorialDB_addRuleRecord(this,(uint)local_b4,(char *)local_130);
  local_4._0_1_ = 0;
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  PacketBuffer_init(local_c8);
  local_4 = CONCAT31(local_4._1_3_,2);
  piVar2 = *(int **)((int)this + 0x38);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(local_c8,1);
  }
  else {
    bVar5 = Serializer_appendInteger(local_c8,0);
    if (bVar5) {
      (**(code **)(*piVar2 + 0x28))(local_c8);
    }
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_130,"initial_values",0xe);
  local_4._0_1_ = 3;
  TutorialDB_addRuleRecord(this,(uint)local_c8,(char *)local_130);
  local_4._0_1_ = 2;
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  PacketBuffer_init(local_f0);
  local_4 = CONCAT31(local_4._1_3_,4);
  piVar2 = *(int **)((int)this + 0x3c);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(local_f0,1);
  }
  else {
    bVar5 = Serializer_appendInteger(local_f0,0);
    if (bVar5) {
      (**(code **)(*piVar2 + 0x28))(local_f0);
    }
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_130,"deck__1",7);
  local_4._0_1_ = 5;
  TutorialDB_addRuleRecord(this,(uint)local_f0,(char *)local_130);
  local_4._0_1_ = 4;
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  PacketBuffer_init(local_dc);
  local_4 = CONCAT31(local_4._1_3_,6);
  piVar2 = *(int **)((int)this + 0x40);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(local_dc,1);
  }
  else {
    bVar5 = Serializer_appendInteger(local_dc,0);
    if (bVar5) {
      (**(code **)(*piVar2 + 0x28))(local_dc);
    }
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_130,"deck__2",7);
  local_4._0_1_ = 7;
  TutorialDB_addRuleRecord(this,(uint)local_dc,(char *)local_130);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_94 = *(undefined4 **)((int)this + 0xc);
  local_118 = 0xf;
  local_114 = (int)this + 8;
  local_110 = (undefined4 *)*local_94;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  while( true ) {
    puVar4 = local_110;
    iVar3 = local_114;
    if ((local_114 == 0) || (local_114 != (int)this + 8)) {
      FUN_00d83c2d();
    }
    if (puVar4 == local_94) break;
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == *(undefined4 **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)puVar4[4];
    if (piVar2 != (int *)0x0) {
      PacketBuffer_init(local_130);
      local_4._0_1_ = 8;
      TutorialDB_compressRuleSetToBuffer(piVar2,local_130);
      uVar6 = (**(code **)(*piVar2 + 0x44))();
      __snprintf(acStack_90,0x80,"rule__%d",uVar6);
      pcVar7 = acStack_90;
      uStack_f4 = 0xf;
      uStack_f8 = 0;
      pvStack_108 = (void *)((uint)pvStack_108 & 0xffffff00);
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_10c,acStack_90,(int)pcVar7 - (int)(acStack_90 + 1));
      local_4._0_1_ = 9;
      TutorialDB_addRuleRecord(this,(uint)local_130,(char *)abStack_10c);
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0xf < uStack_f4) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_108);
      }
      uStack_f4 = 0xf;
      uStack_f8 = 0;
      pvStack_108 = (void *)((uint)pvStack_108 & 0xffffff00);
      local_4 = CONCAT31(local_4._1_3_,6);
      RawBuffer_free(local_130);
    }
    StdRbTreeIterator24_advance(&local_114);
  }
  local_4._0_1_ = 4;
  RawBuffer_free(local_dc);
  local_4._0_1_ = 2;
  RawBuffer_free(local_f0);
  local_4 = (uint)local_4._1_3_ << 8;
  RawBuffer_free(local_c8);
  local_4 = 0xffffffff;
  RawBuffer_free(local_b4);
  ExceptionList = local_c;
  return;
}

