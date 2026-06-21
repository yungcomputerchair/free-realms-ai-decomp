// addr: 0x00a73a10
// name: EquipmentSlotsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EquipmentSlotsDataSource_ctor(void * this, void * owner) */

void * __fastcall EquipmentSlotsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.EquipmentSlots data source by running GuiDsTable
                       construction and installing EquipmentSlotsDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ba698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_EquipmentSlots_01b50800);
  *(undefined ***)this = EquipmentSlotsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = EquipmentSlotsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = EquipmentSlotsDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

