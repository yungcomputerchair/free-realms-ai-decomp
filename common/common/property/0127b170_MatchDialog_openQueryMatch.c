// addr: 0x0127b170
// name: MatchDialog_openQueryMatch
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool MatchDialog_openQueryMatch(void) */

bool MatchDialog_openQueryMatch(void)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  void *self;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  void *handle;
  undefined4 *puVar7;
  void *handle_00;
  char ****value;
  void *this;
  void *handle_01;
  int unaff_EBP;
  int *piStack_1a0;
  int *piStack_19c;
  int *piStack_198;
  void *pvStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int *local_188;
  undefined4 uStack_184;
  void *pvStack_180;
  undefined4 uStack_17c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_178 [4];
  void *pvStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  char ***pppcStack_168;
  void *pvStack_164;
  uint uStack_160;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_15c [4];
  void *local_158;
  uint uStack_154;
  uint uStack_150;
  undefined1 uStack_14c;
  undefined4 local_148;
  uint local_144;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_140 [4];
  void *pvStack_13c;
  undefined4 uStack_138;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_130 [4];
  uint uStack_12c;
  uint uStack_128;
  void *pvStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_108 [4];
  void *local_104;
  undefined4 local_f4;
  uint local_f0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_ec [4];
  void *pvStack_e8;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined1 uStack_c8;
  undefined1 auStack_bc [4];
  void *pvStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined1 auStack_8c [120];
  undefined1 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Opens the match dialog for query matchmaking, handling debug playtest deck
                       names, cancel-query callback setup, dialog properties, and optional deck
                       selection. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01664b01;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&piStack_1a0;
  ExceptionList = &local_c;
  FUN_012e0ba0();
  piVar4 = (int *)FUN_0127a580();
  local_f0 = 0xf;
  local_f4 = 0;
  local_104 = (void *)((uint)local_104 & 0xffffff00);
  local_188 = piVar4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_108,"/debug/debug_mode",0x11);
  local_4 = 0;
  FUN_012e4410();
  FUN_012e3460();
  if (piVar4 == (int *)0x0) goto LAB_0127baf9;
  local_144 = 0xf;
  local_148 = 0;
  local_158 = (void *)((uint)local_158 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_15c,"",0);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*piVar4 + 0xc))();
  local_10 = local_10 & 0xffffff00;
  if (0xf < uStack_150) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_164);
  }
  uStack_150 = 0xf;
  uStack_154 = 0;
  pvStack_164 = (void *)((uint)pvStack_164 & 0xffffff00);
  FUN_012cfde0();
  FUN_012cc6b0();
  piStack_1a0 = (int *)0x0;
  piStack_19c = (int *)0x0;
  piStack_198 = (int *)0x0;
  local_10._0_1_ = 2;
  FUN_0130a060();
  piVar4 = piStack_1a0;
  bVar1 = false;
  if (piStack_19c < piStack_1a0) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar2 = piStack_19c;
    if (piStack_19c < piStack_1a0) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar2) break;
    if (piStack_19c <= piVar4) {
      FUN_00d83c2d();
    }
    unaff_EBP = *piVar4;
    FUN_012cfde0();
    iVar5 = FUN_012cc710();
    if (iVar5 != 0) {
      uStack_16c = 0xf;
      uStack_170 = 0;
      pvStack_180 = (void *)((uint)pvStack_180 & 0xffffff00);
      local_10._0_1_ = 3;
      cVar3 = FUN_01309080();
      if (cVar3 != '\0') {
        bVar1 = true;
        local_10._0_1_ = 2;
        if (0xf < uStack_16c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_180);
        }
        uStack_16c = 0xf;
        uStack_170 = 0;
        pvStack_180 = (void *)((uint)pvStack_180._1_3_ << 8);
        break;
      }
      local_10._0_1_ = 2;
      if (0xf < uStack_16c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_180);
      }
      uStack_16c = 0xf;
      uStack_170 = 0;
      pvStack_180 = (void *)((uint)pvStack_180._1_3_ << 8);
    }
    if (piStack_19c <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  self = (void *)FUN_012e0ba0();
  piVar4 = ThreadLocalObject_getCurrentValue(self);
  uStack_118 = 0xf;
  uStack_11c = 0;
  uStack_12c = uStack_12c & 0xffffff00;
  local_10 = CONCAT31(local_10._1_3_,4);
  if (bVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_130,"playtest_a",10);
    (**(code **)(*piVar4 + 0x60))();
    uStack_138 = 0xf;
    pvStack_13c = (void *)0x0;
    uStack_14c = 0;
    uStack_14 = 5;
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (**(code **)(*piVar4 + 0x5c))();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_140,pbVar6,0,0xffffffff);
    DisplayActionManager_ensureSingleton();
    iVar5 = FUN_012d08f0();
    LobbyCommand_Join_ctor(auStack_8c);
    local_4._0_1_ = 6;
    PropertyRange_setStart(auStack_8c,iVar5);
    PropertyRange_setEnd2(auStack_8c,unaff_EBP);
    PropertyRange_setFlags(auStack_8c,2);
    local_144 = 0xf;
    local_148 = 0;
    local_158 = (void *)((uint)local_158 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_15c,"",0);
    local_4._0_1_ = 7;
    LobbyCommand_Join_setJoinString(auStack_8c,local_15c);
    local_4._0_1_ = 6;
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    local_144 = 0xf;
    local_148 = 0;
    local_158 = (void *)((uint)local_158 & 0xffffff00);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    uStack_160 = 0xf;
    pvStack_164 = (void *)0x0;
    pvStack_174 = (void *)((uint)pvStack_174 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_178,"testdeck",8);
    local_4._0_1_ = 8;
    FUN_012aab80();
    puVar7 = (undefined4 *)DeckDB_getDeckByName();
    local_4._0_1_ = 6;
    if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_174);
    }
    uStack_160 = 0xf;
    pvStack_164 = (void *)0x0;
    pvStack_174 = (void *)((uint)pvStack_174 & 0xffffff00);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_012aab80();
      puVar7 = (undefined4 *)DeckDB_getDeckByName();
    }
    MatchCommand_SelectDeck_ctor(auStack_bc);
    local_4 = CONCAT31(local_4._1_3_,9);
    PropertyRange_setStart(auStack_bc,iVar5);
    PropertyRange_setEnd(auStack_bc,(int)piStack_19c);
    MatchCommand_SelectDeck_ctor(auStack_bc,puVar7);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle_00);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)();
    }
    local_4._0_1_ = 6;
    MatchCommand_SelectDeck_dtor(auStack_bc);
    local_4._0_1_ = 5;
    LobbyCommand_Join_dtor(auStack_8c);
    local_4._0_1_ = 4;
    if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_13c);
    }
    uStack_128 = 0xf;
    uStack_12c = 0;
    pvStack_13c = (void *)((uint)pvStack_13c & 0xffffff00);
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_130,"playtest_b",10);
    (**(code **)(*piVar4 + 0x60))();
    uStack_154 = 0xf;
    local_158 = (void *)0x0;
    pppcStack_168 = (char ***)((uint)pppcStack_168 & 0xffffff00);
    uStack_14 = 10;
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (**(code **)(*piVar4 + 0x5c))();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_16c,pbVar6
               ,0,0xffffffff);
    PropertySet_ctor(&uStack_150);
    uStack_14 = 0xb;
    MatchDialog_setStringProperty(&uStack_150,0xfa6,"Test");
    MatchDialog_setStringProperty(&uStack_150,0xfad,"");
    FUN_0127a170(&uStack_150,0xfaa,1);
    FUN_0127a170(&uStack_150,0xfa8,2);
    FUN_0127a170(&uStack_150,0xfa9,1);
    value = (char ****)pppcStack_168;
    if (uStack_154 < 0x10) {
      value = &pppcStack_168;
    }
    MatchDialog_setStringProperty(&uStack_150,0xfb0,(char *)value);
    FUN_0127a170(&uStack_150,0xfa7,1);
    PropertySet_setDefaultValueData(&uStack_150,0xfb1,'\0');
    FUN_0127a170(&uStack_150,0x273,0);
    MatchDialog_setStringProperty(&uStack_150,0x1081,"");
    ArchetypeDB_getInstance();
    Archetype_getField3c(this);
    FUN_0127a170();
    FUN_012fa910();
    uStack_184 = 0;
    pvStack_180 = (void *)0x0;
    uStack_17c = 0;
    uStack_14 = 0xd;
    FUN_01300680();
    FUN_005f1e5c();
    uStack_14 = 0xc;
    uStack_184 = 0;
    pvStack_180 = (void *)0x0;
    uStack_17c = 0;
    ValueData_ctor(&pvStack_194);
    uStack_14 = 0xc;
    MatchDialog_setDefaultProperty(&uStack_150,0xfa5);
    piVar4 = piStack_198;
    uStack_b4 = 0xf;
    pvStack_b8 = (void *)0x0;
    uStack_c8 = 0;
    uStack_14 = 0xf;
    (**(code **)(*piStack_198 + 0x18))();
    uStack_d4 = 0xf;
    uStack_d8 = 0;
    pvStack_e8 = (void *)((uint)pvStack_e8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_ec,"OpenDialog",10);
    local_4._0_1_ = 0x10;
    FUN_012ec220();
    local_4._0_1_ = 0xf;
    if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e8);
    }
    uStack_d4 = 0xf;
    uStack_d8 = 0;
    pvStack_e8 = (void *)((uint)pvStack_e8 & 0xffffff00);
    PropertyContainer_getField11C(piVar4);
    FUN_012ebe40();
    FUN_012ebe00();
    FUN_012ebe00();
    FUN_012ebde0();
    FUN_012ebde0();
    FUN_012ebde0();
    FUN_012e5730();
    FUN_012e5820();
    uStack_160 = 0xf;
    pvStack_164 = (void *)0x0;
    pvStack_174 = (void *)((uint)pvStack_174 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_178,"testdeck",8);
    local_4._0_1_ = 0x11;
    FUN_012aab80();
    puVar7 = (undefined4 *)DeckDB_getDeckByName();
    local_4._0_1_ = 0xf;
    if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_174);
    }
    uStack_160 = 0xf;
    pvStack_164 = (void *)0x0;
    pvStack_174 = (void *)((uint)pvStack_174 & 0xffffff00);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_012aab80();
      puVar7 = (undefined4 *)DeckDB_getDeckByName();
      if (puVar7 != (undefined4 *)0x0) goto LAB_0127b990;
    }
    else {
LAB_0127b990:
      MatchCommand_SelectDeck_ctor(abStack_ec);
      local_4 = CONCAT31(local_4._1_3_,0x12);
      DisplayActionManager_ensureSingleton();
      iVar5 = FUN_012d08f0();
      PropertyRange_setStart(abStack_ec,iVar5);
      iVar5 = PropertyContainer_getField11C(piVar4);
      PropertyRange_setEnd(abStack_ec,iVar5);
      MatchCommand_SelectDeck_ctor(abStack_ec,puVar7);
      DisplayActionManager_ensureSingleton();
      CommandHandle_releaseIfPresent(handle_01);
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)();
      }
      local_4._0_1_ = 0xf;
      MatchCommand_SelectDeck_dtor(abStack_ec);
    }
    local_4 = CONCAT31(local_4._1_3_,0xc);
    if (0xf < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_b8);
    }
    uStack_a4 = 0xf;
    uStack_a8 = 0;
    pvStack_b8 = (void *)((uint)pvStack_b8 & 0xffffff00);
    local_4._0_1_ = 0xb;
    FUN_01300cd0();
    local_4._0_1_ = 10;
    FUN_01312690();
    local_4._0_1_ = 4;
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    local_144 = 0xf;
    local_148 = 0;
    local_158 = (void *)((uint)local_158 & 0xffffff00);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < uStack_10c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_120);
  }
  uStack_10c = 0xf;
  uStack_110 = 0;
  pvStack_120 = (void *)((uint)pvStack_120 & 0xffffff00);
  local_4 = (uint)local_4._1_3_ << 8;
  if (pvStack_194 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_194);
  }
  pvStack_194 = (void *)0x0;
  uStack_190 = 0;
  uStack_18c = 0;
LAB_0127baf9:
  local_4 = 0xffffffff;
  if (local_f0 < 0x10) {
    ExceptionList = local_c;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_104);
}

