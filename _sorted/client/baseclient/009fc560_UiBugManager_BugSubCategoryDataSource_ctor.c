// addr: 0x009fc560
// name: UiBugManager_BugSubCategoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UiBugManager_BugSubCategoryDataSource_ctor(void * this, void * owner)
    */

void * __thiscall UiBugManager_BugSubCategoryDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the DesignTools.BugSubCategory data source, installs
                       UiBugManager::BugSubCategoryDataSource vtables, and stores the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015aa038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_DesignTools_BugSubCategory_01b4a670);
  *(undefined ***)this = UiBugManager::BugSubCategoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = UiBugManager::BugSubCategoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = UiBugManager::BugSubCategoryDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

