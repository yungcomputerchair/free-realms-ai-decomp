// addr: 0x008a6e90
// name: Client_registerInitialDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Client_registerInitialDataSources(void * client) */

void __fastcall Client_registerInitialDataSources(void *client)

{
  void *dataSource;
  void *pvVar1;
  undefined4 *puVar2;
  void *owner;
  void *owner_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers a broad set of core client GUI datasources when the client has the
                       required state pointer: group/member, player positions, locale/language,
                       matchmaking, job customization, inventory categories, target/boss/NPC,
                       tooltip/ability effect, stat definitions, equipment slots, social share,
                       factory tools, and related tables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157e653;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  if (*(int *)((int)client + 0x3e0) != 0) {
    pvVar1 = Mem_Alloc(600);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = GroupDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5d0) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x268);
    local_4 = 1;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = PlayerPositionsDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5dc) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x278);
    local_4 = 2;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = LocaleDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x60c) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x278);
    local_4 = 3;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = LanguageDataSource_ctor_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x610) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x28c);
    local_4 = 4;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = MatchmakingQueuesDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x614) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x26c);
    local_4 = 5;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = MatchmakingRequestsDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x618) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x2b0);
    local_4 = 6;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = JobCustomizationDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x61c) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x274);
    local_4 = 7;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = MatchmakingAvailableBuddiesDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x620) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x274);
    local_4 = 8;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_00a7ee80();
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x624) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x25c);
    local_4 = 9;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = GroupMemberDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5d4) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x29c);
    local_4 = 10;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_00a7c6e0(client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5e4) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x3c);
    local_4 = 0xb;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = InventoryCategoriesDataSource_ctor(pvVar1,*(int *)((int)client + 0x1bc));
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5e0) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x26c);
    local_4 = 0xc;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = TargetDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x600) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(600);
    local_4 = 0xd;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = BossesDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x604) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x26c);
    local_4 = 0xe;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = NpcsDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x608) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x298);
    local_4 = 0xf;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = TooltipDataSource_ctor(pvVar1,0x1801980);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5ec) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x2d0);
    local_4 = 0x10;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = ScreenDirectionIndicatorDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5e8) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x37c);
    local_4 = 0x11;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_00a75230(PTR_s_Tooltips_ActiveAbilityEffects_01b50adc);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5f0) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x37c);
    local_4 = 0x12;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_00a75230(PTR_s_Tooltips_PassiveAbilityEffects_01b50ae0);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5f4) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x254);
    local_4 = 0x13;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = StatDefinitionsDataSource_ctor(pvVar1,owner);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5f8) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    puVar2 = Mem_Alloc(4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = NameValueDataSource::vftable;
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)client + 0x62c) = puVar2;
    pvVar1 = Mem_Alloc(0x254);
    local_4 = 0x15;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = EquipmentSlotsDataSource_ctor(pvVar1,owner_00);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x5fc) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x2ec);
    local_4 = 0x16;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)TintGroupDataSource_ctor(client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x628) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x670);
    local_4 = 0x17;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = FactoryToolsDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x63c) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
    pvVar1 = Mem_Alloc(0x26c);
    local_4 = 0x18;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = SocialShareDataSource_ctor(pvVar1,client);
    }
    local_4 = 0xffffffff;
    *(void **)((int)client + 0x640) = pvVar1;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  }
  ExceptionList = local_c;
  return;
}

