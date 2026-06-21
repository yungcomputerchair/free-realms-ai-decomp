// addr: 0x00c665c0
// name: VehicleDemolitionDerbyResultsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VehicleDemolitionDerbyResultsDataSource_ctor(void * this, void * owner)
    */

void * __thiscall VehicleDemolitionDerbyResultsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the VehicleDemolitionDerby derby results data source and
                       initializes its dsDerbyResults array member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ffad6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_VehicleDemolitionDerb_01b71da4);
  *(undefined ***)this = VehicleDemolitionDerbyResultsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = VehicleDemolitionDerbyResultsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = VehicleDemolitionDerbyResultsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)((int)this + 600) =
       SoeUtil::Array<VehicleDemolitionDerbyResultsDataSource::dsDerbyResults,0,1>::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}

