// addr: 0x00997030
// name: ScreenDirectionIndicatorDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ScreenDirectionIndicatorDataSource_ctor(void * this, void * owner) */

void * __thiscall ScreenDirectionIndicatorDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.ScreenDirectionIndicatorData data source,
                       initializing distance list, bool array, int array, owner, and state flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159c662;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_ScreenDirectionIndica_01b457d4);
  *(undefined ***)this = ScreenDirectionIndicatorDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ScreenDirectionIndicatorDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ScreenDirectionIndicatorDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = SoeUtil::List<DistanceData,-1>::vftable;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_009965a0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00996600();
  *(void **)((int)this + 700) = owner;
  *(undefined1 *)((int)this + 0x2c0) = 0;
  ExceptionList = local_c;
  return this;
}

