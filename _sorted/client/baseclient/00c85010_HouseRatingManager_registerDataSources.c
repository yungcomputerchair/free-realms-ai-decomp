// addr: 0x00c85010
// name: HouseRatingManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HouseRatingManager_registerDataSources(void * this) */

void __thiscall HouseRatingManager_registerDataSources(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates housing rating/featured datasources and wires them through nearby
                       house-rating manager helpers during ClientPcData deserialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01604f4b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  FUN_00c84bc0(uVar1);
  local_4 = 0;
  FUN_00c84c20();
  local_4._0_1_ = 1;
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = HouseRatingDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0xbb4) = 0;
  FUN_00c81ae0(pvVar2);
  local_4._0_1_ = 3;
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = FeaturedDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)((int)this + 3000) = 0;
  FUN_00c81b70(pvVar2);
  ExceptionList = local_c;
  return;
}

