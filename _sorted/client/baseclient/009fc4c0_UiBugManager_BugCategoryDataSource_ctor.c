// addr: 0x009fc4c0
// name: UiBugManager_BugCategoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UiBugManager_BugCategoryDataSource_ctor(void * this, void * owner) */

void * __thiscall UiBugManager_BugCategoryDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the DesignTools.BugCategory data source, installs
                       UiBugManager::BugCategoryDataSource vtables, and stores the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015aa008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_DesignTools_BugCategory_01b4a66c);
  *(undefined ***)this = UiBugManager::BugCategoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = UiBugManager::BugCategoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = UiBugManager::BugCategoryDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

