// addr: 0x00cfd6e0
// name: ClientActivityPortalSectionDatasource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientActivityPortalSectionDatasource_ctor(void * this, void * owner)
    */

void * __fastcall ClientActivityPortalSectionDatasource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the Activities.Ref.PortalSections data source and initializes its
                       inherited list/hash storage. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01611266;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_Activities_Ref_PortalSections_01b7f1e8);
  local_4 = 0;
  *(undefined ***)this = ClientActivityPortalSectionDatasource::vftable;
  *(undefined ***)((int)this + 0x30) = ClientActivityPortalSectionDatasource::vftable;
  *(undefined ***)((int)this + 0x34) = ClientActivityPortalSectionDatasource::vftable;
  FUN_009c8720(uVar1);
  ExceptionList = local_c;
  return this;
}

