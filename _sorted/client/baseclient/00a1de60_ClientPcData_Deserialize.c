// addr: 0x00a1de60
// name: ClientPcData_Deserialize
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ClientPcData_Deserialize(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 extraout_EAX;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Preserves the existing identified symbol ClientPcData_Deserialize; code
                       initializes or operates on that class and is queued for sidecar write-back.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015af51e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = ClientPcData::vftable;
  FUN_00a1c160(uVar1);
  local_4 = 0;
  param_1[0xef] = param_2;
  param_1[0xf2] = DAT_01be66a8;
  param_1[0xf3] = DAT_01be66ac;
  FUN_0070bac0();
  local_4._0_1_ = 1;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined1 *)((int)param_1 + 0x461) = 0;
  param_1[0x119] = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  *(undefined1 *)((int)param_1 + 0x469) = 0;
  *(undefined1 *)((int)param_1 + 0x46a) = 0;
  param_1[0x11b] = 2;
  param_1[0x11c] = 0xd9;
  FUN_0101cd40();
  FUN_0101cd40();
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  FUN_00a197e0();
  local_4._0_1_ = 2;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  _memset(param_1 + 0x150,0,400);
  param_1[0x14c] = 0;
  local_4._0_1_ = 3;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  FUN_00a19620();
  local_4._0_1_ = 4;
  ActivityFinderManager_registerDataSources(param_1 + 0x2e7);
  local_4._0_1_ = 5;
  FUN_00b596f0(param_2);
  local_4._0_1_ = 6;
  QuestManager_registerDataSources(param_1 + 0x6b74);
  local_4._0_1_ = 7;
  FUN_00bad8f0(param_2,"BaseClient");
  local_4._0_1_ = 8;
  TradeData_ctor(param_1 + 0x7402,param_2);
  local_4._0_1_ = 9;
  GuildManager_registerDataSources(param_1 + 0x742c);
  local_4._0_1_ = 10;
  BrokerManager_registerDataSources(param_1 + 0x74c4);
  local_4._0_1_ = 0xb;
  PlayerTitleManager_registerDataSource(param_1 + 0x74ca);
  local_4._0_1_ = 0xc;
  FUN_00abf850(param_2,param_1 + 0xd5d2);
  local_4._0_1_ = 0xd;
  param_1[0xb0b0] = 0;
  MountManager_registerDataSources(param_1 + 0xb0b2);
  local_4._0_1_ = 0xe;
  HouseRatingManager_registerDataSources(param_1 + 0xb0d0);
  local_4._0_1_ = 0xf;
  FUN_00be89b0(param_2);
  local_4._0_1_ = 0x10;
  FUN_00be8750(param_2);
  local_4._0_1_ = 0x11;
  ProgressiveQuestManager_registerDataSources(param_1 + 0xd3d0);
  param_1[0xd3d5] = 0;
  param_1[0xd3d8] = 0;
  param_1[0xd3d9] = 0;
  *(undefined1 *)(param_1 + 0xd3da) = 0;
  *(undefined1 *)(param_1 + 0xd3de) = 0;
  param_1[0xd3e1] = SoeUtil::List<NameChangeTracker::NameChangeInfo,-1>::vftable;
  param_1[0xd3e4] = 0;
  param_1[0xd3e2] = 0;
  param_1[0xd3e3] = 0;
  local_4._0_1_ = 0x14;
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x15;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = NameChangeDataSource_ctor(pvVar2,param_2,param_1 + 0xd3e1);
  }
  local_4._0_1_ = 0x14;
  param_1[0xd3e5] = 0;
  FUN_00a112d0(pvVar2);
  local_4._0_1_ = 0x16;
  FUN_00a1af80();
  param_1[0xd50a] = 0;
  param_1[0xd50b] = 0;
  param_1[0xd50c] = 0;
  param_1[0xd50d] = 0;
  param_1[0xd50e] = 0;
  param_1[0xd50f] = 0;
  param_1[0xd510] = 0;
  param_1[0xd511] = 0;
  param_1[0xd509] = 0;
  local_4._0_1_ = 0x18;
  MessageManager_registerMessageDataSource(param_1 + 0xd512);
  local_4._0_1_ = 0x19;
  FUN_0101dcd0();
  local_4._0_1_ = 0x1a;
  PlayerCustomizationManager_registerDataSources(param_1 + 0xd537);
  local_4._0_1_ = 0x1b;
  SocialManager_registerFriendsIgnoreDataSources(param_1 + 0xd588);
  local_4._0_1_ = 0x1c;
  pvVar2 = Mem_Alloc(0x25c);
  local_4._0_1_ = 0x1d;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = AcquaintanceDataSource_ctor(pvVar2,param_2);
  }
  local_4._0_1_ = 0x1c;
  param_1[0xd58b] = 0;
  FUN_00a11430(pvVar2);
  local_4._0_1_ = 0x1e;
  pvVar2 = Mem_Alloc(0x2cc);
  local_4._0_1_ = 0x1f;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = CharacterDataSource_ctor(pvVar2,param_2);
  }
  local_4._0_1_ = 0x1e;
  param_1[0xd58c] = 0;
  FUN_00a114c0(pvVar2);
  local_4._0_1_ = 0x20;
  pvVar2 = Mem_Alloc(0xed4);
  local_4._0_1_ = 0x21;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    RecipeManager_registerDataSources(pvVar2,param_2);
    uVar3 = extraout_EAX;
  }
  local_4._0_1_ = 0x20;
  param_1[0xd58d] = 0;
  FUN_00a11550(uVar3);
  local_4._0_1_ = 0x22;
  pvVar2 = Mem_Alloc(0x26c);
  local_4._0_1_ = 0x23;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ProfileDataSource_ctor(pvVar2,param_2);
  }
  local_4._0_1_ = 0x22;
  param_1[0xd58e] = 0;
  FUN_00a115e0(pvVar2);
  local_4._0_1_ = 0x24;
  pvVar2 = Mem_Alloc(0x26c);
  local_4._0_1_ = 0x25;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ProfileFilteredDataSource_ctor(pvVar2,param_2);
  }
  local_4._0_1_ = 0x24;
  param_1[0xd58f] = 0;
  FUN_00a11670(pvVar2);
  local_4._0_1_ = 0x26;
  pvVar2 = Mem_Alloc(0x25c);
  local_4._0_1_ = 0x27;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = AbilityLineDataSource_ctor(pvVar2,param_2);
  }
  local_4._0_1_ = 0x26;
  param_1[0xd590] = 0;
  FUN_00a11700(pvVar2);
  local_4._0_1_ = 0x28;
  pvVar2 = Mem_Alloc(0x27c);
  local_4._0_1_ = 0x29;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else if (param_2 == (void *)0x0) {
    uVar3 = FUN_00c49360(0,param_1 + 0xd5d2);
  }
  else {
    uVar3 = FUN_00c49360((int)param_2 + 4,param_1 + 0xd5d2);
  }
  local_4._0_1_ = 0x28;
  param_1[0xd591] = 0;
  FUN_00a11790(uVar3);
  local_4._0_1_ = 0x2a;
  pvVar2 = Mem_Alloc(0x26c);
  local_4._0_1_ = 0x2b;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00c8e550();
  }
  local_4._0_1_ = 0x2a;
  param_1[0xd592] = 0;
  FUN_00a11820(uVar3);
  local_4._0_1_ = 0x2c;
  pvVar2 = Mem_Alloc(0x2b0);
  local_4._0_1_ = 0x2d;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00c8e250(param_2);
  }
  local_4._0_1_ = 0x2c;
  param_1[0xd593] = 0;
  FUN_00a118b0(uVar3);
  local_4._0_1_ = 0x2e;
  pvVar2 = Mem_Alloc(600);
  local_4._0_1_ = 0x2f;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = CharacterStatsDataSource_ctor(pvVar2,param_2);
  }
  local_4._0_1_ = 0x2e;
  param_1[0xd594] = 0;
  FUN_00a11940(pvVar2);
  local_4._0_1_ = 0x30;
  MembershipIsActiveDataSourceHolder_ctor(param_1 + 0xd595);
  local_4._0_1_ = 0x31;
  pvVar2 = Mem_Alloc(0x25c);
  local_4._0_1_ = 0x32;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = PlayerEffectTagDataSource_ctor(pvVar2,param_2);
  }
  local_4._0_1_ = 0x31;
  param_1[0xd596] = 0;
  FUN_00a119d0(pvVar2);
  local_4._0_1_ = 0x33;
  FUN_009931e0(param_2);
  local_4._0_1_ = 0x34;
  FUN_009918d0(param_2);
  local_4._0_1_ = 0x35;
  FUN_00a17b90();
  local_4._0_1_ = 0x36;
  FUN_00798600();
  local_4 = CONCAT31(local_4._1_3_,0x37);
  FUN_00b5aa40("Resources/");
  FUN_00b562e0("Resources/");
  (**(code **)(param_1[0x2e7] + 4))("Resources/");
  pvVar2 = Mem_Alloc(0xdc28);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x38);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00c75210(param_2,param_1 + 0xd5d2);
  }
  param_1[0xb0b0] = uVar3;
  ExceptionList = param_1;
  return param_1;
}

