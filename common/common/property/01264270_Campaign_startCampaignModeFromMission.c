// addr: 0x01264270
// name: Campaign_startCampaignModeFromMission
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool Campaign_startCampaignModeFromMission(void) */

bool Campaign_startCampaignModeFromMission(void)

{
  bool bVar1;
  bool bVar2;
  uint index_;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  int *piVar7;
  void *this;
  undefined4 uVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *out;
  char local_4a;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Loads campaign mission data, finds MissionID properties, and starts campaign
                       game mode. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0165d3e8;
  local_c = ExceptionList;
  index_ = DAT_01b839d8 ^ (uint)&stack0xffffffa4;
  ExceptionList = &local_c;
  uVar8 = 0;
  FUN_012e0ba0();
  iVar3 = FUN_0124d010();
  FUN_012e0ba0();
  iVar4 = FUN_0124f2e0();
  local_4a = '\0';
  if (iVar4 != 0) {
    local_4a = *(char *)(iVar4 + 8);
  }
  pvVar5 = (void *)FUN_012eb290("MissionID",0);
  out = local_28;
  pvVar6 = pvVar5;
  FUN_012583b0();
  pvVar6 = PropertyValue_getStringAtIndex(out,pvVar6,index_);
  local_4 = 0;
  FUN_012aab80(pvVar6);
  piVar7 = (int *)DeckDB_getDeckByName(pvVar6);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  bVar1 = false;
  if (piVar7 != (int *)0x0) {
    local_40 = (void *)0x0;
    local_3c = 0;
    local_38 = 0;
    local_4 = 1;
    (**(code **)(*piVar7 + 0x4c))(local_44);
    if (local_40 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = local_3c - (int)local_40 >> 2;
    }
    bVar1 = iVar4 != 0;
    local_4 = 0xffffffff;
    if (local_40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    local_40 = (void *)0x0;
    local_3c = 0;
    local_38 = 0;
  }
  local_4 = 0xffffffff;
  CollectionDB_initSingleton();
  CollectionDB_resolveDefaultCollection();
  if (this == (void *)0x0) {
    bVar2 = false;
  }
  else {
    pvVar6 = PropertyContainer_getChildList(this);
    bVar2 = *(int *)((int)pvVar6 + 8) != 0;
  }
  if ((((iVar3 == 0) || (local_4a != '\x01')) || (!bVar1)) || (!bVar2)) {
    pvVar6 = Mem_Alloc(0x40);
    local_4 = 5;
    if (pvVar6 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uStack_2c = 0xf;
      uStack_30 = 0;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_44,"SetCampaignGameMode",0x13);
      local_4 = CONCAT31(local_4._1_3_,6);
      uVar8 = FUN_012ec110(local_44);
    }
    local_4 = 0xffffffff;
    if (pvVar6 != (void *)0x0) {
      if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      uStack_2c = 0xf;
      uStack_30 = 0;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
    }
    FUN_012ebe40("MissionID",pvVar5);
  }
  else {
    *(undefined1 *)(iVar3 + 0xb4) = 1;
    pvVar6 = Mem_Alloc(0x40);
    local_4 = 2;
    if (pvVar6 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28,"StartCampaignMode");
      local_4 = CONCAT31(local_4._1_3_,3);
      uVar8 = FUN_012ec110(local_28);
    }
    local_4 = 0xffffffff;
    if (pvVar6 != (void *)0x0) {
      FUN_0041f1d7();
    }
    FUN_012eba10(pvVar5);
  }
  FUN_012e5730(uVar8);
  FUN_012e5820(uVar8);
  ExceptionList = local_c;
  return true;
}

