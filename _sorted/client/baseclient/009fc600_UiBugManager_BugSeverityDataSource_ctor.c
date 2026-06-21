// addr: 0x009fc600
// name: UiBugManager_BugSeverityDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UiBugManager_BugSeverityDataSource_ctor(void * this, void * owner) */

void * __thiscall UiBugManager_BugSeverityDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the DesignTools.BugSeverity data source, installs
                       UiBugManager::BugSeverityDataSource vtables, and stores the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015aa068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_DesignTools_BugSeverity_01b4a674);
  *(undefined ***)this = UiBugManager::BugSeverityDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = UiBugManager::BugSeverityDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = UiBugManager::BugSeverityDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

