// addr: 0x00a84d70
// name: JobCustomizationDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * JobCustomizationDataSource_ctor(void * this, void * owner) */

void * __thiscall JobCustomizationDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.JobCustomizationData data source, stores
                       owner/default values, and clears a block of customization state fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bcab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_JobCustomizationData_01b51e04);
  *(undefined ***)this = JobCustomizationDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = JobCustomizationDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = JobCustomizationDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = DAT_01be78c8;
  *(undefined4 *)((int)this + 0x25c) = DAT_01be78cc;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  ExceptionList = local_c;
  return this;
}

