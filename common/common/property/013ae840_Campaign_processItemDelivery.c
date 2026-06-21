// addr: 0x013ae840
// name: Campaign_processItemDelivery
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Campaign_processItemDelivery(void * campaign) */

void __fastcall Campaign_processItemDelivery(void *campaign)

{
  bool bVar1;
  char cVar2;
  void *owner;
  void *this;
  void *extraout_EAX;
  void *pvVar3;
  void *this_00;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  void *pvVar9;
  uint local_148;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_144 [4];
  void *local_140;
  undefined4 local_130;
  uint local_12c;
  void *local_128;
  undefined1 *puStack_124;
  void *pvStack_120;
  undefined1 local_11c [4];
  void *local_118;
  void *local_114;
  undefined4 local_110;
  void *pvStack_10c;
  undefined1 auStack_108 [4];
  void *pvStack_104;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined1 local_ec [16];
  int iStack_dc;
  int local_d8 [3];
  undefined1 uStack_cb;
  undefined1 uStack_c6;
  undefined1 local_c4 [180];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Processes pending campaign item delivery once, builds Delivery/Archetypes
                       views, sends ItemDelivery and CampaignScreenUpdate UI messages with the
                       transaction id, then clears delivery state. */
  puStack_8 = &LAB_01686ca3;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_148;
  owner = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffea8);
  ExceptionList = &local_c;
  local_148 = 0;
  if (*(char *)((int)campaign + 0xdc) != '\0') {
    local_118 = (void *)0x0;
    local_114 = (void *)0x0;
    local_110 = 0;
    local_4 = 0;
    pvVar9 = *(void **)((int)campaign + 0xa8);
    puVar8 = local_11c;
    local_128 = campaign;
    SynchronizationService_ensureSingleton();
    bVar1 = Campaign_processDeliveryEntryVector(this,pvVar9,(uint)puVar8);
    if ((bVar1) && (*(int *)((int)campaign + 0xb0) == 0)) {
      Engine_ArchetypeView_ctor(local_ec);
      local_4._0_1_ = 1;
      FUN_0130e6c0();
      local_4._0_1_ = 2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_144,"Delivery");
      local_4._0_1_ = 3;
      FUN_0130df10(local_144);
      local_4._0_1_ = 2;
      if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
        _free(local_140);
      }
      local_12c = 0xf;
      local_130 = 0;
      local_140 = (void *)((uint)local_140 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_144,"Archetypes");
      local_4._0_1_ = 4;
      FUN_0130df10(local_144);
      local_4._0_1_ = 2;
      if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
        _free(local_140);
      }
      local_12c = 0xf;
      local_130 = 0;
      local_140 = (void *)((uint)local_140 & 0xffffff00);
      CollectionImpl2_DefaultRemove_ctor(local_d8);
      local_4 = CONCAT31(local_4._1_3_,5);
      cVar2 = (**(code **)(local_d8[0] + 0x44))(0);
      if (cVar2 != '\0') {
        uStack_cb = 1;
      }
      cVar2 = (**(code **)(iStack_dc + 0x44))(1);
      if (cVar2 != '\0') {
        uStack_c6 = 1;
      }
      CollectionDB_initSingleton();
      CollectionDB_resolveDefaultCollection();
      if (extraout_EAX != (void *)0x0) {
        pvStack_10c = extraout_EAX;
        FUN_012c1fd0(&puStack_124);
        pvVar9 = pvStack_120;
        while( true ) {
          pvVar3 = local_114;
          if (local_114 < local_118) {
            FUN_00d83c2d();
          }
          puVar8 = puStack_124;
          if ((puStack_124 == (undefined1 *)0x0) || (puStack_124 != local_11c)) {
            FUN_00d83c2d();
          }
          if (pvVar9 == pvVar3) break;
          if (puVar8 == (undefined1 *)0x0) {
            FUN_00d83c2d();
          }
          if (*(void **)(puVar8 + 8) <= pvVar9) {
            FUN_00d83c2d();
          }
          uVar6 = *(undefined4 *)((int)pvVar9 + 4);
          pvVar3 = PropertyContainer_findChild(pvStack_10c);
          if (pvVar3 != (void *)0x0) {
            if (*(void **)(puStack_124 + 8) <= pvVar9) {
              FUN_00d83c2d();
            }
            bVar1 = InstanceIDVector_contains(pvVar3,pvVar9);
            (**(code **)(local_d8[0] + 8))(uVar6,0,bVar1);
            ArchetypeDB_getInstance();
            uVar4 = Archetype_getField3c(this_00);
            ArchetypeDB_getInstance();
            iVar5 = ArchetypeDB_getArchetype(uVar6,uVar4);
            puVar8 = puStack_124;
            if (iVar5 != 0) {
              Engine_CustomSortable_ctor();
              local_4._0_1_ = 6;
              PropertyObject_setOwner(local_144,(void *)(iVar5 + 4),owner);
              FUN_0143aa80(local_c4,local_144);
              local_4 = CONCAT31(local_4._1_3_,5);
              CustomSortable_sub_0143b9b0();
              puVar8 = puStack_124;
            }
          }
          if (*(void **)(puVar8 + 8) <= pvVar9) {
            FUN_00d83c2d();
          }
          pvVar9 = (void *)((int)pvVar9 + 0x10);
          campaign = local_128;
        }
      }
      FUN_0130e120();
      FUN_0130e120();
      FUN_0130e200();
      local_12c = 0xf;
      local_130 = 0;
      local_140 = (void *)((uint)local_140 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_144,"ItemDelivery",0xc);
      local_4._0_1_ = 7;
      uVar6 = FUN_012ec220(local_144);
      local_4._0_1_ = 5;
      if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
        _free(local_140);
      }
      local_12c = 0xf;
      local_130 = 0;
      local_140 = (void *)((uint)local_140 & 0xffffff00);
      FUN_012ebe40("TransactionID",*(undefined4 *)((int)campaign + 0xb4));
      uVar7 = FUN_0130d600(auStack_108);
      local_4._0_1_ = 8;
      FUN_012ebe00(&DAT_0188ce5c,uVar7);
      local_4._0_1_ = 5;
      if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_104);
      }
      uStack_f0 = 0xf;
      uStack_f4 = 0;
      pvStack_104 = (void *)((uint)pvStack_104 & 0xffffff00);
      FUN_012e5730(uVar6);
      FUN_012e5820(uVar6);
      local_128 = Mem_Alloc(0x40);
      local_4._0_1_ = 9;
      if (local_128 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (local_144,"CampaignScreenUpdate");
        local_4 = CONCAT31(local_4._1_3_,10);
        local_148 = 1;
        uVar6 = FUN_012ec110(local_144);
      }
      local_4 = 5;
      if ((local_148 & 1) != 0) {
        local_148 = local_148 & 0xfffffffe;
        if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
          _free(local_140);
        }
        local_12c = 0xf;
        local_130 = 0;
        local_140 = (void *)((uint)local_140 & 0xffffff00);
      }
      FUN_012e5730(uVar6);
      FUN_012e5820(uVar6);
      local_4._0_1_ = 2;
      CollectionImpl2_DefaultRemove_dtor(local_d8);
      local_4._0_1_ = 1;
      FUN_0130d9b0();
      local_4 = (uint)local_4._1_3_ << 8;
      Engine_ArchetypeView_dtor(local_ec);
    }
    *(undefined4 *)((int)campaign + 0xa8) = 0;
    *(undefined4 *)((int)campaign + 0xac) = 0;
    *(undefined4 *)((int)campaign + 0xb0) = 1;
    *(undefined4 *)((int)campaign + 0xb4) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((int)campaign + 0xb8),"",0);
    *(undefined4 *)((int)campaign + 0xd4) = 0;
    *(undefined4 *)((int)campaign + 0xd8) = 0;
    *(undefined1 *)((int)campaign + 0xdc) = 1;
    local_4 = 0xffffffff;
    FUN_012c2de0();
  }
  ExceptionList = local_c;
  return;
}

