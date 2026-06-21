// addr: 0x00c4ff40
// name: BreadcrumbDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BreadcrumbDataSource_ctor(void * this, void * owner) */

void * __thiscall BreadcrumbDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Breadcrumb data source, installs
                       BreadcrumbDataSource vtables, stores owner/context, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fdc58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Breadcrumb_018329bd_3_01b70e60);
  *(undefined ***)this = BreadcrumbDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BreadcrumbDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BreadcrumbDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

