// addr: 0x00bd9e20
// name: PlayerCustomizationManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayerCustomizationManager_registerDataSources(void * this) */

void __thiscall PlayerCustomizationManager_registerDataSources(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates player customization item datasources for hair, hair color, facial
                       hair, skin tone, eye color, face design, and species item groups. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015eee89;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  FUN_00bd9d70(uVar1);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined ***)((int)this + 100) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x68) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined ***)((int)this + 0x74) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x78) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined ***)((int)this + 0x84) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x88) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined ***)((int)this + 0x94) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x98) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined ***)((int)this + 0xa4) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0xa8) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined ***)((int)this + 0xd4) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0xd8) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined ***)((int)this + 0xe4) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0xe8) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined ***)((int)this + 0xf4) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0xf8) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined ***)((int)this + 0x104) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x108) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined ***)((int)this + 0x114) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x118) = &DAT_01beaac0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  local_4._0_1_ = 0x12;
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x13;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemGroupItemsDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0x12;
  FUN_00a3ad50(pvVar2);
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x14;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemGroupItemsDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0x12;
  FUN_00a3ad50(pvVar2);
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x15;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemGroupItemsDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0x12;
  FUN_00a3ad50(pvVar2);
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x16;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemGroupItemsDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0x12;
  FUN_00a3ad50(pvVar2);
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x17;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemGroupItemsDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0x12;
  FUN_00a3ad50(pvVar2);
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x18;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemGroupItemsDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0x12;
  FUN_00a3ad50(pvVar2);
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x19;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemGroupItemsDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0x12;
  FUN_00a3ad50(pvVar2);
  pvVar2 = Mem_Alloc(0x52fc);
  local_4._0_1_ = 0x1a;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = CustomizationItemDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_00bd5aa0(pvVar2);
  ExceptionList = local_c;
  return;
}

