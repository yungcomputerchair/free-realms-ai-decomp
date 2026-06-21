// addr: 0x00cbf9b0
// name: HousingInstanceManager_registerFixtureDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HousingInstanceManager_registerFixtureDataSources(void * this) */

void __thiscall HousingInstanceManager_registerFixtureDataSources(void *this)

{
  void *pvVar1;
  void *in_stack_00000004;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds housing instance fixture GUI tables, including
                       BaseClient.Housing.Instance and BaseClient.Housing.Instance.FixtureItems
                       datasources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160b848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Housing_Instance_01b78178);
  *(undefined ***)this = HousingDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = HousingDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = HousingDataSource::vftable;
  *(undefined ***)((int)this + 0x254) =
       SoeUtil::Array<SoeUtil::StrongType<__int64,SoeUtilSignatureHousingInstanceGuid,0>,0,1>::
       vftable;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(void **)((int)this + 0x264) = in_stack_00000004;
  *(undefined4 *)((int)this + 0x26c) = in_stack_00000008;
  *(undefined4 *)((int)this + 0x270) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  local_4._0_1_ = 3;
  pvVar1 = Mem_Alloc(0x270);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FixtureDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4._0_1_ = 3;
  FUN_00cbb640(pvVar1);
  pvVar1 = Mem_Alloc(0x5304);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FixtureItemDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00cbb6b0(pvVar1);
  ExceptionList = local_c;
  return;
}

