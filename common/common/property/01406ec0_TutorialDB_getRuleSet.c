// addr: 0x01406ec0
// name: TutorialDB_getRuleSet
// subsystem: common/common/property
// source (binary assert): common/common/property/TutorialDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall TutorialDB_getRuleSet(void *param_1,undefined4 param_2)

{
  char cVar1;
  int *key;
  undefined4 *extraout_EAX;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  void *outBuffer;
  int iVar6;
  void *pvVar7;
  undefined1 auStack_f0 [3];
  undefined1 local_ed;
  void *local_ec;
  void *local_e8;
  void *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_c8 [4];
  void *local_c4;
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_ac [20];
  undefined1 local_98 [8];
  char local_90 [128];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Returns a cached RuleSet for a rule id or loads a 'rule__%d' compressed blob,
                       uncompresses it, deserializes it, and caches the result. Evidence:
                       TutorialDB.cpp string 'rule__%d' and zlib error 'Couldn't uncompress an
                       ruleset', with map lookup and fallback to stored pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169163f;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_f0;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff00);
  ExceptionList = &local_c;
  iVar6 = *(int *)((int)param_1 + 0xc);
  pvVar7 = (void *)((int)param_1 + 8);
  local_e4 = param_1;
  RBTreeInt_lowerBound_ruleCache(pvVar7,local_98,&param_2,key);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != pvVar7)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar6) {
    __snprintf(local_90,0x80,"rule__%d",param_2);
    PacketBuffer_init(&local_dc);
    local_4 = 0;
    pcVar3 = local_90;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4 = (void *)((uint)local_c4 & 0xffffff00);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_c8,local_90,(int)pcVar3 - (int)(local_90 + 1));
    local_4._0_1_ = 1;
    uVar4 = TutorialDB_loadRecordToBuffer(local_e4,&local_dc,local_c8);
    local_ed = (char)uVar4 == '\0';
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4 = (void *)((uint)local_c4 & 0xffffff00);
    if (!(bool)local_ed) {
      local_ec = (void *)0x0;
      local_e0 = 0;
      Deserializer_readInteger(&local_dc,(int *)&local_ec);
      Deserializer_readInteger(&local_dc,&local_e0);
      outBuffer = Mem_Alloc((int)local_ec + 1);
      local_e8 = (void *)((int)local_ec + 1);
      pvVar7 = local_e8;
      if (local_d0 + local_e0 <= local_d8) {
        pvVar7 = (void *)(local_d0 + local_dc);
        local_d0 = local_d0 + local_e0;
      }
      iVar6 = Zlib_inflateBuffer(outBuffer,(uint *)&local_e8,pvVar7,local_e0);
      if (iVar6 != 0) {
        pcVar3 = "Couldn\'t uncompress an ruleset: %d zres: %d";
        uVar5 = param_2;
        WAErrorLog_write("Couldn\'t uncompress an ruleset: %d zres: %d");
        FUN_012f5a60("zres == 0","..\\common\\common\\property\\TutorialDB.cpp",0xd3,pcVar3,uVar5,
                     iVar6);
      }
      PacketBuffer_init(local_ac);
      local_4 = CONCAT31(local_4._1_3_,2);
      RawBuffer_assign(local_ac,outBuffer,local_ec,(uint)key);
                    /* WARNING: Subroutine does not return */
      _free(outBuffer);
    }
    local_4 = 0xffffffff;
    RawBuffer_free(&local_dc);
    uVar5 = 0;
  }
  else {
    puVar2 = RuleSetMap_getOrInsert(pvVar7,&param_2,key);
    uVar5 = *puVar2;
  }
  ExceptionList = local_c;
  return uVar5;
}

