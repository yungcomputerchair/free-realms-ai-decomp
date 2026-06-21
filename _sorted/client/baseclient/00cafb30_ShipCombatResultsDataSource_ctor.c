// addr: 0x00cafb30
// name: ShipCombatResultsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ShipCombatResultsDataSource_ctor(void * this, void * owner) */

void * __thiscall ShipCombatResultsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ShipCombatProcessor results data source and initializes its
                       dsShipCombatResults array member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016099b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_ShipCombatProcessor_S_01b77184);
  *(undefined ***)this = ShipCombatResultsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ShipCombatResultsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ShipCombatResultsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)((int)this + 600) =
       SoeUtil::Array<ShipCombatResultsDataSource::dsShipCombatResults,0,1>::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}

