// addr: 0x00ce3140
// name: VehicleRaceResultsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VehicleRaceResultsDataSource_ctor(void * this, void * owner) */

void * __thiscall VehicleRaceResultsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the VehicleRaceProcessor race results data source and initializes
                       its dsRaceResults array member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160e4e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_VehicleRaceProcessor__01b7ba1c);
  *(undefined ***)this = VehicleRaceResultsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = VehicleRaceResultsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = VehicleRaceResultsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)((int)this + 600) =
       SoeUtil::Array<VehicleRaceResultsDataSource::dsRaceResults,0,1>::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}

