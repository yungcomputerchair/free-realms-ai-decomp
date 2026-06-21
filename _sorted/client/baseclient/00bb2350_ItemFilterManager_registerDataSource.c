// addr: 0x00bb2350
// name: ItemFilterManager_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ItemFilterManager_registerDataSource(void * this) */

void __thiscall ItemFilterManager_registerDataSource(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes item-filter GUI data by allocating ItemFilterDataSource and
                       passing it to a nearby item-filter manager setter. Extra utility calls appear
                       to prepare the filter state before registration. */
  puStack_8 = &LAB_015e7a8c;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = BaseItemFilterManager<ClientItemDefinition>::vftable;
  local_4 = 0;
  *(undefined ***)this = ClientItemFilterManager::vftable;
  *(undefined4 *)((int)this + 4) = in_stack_00000004;
  FUN_0107f420(in_stack_00000008,in_stack_0000000c);
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined4 *)((int)this + 0xb1c) = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0xb20) = 0;
  FUN_0107f4e0(uVar1);
  pvVar2 = Mem_Alloc(600);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ItemFilterDataSource_ctor(pvVar2,(void *)((int)this + 8));
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00bb2150(pvVar2);
  ExceptionList = local_c;
  return;
}

