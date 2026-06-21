// addr: 0x012c55b0
// name: SearchCriteria_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SearchCriteria_dtor(void * this) */

void __fastcall SearchCriteria_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SearchCriteria: installs the SearchCriteria vftable during
                       teardown and delegates cleanup to FUN_012c51e0. The vftable symbol provides
                       the class name. */
  puStack_8 = &LAB_0166ea98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SearchCriteria::vftable;
  local_4 = 0xffffffff;
  FilterCriteria_dtor(this);
  ExceptionList = local_c;
  return;
}

